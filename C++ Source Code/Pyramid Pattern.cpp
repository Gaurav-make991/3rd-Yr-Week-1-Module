#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the pyramid: ";
    cin >> n;
    //left half pyramid
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i-1; j++){
            cout << "  ";
        }
       
    
    for(int j = 1; j <= i + 1; j++){
            cout << "* ";
        }
       

     //right half pyramid
       
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
