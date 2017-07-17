#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k;
    vector <int> num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        num.push_back(k);
    }
    sort(num.begin(),num.end());
    for(int j=0;j<num.size();j++)cout<<num[j]<<" ";
    return 0;
}

