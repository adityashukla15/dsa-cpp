#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element to be searched in the array: ";
    cin>>target;
    for(int i=0;i<size;i++){
        if(target==arr[i]){
            cout<<"Target element found"<<endl;
            break;
        }
        else{
            cout<<"Target element not found"<<endl;
        }
    }
    return 0;
}