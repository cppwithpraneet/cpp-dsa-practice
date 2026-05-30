#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(30);
    s.insert(20);
    s.insert(48);
    s.insert(20);
    for(auto x:s){
        cout<<x<<" ";
    }
}