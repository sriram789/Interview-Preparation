#include<iostream>
template<typename data_type> struct kadanes_solution{
    data_type maximum_sum;
    long long x_index;
    long long y_index;

    kadanes_solution(data_type maximum_sum, long long x_index, long long y_index){
        this->maximum_sum = maximum_sum;
        this->x_index = x_index;
        this->y_index = y_index;
    }
};

template<typename data_type> std::ostream& operator << (std::ostream& out, const kadanes_solution<data_type>& result) {
    out<<"Maximum Sum: "<<result.maximum_sum<<"\t Range: ("<<result.x_index<<","<<result.y_index<<")\n";
    return out;
}

template<typename data_type> struct kadanes_solution<data_type> kadanes_algorithm(data_type * array, long long size) {
    data_type global_max, current_max;
    long long start, end;

    start = end = 0;
    global_max = current_max = array[0];

    for(long long i=1; i<size; i++){
        data_type temp = current_max;
        current_max = std::max(array[i], array[i]+current_max);

        if(current_max > global_max) {
            if(array[i] > array[i]+temp) {
                start = i;
            }
            end = i;
        }

        global_max = std::max(current_max, global_max);
    }
    kadanes_solution<data_type> result(global_max, start, end);
    return result;
}
