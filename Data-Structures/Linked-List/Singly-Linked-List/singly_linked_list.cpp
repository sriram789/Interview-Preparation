#include<iostream>

#include "../../Node/singly_linked_list_node.cpp"

template<class data_type>
class singly_linked_list {
    private:
        singly_linked_list_node<data_type> * start_node_pointer;
        long long size;
    public:
        singly_linked_list(singly_linked_list_node<data_type>* start_node_pointer) {
            this->start_node_pointer = start_node_pointer;
            this->size = (start_node_pointer) ? 1 : 0;
        }

        long long get_list_size() {
            return size;
        }

        singly_linked_list_node<data_type> * get_start_node_pointer() {
            return this->start_node_pointer;
        }

        void insert(singly_linked_list_node<data_type>* node_pointer, long long position) {
            if(position == 0) {
                node_pointer->set_next_node_pointer(start_node_pointer);
                start_node_pointer = node_pointer;
            }else{
                long long iterator = 0;
                singly_linked_list_node<data_type>* temporary_node_pointer = start_node_pointer;

                while(iterator++ < position-1)
                    temporary_node_pointer = temporary_node_pointer->get_next_node_pointer();
                
                node_pointer->set_next_node_pointer(temporary_node_pointer->get_next_node_pointer());
                temporary_node_pointer->set_next_node_pointer(node_pointer);
            }

            this->size++;
        }

        data_type remove(long long position) {
            if(position >= this->size){
                std::cout<<"Given position is out of range"<<"\n";
                return 0;
            }

            long long iterator = 0;
            data_type data;
            singly_linked_list_node<data_type>* temporary_node_pointer = start_node_pointer;
            singly_linked_list_node<data_type>* deleted_node_pointer = NULL;

            if(position == 0){
                deleted_node_pointer = start_node_pointer;
                start_node_pointer = start_node_pointer->get_next_node_pointer();
            }

            while(iterator++ < position-1)
                temporary_node_pointer = temporary_node_pointer->get_next_node_pointer();
            
            deleted_node_pointer = temporary_node_pointer->get_next_node_pointer();
            temporary_node_pointer->set_next_node_pointer(deleted_node_pointer->get_next_node_pointer());
            data = deleted_node_pointer->get_node_data();

            free(deleted_node_pointer);
            this->size--;
            return data;
        }

        void display() {
            singly_linked_list_node<data_type>* temporary_node_pointer = start_node_pointer;

            while(temporary_node_pointer) {
                std::cout<<temporary_node_pointer->get_node_data()<<" ";
                temporary_node_pointer = temporary_node_pointer->get_next_node_pointer();
            }
            std::cout<<"\n";
        }
};
