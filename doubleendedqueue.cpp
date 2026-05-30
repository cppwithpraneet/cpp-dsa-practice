#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_front(50);
    for(auto x: d){
        cout<<x<<" ";
    }
    return 0;
}