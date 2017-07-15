#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a[2];
    string num[9]={"one","two","three","four","five","six","seven","eight","nine"};

    cin>>a[0];
    cin>>a[1];
    
    for(int i=a[0];i<=a[1];i++){
        if(i<=9){
            cout<<num[i-1]<<endl;
        }else{
            if(i%2==0){
                cout<<"even"<<endl;
            }else{
                cout<<"odd"<<endl;
            }
        }
    }
    
    return 0;
}
