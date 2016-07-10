#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum (vector<int> &nums, int target) {
    //hashing data
    unordered_map <int, int> map;
    vector<int> result;
    for( int i = 0; i < nums.size(); i++){
      map[nums[i]]=i; // key for map is vector value, value is index for this value in vector array
    } 

    for(int i = 0; i < nums.size(); i++){
      int gap = target - nums[i];
      if( map.find(gap) != map.end() && map[gap] > i){ //check if the other half is in this vector 
        result.push_back(i+1);
        result.push_back(map[gap]+1);
      }
    }
    return result;
};

int main () {
  vector<int> number;
  for(int i = 0; i < 6; i++){
    number.push_back(i+1); // sample vector array
  }

  vector<int> result = twoSum(number,11);
  cout << "First index is " << result[0] << endl;
  cout << "Second index is " << result[1] << endl;

  return 0;
}