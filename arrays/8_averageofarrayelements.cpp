#include <iostream>
using namespace std;
int main(){
    int size,sum,average;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++){
    cin>>arr[i];
    }
    cout<<"Average of the array elements: ";
    for(int i=0;i<size;i++){
        sum+=arr[i];
         average=sum/size;
    }
   cout<<average;
   return 0;
}