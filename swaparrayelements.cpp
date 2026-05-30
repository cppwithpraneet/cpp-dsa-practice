#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,4,6,8};
    swap(arr[0],arr[3]);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}