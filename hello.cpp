#include <iostream>
#include <climits>

using namespace std;


int maxSum(int matrix[][3], int rows , int cols){
    int maxSum = INT_MIN;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            int colsSum = 0;
            for(int k = 0; k < cols; k++){
                colsSum += matrix[i][k];
            }
            maxSum = max(maxSum, colsSum);
        }
    }
    cout << "Maximum column sum is: " << maxSum << endl;
    return maxSum;
}

int main() {
    int matrix[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int rows = 3;
    int cols = 3;
 
    maxSum(matrix, rows, cols);
    return 0;
}
    

    
