#include<iostream>

using namespace std;

int main(){

	char name[10];

	cout << "Enter Your Name:\n";
	cin >> name;
	cout << "\nYour Name is: " << name;

	cerr << "\n**Unbuffered Error Message**";

	clog << "\n**Buffered Error Message**\n";

	return 0;
}
