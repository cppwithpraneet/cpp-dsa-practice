#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(string a,string b){
    return a.length()<b.length();
}
int main(){
    vector<string> v={"apple","hi","banana"};
    sort(v.begin(),v.end(),cmp);
    for(auto x:v){
        cout<<x<<endl;
    }
    return 0;
}