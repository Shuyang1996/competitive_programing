#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector <int> &nums, int item) {
	int index;
	int size = nums.size();
	for( int i=0; i < size; i++) {
		if(nums[i]!= item) {
			nums[index++] = nums[i];
		}
	}
	return index-1;
};
	
int main(){
	vector <int> nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(0);
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(0);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(8);

	int previousLength = nums.size();
	int length = removeElement(nums, 7);

	cout << "Previous length is " << previousLength << endl;

	cout << "New length is " << length << endl;

	return 0;
}