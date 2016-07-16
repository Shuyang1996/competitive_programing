// this a vector array version remove duplicates;
#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int> &nums) {
	int index = 0;
	for(int i=1; i <nums.size(); i++){
		if(nums[index]!=nums[i]){
			nums[++index] = nums[i];
		}
	}

	return index+1;
};

int main () {
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);

	for(int i = 0; i <nums.size(); i ++){
		cout<< nums[i] << endl;
	}
	cout << "-------------------" << endl;
	int size = removeDuplicates(nums);

	for(int i = 0; i < size; i ++){
		cout<< nums[i] << endl;
	}

	return 0;
}