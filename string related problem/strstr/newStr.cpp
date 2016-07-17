#include <iostream>
#include <cstring>
using namespace std;

int strStr (string &haystack, string &needle) {
	int loop =  haystack.size() - needle.size() +1;
	for(int i = 0; i < loop; i++){
		int ptr1 = 0;
		int ptr2 = i;
		while(ptr2 < haystack.size() && ptr1 < needle.size() && haystack[ptr2] == needle[ptr1]){
			ptr1++;
			ptr2++;
		}

		if(ptr1 == needle.size()) return i;
	}

	return -1;
};

int main () {
	string haystack = "what is up, shuyang, my man.";
	string needle = "shuyang";
	int result =  strStr(haystack, needle);
	cout << result << endl;
	return 0;
}