#include <iostream>
#include <vector>
using namespace std;

vector <vector<int> > threeSum( vector<int> &nums ) {
	
	vector < vector<int> > result;
	if ( nums.size() < 3 ) return result;
	sort ( nums.begin(), nums.end() ); // sort current array

	const int target = 0;
	auto last = nums.end();

	for ( auto i = nums.begin(); i < last - 2; ++i ) {
		auto j = i + 1;
		if ( i > nums.begin() && *i == *(i-1) ) continue; // I don't understand this one
		auto k = last - 1;

		while ( j < k ) { //check if it iterates all the numbers 

			if ( *i + *j + *k < target ) {

				++j; //increment first then use value
				while ( *j == *(j-1) && j < k ) ++j; //avoid same value when you remove the pointer

			} else if ( *i + *j + *k > target ) {

				--k;
				while (*k == *(k+1) && j < k ) --k;

			} else {

				result.push_back({ *i, *j, *k });
				++j;
				--k;
				while (*j == *(j-1) && *k == *(k+1) && j < k) ++j;
			}
		}
	} 
	return result;
};

int main () {
	vector < vector<int> > result;
	vector <int> nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);

	result = threeSum(nums);
	cout << result[0][0] << endl;
	return 0;
}