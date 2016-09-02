#include <iostream>
#include <vector>
using namespace std;

// this is a shorter version of removing duplicates for at most two same elements in a roll.

int removeDuplicate( vector <int> &nums) {
	int index = 0;
	int n = nums.size();

	for( int i = 0; i < n; i++) {
		if( i >0 && i < n-1 && nums[i] == nums[i-1] && nums[i] == nums[i+1]) {
			continue;
		}

		nums[index++] = nums[i];
	}

	return index;
}

int main () {

	vector<int> first;

	first.push_back(0);
	first.push_back(0);
	first.push_back(0);
	first.push_back(0);
	first.push_back(1);
	first.push_back(1);
	first.push_back(2);
	first.push_back(2);
	first.push_back(2);
	first.push_back(3);
	first.push_back(4);
	first.push_back(4);
	first.push_back(4);

	cout << "The original vector array: " << endl;

	for(int i = 0; i < first.size(); i++ ) {
		cout<< first[i] << endl;
	}

	cout << "New vector array: " << endl;
	int length = removeDuplicate(first);
	
	for(int i = 0; i < length; i++ ) {
		cout << first[i] << endl;
	}

	return 0;
}