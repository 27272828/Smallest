#include <iostream>
#include <climits>  // For INT_MAX

using namespace std;

int findSmallest(int arr[], int size) {
    // Start by assuming the first element is the smallest
    int smallest = INT_MAX;
    
    // Loop through the array and compare each element
    for(int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    return smallest;
}

int main() {
    int arr[] = {5, 3, 8, 1, 2, -1, 7};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements in the array
    
    int smallest = findSmallest(arr, size);
    cout << "The smallest number in the array is: " << smallest << endl;
    
    return 0;
}