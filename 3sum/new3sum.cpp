#include <iostream>
#include <vector>
using namespace std;

vector <vector <int> > threeSum (vector<int> &nums) {
	vector < vector<int> > result;
	int target = 0;

	sort(nums.begin(),nums.end()); // sort numbers in vector in order to avoid repeting set
	auto last = nums.end();

	for(auto i = nums.begin(); i < last - 2; i++ ) {
		auto j = i + 1;
		auto k = last - 1; // why last-1?
		
		while (j < k) { //check if it loops through the whole array
			
			if(*i+ *j+ *k < target ) {
				++j;
				while(*j == *(j-1) && j < k ) ++j;
			} else if( *i + *j + *k > target) {
				--k;
				while(*k == *(k+1) && j < k ) --k;
			} else {
				
				vector<int> currentSet;
				currentSet.push_back(*i);
				currentSet.push_back(*j);
				currentSet.push_back(*k);
				result.push_back(currentSet);
				++j;
				--k;

				while(*j == *(j-1) && *k == *(k+1) && j < k ){
					++j;
				}
			}
		}
	}

	return result;
};

int main () {
	vector <vector<int> > result;
	vector <int> nums;

	//sample data set
	nums.push_back(-5);	
	nums.push_back(6);	
	nums.push_back(-3);	
	nums.push_back(-4);	
	nums.push_back(0);	
	nums.push_back(3);	
	nums.push_back(2);	
	nums.push_back(1);	
	nums.push_back(0);	
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(-6);
	nums.push_back(3);
	nums.push_back(5);	

	result = threeSum(nums);
	int size = result.size();

	cout << "There are " << size << " combination." <<endl;
	for(int j = 0; j < size; j++ ) {
		for(int i=0; i < 3; i++ ) {
			cout<< (result[j])[i] << " ";
		}
		cout<<"\n" <<endl;
	}

	return 0;
}