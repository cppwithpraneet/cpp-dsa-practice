#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,22,96,1,3};
    cout<<*max_element(arr,arr+5)<<endl;
    return 0;
}