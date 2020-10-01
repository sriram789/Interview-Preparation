#include<iostream>

#include"../Stack/stack.cpp"

struct tubelight{
    int val;
    tubelight(){
        val = -1;
    }
    tubelight(int data){
        val = data;
    }
};

int main(){
    tubelight l1(10);
    tubelight l2(20);
    tubelight l3(30);
    stack<char> list(NULL, 0);
    list.push('s');
    list.push('l');
    list.push('v');
    std::cout<<list.pop()<<"\n";
    std::cout<<list.pop()<<"\n";
    std::cout<<list.pop()<<"\n";
    std::cout<<list.pop()<<"\n";
    std::cout<<list.pop()<<"\n";
    std::cout<<list.pop()<<"\n";
    return 0;
}
