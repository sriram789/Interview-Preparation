#include<iostream>

#include"../Queue/queue.cpp"

struct tubelight{
    int val;
    tubelight(){
        val = -1;
    }
    tubelight(int data){
        val = data;
    }
};


std::ostream& operator << (std::ostream& o, const tubelight& a)
{
    o <<a.val<<std::endl;
    return o;
}

int main(){
    tubelight l1(10);
    tubelight l2(20);
    tubelight l3(30);
    queue<tubelight> list(NULL, NULL, 0);
    list.enqueue(l1);
    list.enqueue(l2);
    list.enqueue(l3);
    std::cout<<list.dequeue()<<"\n";
    std::cout<<list.dequeue()<<"\n";
    std::cout<<list.dequeue()<<"\n";
    std::cout<<list.dequeue()<<"\n";
    std::cout<<list.dequeue()<<"\n";
    std::cout<<list.dequeue()<<"\n";
    return 0;
}
