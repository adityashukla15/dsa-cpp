#include <iostream>
using namespace std;
int main(){
    int size;
    bool isDuplicate=false;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array elements with duplicate elements: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<"Array elements without duplicate elements: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]==arr[j]){
                isDuplicate=true;
                break;
            }

        }
        if(!isDuplicate){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}