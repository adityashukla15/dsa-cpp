#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v(5);
    int size=v.size();
    int capacity=v.capacity();
    cout<<"The size of vector is = "<<size;<<endl;
    cout<<"The capacity of the vector is ="<<capacity;
    return 0;
}