#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  	if (nums.empty()) return 0;
  	int index = 0;
  	for (int i = 1; i < nums.size(); i++) {
      	if (nums[index] != nums[i])
          nums[++index] = nums[i];
	}
    nums.erase(nums.begin()+index+1,nums.end());
    return index + 1;
}
int main(){
	vector<int> first;
	vector<int>::iterator i;
	//reserve 5 spots for vector array
	first.reserve(5);
	first.push_back(1);
	first.push_back(1);
	first.push_back(2);
	first.push_back(2);
	first.push_back(4);
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