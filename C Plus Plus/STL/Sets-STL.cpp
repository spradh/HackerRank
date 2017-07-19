#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //1-add,2-delete, and 3-check
    int n,q,k;
    set <int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q>>k;
        switch(q)
        {
            case 1:
                s.insert(k);
                break;
            case 2:
                s.erase(k);
                break;
            default:
                set<int>::iterator itr=s.find(k);
                if(itr==s.end()){
                    cout<<"No"<<endl;
                }else{
                    cout<<"Yes"<<endl;
                }
        }
    }
    return 0;
}
