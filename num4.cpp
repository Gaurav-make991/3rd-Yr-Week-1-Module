#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the Inverted Diamond: ";
    cin >> n;

    for(int i = 3; i <= 7; i++){
        for(int j = 7; j >= i; j--){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}