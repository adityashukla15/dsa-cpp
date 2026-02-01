#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int evencount=0;
    int oddcount=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            evencount+=1;
        }
        else{
            oddcount+=1;
        }
    }
    cout<<"Even numbers in the array ="<<evencount<<endl;
    cout<<"Odd numbers in the array ="<<oddcount<<endl;
    return 0;
}