#include <vector>
#include <iostream>
using namespace std;

bool knapsnack (int s, vector<int> w, index1, index2) {
	s = s - w[index1];
	int size = w.length();

	if ( s == w[index2]){
		return true;
	}

	if ( s != w[index2] && index1 = size-1 ) {
		return false
	}

	if ( s != w[index2] && index1 = size -1 && index2 != size ){
		knapsnack(s, w, index1, index2+1);
	}

	if ( s != w[index2] && index1 != size - 1 && index2 = size ) {
		knapsnack(s, w, index1+1, index2);
	}
};

int main (){

	// set up w vector array
	vector <int> w;
	w.push_back(14);
	w.push_back(9);
	w.push_back(8);
	w.push_back(5);
	w.push_back(3);
	w.push_back(1);
	
	bool result = knapsnack(20,0,1);
	return 0;
}