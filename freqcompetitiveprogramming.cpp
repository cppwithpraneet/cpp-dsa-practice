#include <iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {

    vector<int> v = {1,2,1,3,2,1};

    unordered_map<int,int> freq;

    for(auto x : v) {
        freq[x]++;
    }

    for(auto x : freq) {
        cout << x.first << " ";
        cout << x.second << endl;
    }

    return 0;
}