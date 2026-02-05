#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v={10,20,30,40,50};
    int length=v.size();
    int first=v[0];
    int last=v[length-1];
    cout<<"First element = "<<first<<endl;
    cout<<"Last element = "<<last<<endl;
    return 0;
    
}