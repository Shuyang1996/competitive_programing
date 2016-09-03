#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int longestConsecutive ( vector <int> &nums ) {

	int longest = 0; 
	unordered_map <int, bool> hash; // create unordered hash table

	for( auto i : nums ) hash[i] = false; //initialize every mapped value with each key as unused : false

	for( auto i : nums ) {
		if(hash[i]) continue; // if this value in vector array has been used, then we jump to next loop round

		// if not used yet, we count from 1 now
		int length = 1;

		for(int k = i+1; hash.find(k) != hash.end(); k++ ) { //checking right side bigger numbers if they exist
			//if there are bigger numbers;
			hash[k] = true;
			length++;
		}

		for(int k = i-1; hash.find(k) != hash.end(); k-- ) { //checking left side bigger numbers if they exist
			//if there are bigger numbers;
			hash[k] = true;
			length++;
		}

		longest = max(longest, length);

	}

	return longest;


};

int main () {

	vector <int> nums;

	nums.push_back(400);
	nums.push_back(4);
	nums.push_back(100);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(200);
	nums.push_back(1);

	int length = longestConsecutive( nums ); 

	cout << "Longest consecutive length is " << length << endl;
	return 0;
}