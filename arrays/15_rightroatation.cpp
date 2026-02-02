#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int last=arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    cout<<"Array after right shift: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}