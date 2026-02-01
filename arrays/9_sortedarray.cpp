#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bool isSorted=true;
    for(int i=0;i<size;i++){
        if(arr[i]<arr[i+1]){
            isSorted=false;
            break;
        }
    }
    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
return 0;
}