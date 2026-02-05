#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter Array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        arr[i]=arr[i]*arr[i];
    }
    cout<<"Array elements with sqaure: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}