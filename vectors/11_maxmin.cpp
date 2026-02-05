#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int>v={10,20,30,40,50,60};
    int max=*max_element(v.begin(),v.end());
    int min=*min_element(v.begin(),v.end());
    cout<<"Maximum element = "<<max<<endl;
    cout<<"Minimum element = "<<min<<endl;
    return 0;
}