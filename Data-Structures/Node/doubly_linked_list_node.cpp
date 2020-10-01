#include<iostream>

template <class data_type> class doubly_linked_list_node {
    private:
        data_type * data;
        doubly_linked_list_node<data_type> * next_node_pointer;
        doubly_linked_list_node<data_type> * previous_node_pointer;

    public:
        doubly_linked_list_node(data_type * data, doubly_linked_list_node<data_type> *next_node_pointer, doubly_linked_list_node<data_type> *previous_node_pointer);
        data_type * get_node_data();
        doubly_linked_list_node<data_type> * get_next_node_pointer();
        doubly_linked_list_node<data_type> * get_previous_node_pointer();
        void set_node_data(data_type * data);
        void set_next_node_pointer(doubly_linked_list_node<data_type> * node_pointer);
        void set_previous_node_pointer(doubly_linked_list_node<data_type> * node_pointer);
        void display();
};

template <class data_type> doubly_linked_list_node<data_type>::doubly_linked_list_node(data_type * data, doubly_linked_list_node<data_type> * next_node_pointer, doubly_linked_list_node<data_type> * previous_node_pointer) {
    this->data = data;
    this->next_node_pointer = next_node_pointer;
    this->previous_node_pointer = previous_node_pointer;
}

template <class data_type> data_type * doubly_linked_list_node<data_type>::get_node_data() {
    return this->data;
}

template <class data_type> doubly_linked_list_node<data_type> * doubly_linked_list_node<data_type>::get_next_node_pointer() {
    return this->next_node_pointer;
}

template <class data_type> doubly_linked_list_node<data_type> * doubly_linked_list_node<data_type>::get_previous_node_pointer() {
    return this->previous_node_pointer;
}

template <class data_type> void doubly_linked_list_node<data_type>::set_node_data(data_type * data) {
    this->data = data;
}

template <class data_type> void doubly_linked_list_node<data_type>::set_next_node_pointer(doubly_linked_list_node<data_type> * node_pointer) {
    this->next_node_pointer = node_pointer;
}

template <class data_type> void doubly_linked_list_node<data_type>::set_previous_node_pointer(doubly_linked_list_node<data_type> * node_pointer) {
    this->previous_node_pointer = node_pointer;
}

template <class data_type> void doubly_linked_list_node<data_type>::display() {
    std::cout<<"Data: "<<this->data<<"\t"<<"Next Node Pointer: "<<this->next_node_pointer<<"\t"<<"Previous Node Pointer: "<<this->previous_node_pointer<<"\n";
}
