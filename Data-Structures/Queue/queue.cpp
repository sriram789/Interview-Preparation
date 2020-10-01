#include<iostream>

#include "../Node/doubly_linked_list_node.cpp"

template<class data_type> class queue {
    private:
        long long size;
        doubly_linked_list_node<data_type> * front;
        doubly_linked_list_node<data_type> * rear;
    public:
        queue(doubly_linked_list_node<data_type> * front, doubly_linked_list_node<data_type> * rear, long long size);
        long long get_queue_size();
        void enqueue(data_type data);
        data_type dequeue();
};

template<class data_type> queue<data_type>::queue(doubly_linked_list_node<data_type> * front, doubly_linked_list_node<data_type> *rear, long long size) {
    this->size = size;
    this->front = front;
    this->rear = rear;
}

template<class data_type> long long queue<data_type>::get_queue_size() {
    return this->size();
}

template<class data_type> void queue<data_type>::enqueue(data_type data) {
    doubly_linked_list_node<data_type> * new_node = new doubly_linked_list_node<data_type>(data, NULL, NULL);
    if(!front) {
        front = rear = new_node;
    } else {
        rear->set_next_node_pointer(new_node);
        new_node->set_previous_node_pointer(rear);
        rear = new_node;
    }
    this->size++;
}

template<class data_type> data_type queue<data_type>::dequeue() {
    doubly_linked_list_node<data_type> * deleted_node;
    data_type deleted_data;
    try{
        if(size == 0)
            throw(size);
        
        deleted_node = this->front;
        deleted_data = deleted_node->get_node_data();
        
        front = front->get_next_node_pointer();
        if(front)
            front->set_previous_node_pointer(NULL);

        free(deleted_node);

        this->size--;
    } catch(long long error_code) {
        std::cout<<"No elements in the queue\n";
        deleted_data = *(new data_type());
    }

    return deleted_data;
}
