#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s={10,20,30};
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<< endl;
        //cout<<*it+1<< endl; if we want output as 11,21,31.
    }
    return 0;
}