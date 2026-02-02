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
    int first=arr[0];
    for(int i=0;i<size;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=first;
    cout<<"Array after left shift: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

 }