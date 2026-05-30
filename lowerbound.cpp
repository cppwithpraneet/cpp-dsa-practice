//lower bound used in interviews
//>=(find greater than or equals the value given and to be more specific first such value whic is >= x ->the given value)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4,5,6};
    int*p=lower_bound(arr,arr+7,3);
    cout<<p-arr;
}
