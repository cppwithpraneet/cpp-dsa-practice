#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4,5,2,3,1};
    reverse(arr,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}