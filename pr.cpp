#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; 
        }
    }
    return -1; 

int main() {
    int nums[] = {5,15,22,1,-15,-24};
    int size = 6;
    int Target = 22;
    int result = linearSearch(nums, size, Target);
    if(result != -1) {
        cout << "The index of " << Target << " is: " << result << endl;
    } else {
        cout << Target << " not found in the array." << endl;
        
}
    return 0;
}