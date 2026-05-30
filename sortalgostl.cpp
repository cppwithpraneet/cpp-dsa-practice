#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={1,6,3,7,2};
    sort(a,a+5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
        //or  cout<<a[i]<<endl; if we want output horizontally.
    }
    return 0;
}