#include<iostream>

#include "../Node/doubly_linked_list_node.cpp"

template<class data_type> class stack {
    private:
        doubly_linked_list_node<data_type> * top;
        long long size;
    public:
        stack(doubly_linked_list_node<data_type> * top, long long size);
        long long get_size();
        data_type pop();
        void push(data_type data);
};

template<class data_type> stack<data_type>::stack(doubly_linked_list_node<data_type> * top, long long size) {
    this->top = top;
    this->size = size;
}

template<class data_type> long long stack<data_type>::get_size() {
    return this->size;
}

template<class data_type> void stack<data_type>::push(data_type data) {
    doubly_linked_list_node<data_type> * new_node = new doubly_linked_list_node<data_type>(data, NULL, NULL);

    if(!top) {
        this->top = new_node;
    } else {
        this->top->set_next_node_pointer(new_node);
        new_node->set_previous_node_pointer(this->top);
        this->top = new_node;
    }

    this->size++;
}

template<class data_type> data_type stack<data_type>::pop() {
    doubly_linked_list_node<data_type> * deleted_node;
    data_type deleted_data;

    try{
        if(size == 0) 
            throw(size);

        deleted_node = this->top;
        deleted_data = deleted_node->get_node_data();
        this->top = deleted_node->get_previous_node_pointer();
    
        free(deleted_node);

        this->size--;
    } catch(long long error_code) {
        std::cout<<"No elements in the stack\n";
        deleted_data = *(new data_type());
    }

    return deleted_data;
}

