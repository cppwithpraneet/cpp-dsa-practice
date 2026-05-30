#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> v;
    v.push_back({1,100});
    v.push_back({2,200});
    v.push_back({3,300});
    for(auto x: v){
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }
    return 0;
}