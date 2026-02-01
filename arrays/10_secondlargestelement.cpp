#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: "<<endl;
    if(size<2){
        cout<<"Second largest element does not exist"<<endl;
    }
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int largest=INT_MIN;
    int secondlargest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];

        }
        else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    if(secondlargest==INT_MIN){
        cout<<"No second largest element"<<endl;
    }
    else{
        cout<<"Second largest element: "<<secondlargest<<endl;
    }
    return 0;

}