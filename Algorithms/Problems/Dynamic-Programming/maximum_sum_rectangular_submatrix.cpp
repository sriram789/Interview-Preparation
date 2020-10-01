#include<iostream>
#include<climits>
#include "../../Algorithm/kadanes_algorithm.cpp"

using namespace std;

#define ROW_SIZE 4
#define COLUMN_SIZE 5

long max_up = 0, max_down = 0, max_left = 0, max_right = 0;
long max_sum = LONG_MIN;

int arr[ROW_SIZE][COLUMN_SIZE] = {
        {2, 1, -3, -4, 5},
        {0, 6 , 3, 4, 1},
        {2, -2, -1, 4, -5},
        {-3, 3 , 1, 0, 3}
                    };

int main() {
    int column_array[ROW_SIZE];
    for(long L = 0; L < COLUMN_SIZE ; L++){
        memset(column_array, 0, sizeof(column_array));
        for(long R = L; R < COLUMN_SIZE ; R++){
            for(int i = 0; i<ROW_SIZE; i++)
                column_array[i] += arr[i][R];
        
            struct kadanes_solution<int> result = kadanes_algorithm(column_array, sizeof(column_array)/sizeof(column_array[0]));
            if(result.maximum_sum > max_sum){
                max_sum = result.maximum_sum;
                max_up = result.x_index;
                max_down = result.y_index;
                max_left = L;
                max_right = R;
            }
        }
    }
    cout<<max_sum<<" "<<max_up<<" "<<max_down<<"\t";
    cout<<max_left<<" "<<max_right<<"\n";
    return 0;
}
