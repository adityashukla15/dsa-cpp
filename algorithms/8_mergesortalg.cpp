#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& A,int m,vector<int>& B, int n){
    int idx = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while(i >= 0 && j >= 0){
        if(A[i] >= B[j]){
            A[idx--] = A[i--];
        } else {
            A[idx--] = B[j--];
        }
    }

    while(j >= 0){
        A[idx--] = B[j--];
    }
}

int main(){
    vector<int> A = {1, 3, 5, 0, 0, 0};  // Extra space for B
    vector<int> B = {2, 4, 6};

    int m = 3;  // Number of valid elements in A
    int n = 3;  // Number of elements in B

    merge(A, m, B, n);

    cout << "Merged array: ";
    for(int i = 0; i < m + n; i++){
        cout << A[i] << " ";
    }

    return 0;
}