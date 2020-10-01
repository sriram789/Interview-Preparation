#include<iostream>

#include"../Linked-List/Singly-Linked-List/singly_linked_list.cpp"

struct tubelight{
    int val;
    tubelight(int data){
        val = data;
    }
};

int main(){
    tubelight *l1 = new tubelight(10);
    tubelight *l2 = new tubelight(20);
    tubelight *l3 = new tubelight(30);
    singly_linked_list<tubelight> *list = new singly_linked_list<tubelight>(NULL);
    list->insert(l1, 0);
    list->insert(l2, 1);
    list->insert(l3, 2);
    list->display();
    return 0;
}
