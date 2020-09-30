#include<iostream>

template <class data_type>
class singly_linked_list_node {
    private:
        data_type data;
        singly_linked_list_node * next_node_pointer;
    
    public:
        singly_linked_list_node(data_type data, singly_linked_list_node * node_pointer) {
            this->data = data;
            this->next_node_pointer = node_pointer;
        }

        data_type get_node_data() {
            return data;
        }

        singly_linked_list_node * get_next_node_pointer() {
            return next_node_pointer;
        }

        void set_node_data(data_type data) {
            this->data = data;
        }

        void set_next_node_pointer(singly_linked_list_node * node_pointer) {
            this->next_node_pointer = node_pointer;
        }

        void display() {
            std::cout<<"Data: "<<data<<"\t"<<"Next Node Pointer: "<<next_node_pointer<<"\n";
        }
};
