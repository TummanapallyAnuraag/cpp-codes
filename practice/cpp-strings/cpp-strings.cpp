#include <iostream>
using namespace std;

int max(int, int);

int main() {
	int T;
	cin >> T;
	string s1, s2;
	while(T--){
	    cin >> s1;
	    cin >> s2;
	    cout << max(s1.length(), s2.length() ) << endl;
	    cout << s1.append(s2) << endl;
	}
	return 0;
}

int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}
