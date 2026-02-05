#include <iostream>
#include <vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>v(size);
    cout<<"Enter vector elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    cout<<"Vector elements: ";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}