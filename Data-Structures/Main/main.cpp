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
    singly_linked_list<tubelight*> *list = new singly_linked_list<tubelight*>(NULL);
    list->insert(new singly_linked_list_node<tubelight*>(l1, NULL), 0);
    list->insert(new singly_linked_list_node<tubelight*>(l2, NULL), 1);
    list->insert(new singly_linked_list_node<tubelight*>(l3, NULL), 2);
    list->display();
    return 0;
}