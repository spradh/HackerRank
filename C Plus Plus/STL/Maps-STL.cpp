#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //1 X Y- Add the marks Y to the student whose name is X.
    //2 X  - Erase the marks of the students whose name is X.
    //3 X  - Print the marks of the students whose name is X. (If  didn't get any marks print 0 .)
    int n,q,val;
    map<string,int>::iterator itr;
    string k;
    map <string,int> m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q;
        switch(q)
        {
            case 1:
                cin>>k>>val;
                itr=m.find(k);
                if(itr==m.end()){
                    m.insert(make_pair(k,val));
                }else{
                    m[k]+=val;
                }
                break;
            case 2:
                cin>>k;
                m.erase(k);
                break;
            default:
                cin>>k;
                itr=m.find(k);
                if(itr==m.end()){
                    cout<<0<<endl;
                }else{
                    cout<<m[k]<<endl;
                }
        }
    }
    return 0;
}
