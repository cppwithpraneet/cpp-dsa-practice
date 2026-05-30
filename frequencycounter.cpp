#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
 /*   int arr[]={4,7,54,7,44};
 unordered_map<int,int> freq;
 for(int i=0;i<6;i++){
    freq[arr[i]]++;
 }
 for(auto x:freq){
    cout<<x.first<<" ";
    cout<<x.second<<endl;
 }
 return 0;*/
 unordered_set<int> s;

s.insert(5);
s.insert(5);
s.insert(2);

cout << s.size();
}