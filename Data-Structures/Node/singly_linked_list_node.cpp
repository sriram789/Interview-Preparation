#include<iostream>

template <class data_type> class singly_linked_list_node {
    private:
        data_type data;
        singly_linked_list_node<data_type> * next_node_pointer;

    public:
        singly_linked_list_node(data_type data, singly_linked_list_node<data_type> * node_pointer);
        data_type get_node_data();
        singly_linked_list_node<data_type> * get_next_node_pointer();
        void set_node_data(data_type data);
        void set_next_node_pointer(singly_linked_list_node<data_type> * node_pointer);
        void display();
};

template <class data_type> singly_linked_list_node<data_type>::singly_linked_list_node(data_type data, singly_linked_list_node<data_type> * node_pointer) {
    this->data = data;
    this->next_node_pointer = node_pointer;
}

template <class data_type> data_type singly_linked_list_node<data_type>::get_node_data() {
    return data;
}

template <class data_type> singly_linked_list_node<data_type> * singly_linked_list_node<data_type>::get_next_node_pointer() {
    return next_node_pointer;
}

template <class data_type> void singly_linked_list_node<data_type>::set_node_data(data_type data) {
    this->data = data;
}

template <class data_type> void singly_linked_list_node<data_type>::set_next_node_pointer(singly_linked_list_node<data_type> * node_pointer) {
    this->next_node_pointer = node_pointer;
}

template <class data_type> void singly_linked_list_node<data_type>::display() {
    std::cout<<"Data: "<<data<<"\t"<<"Next Node Pointer: "<<next_node_pointer<<"\n";
}
