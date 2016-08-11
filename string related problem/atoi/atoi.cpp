#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;


int myatoi( const string &s) {
	int i = 0;
	int size =  s.size();

	while(s[i]==' ' && i < size ) i++; // ignore space in front until hits first non space string.
	return 0;
};	


int main () {

	string str = "456a";
	cout << str.size() << endl;
	return 0;
}