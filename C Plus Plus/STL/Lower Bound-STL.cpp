#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,q,val;
    vector <int>::iterator low;
    
    cin>>n;
    vector <int> vec;
    for(int i=0;i<n;i++){
        cin>>k;
        vec.push_back(k);
    }
    cin>>q;
    for(int j=0;j<q;j++){
        cin>>val;
        low=lower_bound (vec.begin(), vec.end(), val); //returns the first item in the range that is immediately lower (or equal if val is present in vec) to val.
        if (vec[low-vec.begin()]==val){
            cout<<"Yes "<<low-vec.begin()+1<<endl;
        }else{
            cout<<"No "<<low-vec.begin()+1<<endl;
        }      
    }
    
    return 0;
}
