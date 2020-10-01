#include<iostream>
#include "../Algorithm/kadanes_algorithm.cpp"

using namespace std;

int main() {
    int array[] = {-1000, 3, 1000, 101, -1000};
    cout<<kadanes_algorithm(array, 5);
    return 0;
}
