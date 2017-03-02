#include <iostream>
#include <vector>

using namespace std;

void dfs ( const string &digits, size_t cur, string path, vector<string> &result  ) {
	
	if( cur ==  digits.size() ) {
		result.push_back(path);
		return;
	}

	// digits[cur] - '0' is a digit, ASCII calculation
	for ( auto c : keyboard[ digits[cur]-'0' ] ) {
		dfs(digits, cur+1, path+c,result );
	}

};

vector<string> letterCombination ( const string &digits ) {
	vector<string> result;
	if( digits.empty() ) return result;
	dfs(digits, 0, "", result);
	return result;
};

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

	vector<string> result = letterCombination("23");

	for (int i=0; i < result.size(); i++ ) {
		cout << result[i] << endl;
	}

	return 0;
}