#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int item) {
	int index = 0; // set up another pointer
	int size = nums.size();
	for(int i=0; i<size; i++) {
		if(nums[i]!= item) {
			nums[index++] = nums[i];
		}
	}
	return index;
}

int main () {
	vector <int> nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(2);
	nums.push_back(0);
	nums.push_back(3);
	nums.push_back(0);
	nums.push_back(4);
	nums.push_back(0);

	int previousSize = nums.size();

	cout << "Previous vector size: " << previousSize << endl;
	cout << "Previous sample data set:" <<endl;

	for(int i = 0; i < previousSize; i++) {
		cout << nums[i] <<endl;
	}

	int size = removeElement(nums,0);

	cout <<"New vector size: " <<size << endl;
	cout <<"New sample data set after removing target element" << endl;
	for(int j=0; j < size; j++ ) {
		cout <<nums[j] << endl;
	}

	return 0;
}