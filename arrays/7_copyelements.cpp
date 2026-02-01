#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr1[size],arr2[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
     cin>>arr1[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<endl;;
        arr2[i]=arr1[i];
        cout<<arr2[i]<<endl;
}
return 0;
}
    
    