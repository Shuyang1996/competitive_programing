#include <iostream>
#include <vector>

vector <vector<int>> threeSum( vector <int> &nums ){
	vector < vector<int> > result;

	auto k = nums.end(); //assign last pointer

	int target = 0;

	sort (nums.begin(), nums.end()); //sort current array 

	for ( auto i = nums.begin(); i < last - 2; i++ ) {
		
		auto j = i + 1; //iterator
		auto k = last -1; //iterator

		while ( j < k ) { // exit when it loops through all possibilities
			
			if( *i + *j + *k == target ) { // find answer
				result.push_back({*i, *j, *k});
				++j;
				--k;
				while( *j == *(j+1) && *k == *(k-1) && j < k) 

			} else if (*i + *j + *k < target) {
				++j;
				while( *j == *(j+1) && j < k ) ++j;

			} else {
				--k
				while( *k == *(k-1) && j < k ) {
					--k;
					++j;	
				} 
			}
		} 

		return result; 
	}


};