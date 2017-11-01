#include <iostream>
using namespace std;

int main() {

	string str = "", rev = "";
	
	getline(cin, str);
	
	cout << "\n You entered: " << str;
	
	for(char& c : str) {
    		rev = c + rev;
	}
	
	if (rev == str) 
		cout << "\n yup, it's a palindrome";
	else 
		cout << "\n nope it ain't palindrome";

	return 0;
}