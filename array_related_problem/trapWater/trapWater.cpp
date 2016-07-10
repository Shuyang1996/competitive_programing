#include <iostream>
#include <vector>

using namespace std;


int trap(const vector<int>& A) {
	const int n = A.size();

	int *max_left = new int[n](); // there is a constructor, initializes everything to 0
	int *max_right = new int[n](); // same as above. 
	
	for (int i = 1; i < n; i++) {
		max_left[i] = max(max_left[i - 1], A[i - 1]);
		max_right[n - 1 - i] = max(max_right[n - i], A[n - i]);
	}
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int height = min(max_left[i], max_right[i]);
	  if (height > A[i]) {
	      sum += height - A[i];
	  }
	}

	delete[] max_left;
	delete[] max_right;
	return sum;
};

int main () {
	vector <int> nums;
	
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(1);

	int sum = trap(nums);
	cout << sum << endl;

	return 0;
}