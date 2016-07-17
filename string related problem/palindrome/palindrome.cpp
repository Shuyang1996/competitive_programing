#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string s){
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	auto left = s.begin(), right = prev(s.end());
	while ( left < right ) {
		if(!::isalnum(*left)) ++left;
		else if(!::isalnum(*right)) --right;
		else if(*left != *right) return false;
		else { left++, right--;}
	}
	return true;
};

int main () {
	string testString = "A man, a plan, a canal: Panama";
	bool result = checkPalindrome(testString);
	if(result==true){
		cout << "This is a palindrome" << endl;
	}else{
		cout << "This is not a palindrome" << endl;
	}
	return 0;
}
