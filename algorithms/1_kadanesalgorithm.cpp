#include <iostream>
using namespace std;
int main(){

    int arr[7]={3,-4,5,4,-1,7,-8};
    int currSum=0,maxSum=arr[0];
    for(int i=0;i<7;i++){
     currSum+=arr[i];
     maxSum=max(currSum,maxSum);
     if(maxSum<0){
        currSum=0;
     }
    }
    cout<<"Maximum subarray sum is ="<<maxSum;
}