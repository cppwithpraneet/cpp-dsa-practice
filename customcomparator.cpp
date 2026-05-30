#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
int main(){
    int arr[]={5,2,4,1};
    sort(arr,arr+4,cmp);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}