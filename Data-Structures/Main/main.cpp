#include<iostream>

#include"../Linked-List/Singly-Linked-List/singly_linked_list.cpp"

int main(){
    singly_linked_list<std::string> *list = new singly_linked_list<std::string>(NULL);
    list->insert(new singly_linked_list_node<std::string>("sriram", NULL), 0);
    list->insert(new singly_linked_list_node<std::string>("vibhaa", NULL), 1);
    list->insert(new singly_linked_list_node<std::string>("yazhini", NULL), 2);
    list->display();
    return 0;
}