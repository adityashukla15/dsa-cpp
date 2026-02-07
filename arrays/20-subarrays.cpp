#include <iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int st=0;st<size;st++){
        for(int end=st;end<size;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<< endl;
    }
    return 0;
}