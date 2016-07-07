#include <iostream>
#include <vector>
using namespace std;

int removeElement (vector <int> &nums, int item) {
	int index=0;
	int size = nums.size();
	for( int i=0; i < size; ++i) {
		if(nums[i]!= item) {
			nums[index++] = nums[i];
		}
	}
	return index;
};
	
int main(){
	vector <int> nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	
	int previousLength = nums.size();

	for(int j = 0; j < previousLength; j++){
		
		cout << nums[j] << endl;
	}
	
	int length = removeElement(nums, 0);

	cout << "Previous length is " << previousLength << endl;

	cout << "New length is " << length << endl;

	for(int i = 0; i < length; i++){
		cout << nums[i] << endl;
	}

	for(int i = 0; i < nums.size(); i++){
		cout << nums[i] << endl;
	}

	return 0;
}