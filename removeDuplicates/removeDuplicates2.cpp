#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() <= 2) return nums.size();
    int index = 2;
    for (int i = 2; i < nums.size(); i++){
        if (nums[i] != nums[index - 2])
          nums[index++] = nums[i];
    }
    nums.erase(nums.begin()+index,nums.end());
    return index;
}

int main(){
	vector<int> first;
	vector<int>::iterator i;
	//reserve 5 spots for vector array
	first.reserve(6);
	first.push_back(2);
	first.push_back(2);
	first.push_back(2);
	first.push_back(4);
	first.push_back(4);
	first.push_back(5);
	//add 5 random sorted number in the array
	
	cout<<"Orginial vector array: "<<endl;
	for(i=first.begin();i!=first.end();i++){
		cout<<(*i)<<endl;
	}

	int num = removeDuplicates(first);
	cout<<"There are "<<num<<" left after removeDuplicates"<<endl;
	
	for(i=first.begin();i!=first.end();i++){
		cout<<(*i)<<endl;
	}
	return 0;
}