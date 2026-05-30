#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
unordered_map<int,string> m;
m[1]="don";
m[2]="bullu";
for(auto x:m){
    cout<<x.first<<" ";
    cout<<x.second<<endl;
}
return 0;
}