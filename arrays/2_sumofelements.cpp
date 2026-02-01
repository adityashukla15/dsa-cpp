#include <iostream>
using namespace std;
int main(){
    int size,sum=0;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The sum of array elements is: ";
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}