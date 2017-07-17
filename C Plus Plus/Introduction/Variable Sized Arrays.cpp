#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,val,vec,idx;
    scanf("%d %d",&n,&q);
    vector <vector<int>> master;    
    for(int i=0;i<n;i++){
        int length;
        cin>>length;
        vector <int> sub;
        for(int j=0;j<length;j++){
            cin>>val;
            sub.push_back(val);
        }
        master.push_back(sub);
    }
    
    for(int k=0;k<q;k++){
        scanf("%d %d", &vec,&idx);
        cout<<master[vec][idx]<<endl;
    }
    return 0;
}
