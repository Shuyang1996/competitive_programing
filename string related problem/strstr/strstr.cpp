#include <iostream>
#include <cstring>
using namespace std;
//暴力解法
int strStr(const string&haystack, const string&needle) {
	if(needle.empty()) return 0;
	const int N = haystack.size()-needle.size()+1;
	for(int i=0; i< N; i++){
		int j = i;
		int k = 0;
		while(j < haystack.size() && k< needle.size() && haystack[j] == needle[k]){
			j++;
			k++;
		}
		if(k == needle.size()) return i;
	}
	return -1;
};

int main () {
	string haystack = "What is up,shuyang,my man?";
	string needle = "shuyangw";
	cout<<"Haystack size is "<< haystack.size()<< endl;
	cout<<"Needle size is "<< needle.size()<< endl;
	int result = strStr(haystack,needle);
	cout<< result<< endl;
	return 0;
}
