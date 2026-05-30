#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a, int b){
    return a>b;
}
int main(){
int arr[]={5,2,6,1,9,10};
sort(arr,arr+6,cmp);
for(int i=0;i<6;i++){
cout<<arr[i]<< " ";
}
return 0;
}
   