#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,x,a,b;
    vector <int> vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        vec.push_back(k);
    }
    
    cin>>x;
    vec.erase(vec.begin()+x-1);
    
    cin>>a>>b;
    vec.erase(vec.begin()+a-1,vec.begin()+b-1);
    
    cout<<vec.size()<<endl;
    for(int j=0;j<vec.size();j++)cout<<vec[j]<<" ";
    
    return 0;
}
