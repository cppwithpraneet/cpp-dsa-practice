#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}
int main(){
    vector<pair<int,int>> v;
    v.push_back({1,10});
    v.push_back({2,30});
    v.push_back({3,20});
    sort(v.begin(),v.end(),cmp);
    for(auto x:v){
        cout<<x.first<<" ";
        cout<<x.second<<endl;
    }
    return 0;
}