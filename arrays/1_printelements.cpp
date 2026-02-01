#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The elements of the array are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}