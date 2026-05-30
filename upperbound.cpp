#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,2,2,3,4,6};
    int *p=upper_bound(arr,arr+7,4);
    cout<<p-arr<<" ";
}