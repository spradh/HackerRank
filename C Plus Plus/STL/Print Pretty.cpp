#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
    
    
    cout.setf (cout.hex,cout.basefield);
    cout.setf (cout.showbase);
    cout<<left<<nouppercase<< (long)A <<endl;
    cout.unsetf (cout.basefield);
    cout.unsetf (cout.showbase);


    cout.setf (cout.showpos);
    cout<<setw(15)<<right<<setfill('_')<<fixed<<setprecision(2)<<B<<endl;
    cout.unsetf (cout.showpos);
    
    cout<<right<<setprecision(9)<<uppercase<<scientific<<C<<endl;
    
   	}
	return 0;

}
