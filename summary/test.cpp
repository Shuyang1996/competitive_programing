#include <iostream>
#include <vector>
using namespace std;

int main () {
	vector<string> keyboard;
	keyboard.push_back(" ");
	keyboard.push_back("");
	keyboard.push_back("abc");
	keyboard.push_back("def");
	keyboard.push_back("ghi");
	keyboard.push_back("jkl");
	keyboard.push_back("mno");
	keyboard.push_back("pqrs");
	keyboard.push_back("tuv");
	keyboard.push_back("wxyz");

	string digits = "23";
	for ( auto c : keyboard[ digits[0]-'0' ] ) {
		cout << c << endl;
	}

	cout << digits[1]-'0' << endl;
}