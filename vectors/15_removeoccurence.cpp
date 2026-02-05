#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector<int>v={1,2,2,3,4,5,6};
int val=6;
v.erase(remove(v.begin(),v.end(),val),v.end());
cout<<"After removal: ";
for(int x:v){
    cout<<x<<" ";
}
return 0;
}