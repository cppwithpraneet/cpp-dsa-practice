#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,2,2,5};
    cout<<upper_bound(arr,arr+5,2)-lower_bound(arr,arr+5,2);
    return 0;
}