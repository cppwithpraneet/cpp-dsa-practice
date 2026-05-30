#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;

d.push_back(10);
d.push_front(5);
d.push_back(20);

d.pop_front();

cout << d.front();}
// 10 20