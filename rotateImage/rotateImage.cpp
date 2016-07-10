#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > rotateImage (vector<vector<int> > &nums) {
	const int size = nums[0].size(); 
	
	for(int i=0; i < size; i++) {
		for(int j =0; j< size-i; j++) {
			swap(nums[i][j],nums[size-1-j][size-1-i]);
		}
	}

	//swap based on horizontally centered line

	for(int i = 0; i < size/2; i++) { //need to consider about even and odd number issue.
		for( int j=0; j <size; j++) {
			swap(nums[i][j],nums[size-1-i][j]);
		}
	}

	return nums;
};

int main () {

	//create this two dimension vector using nested loop;
	// vector <vector<int> > matrix;
	// for(int i = 0; i < 2; i++){
	// 	vector<int> row;
	// 	for(int j= 0; j <2; j++) {
	// 		row.push_back(j);
	// 	}
	// 	matrix.push_back(row);
	// }
	//

	//create two dimension vector matrix manually
	vector <vector<int> > newMatrix;
	vector <int>row1;
	vector <int>row2;
	vector <int>row3;
	vector <int>row4;

	row1.push_back(3);
	row1.push_back(2);
	row1.push_back(1);
	row1.push_back(4);

	newMatrix.push_back(row1);

	row2.push_back(1);
	row2.push_back(6);
	row2.push_back(7);
	row2.push_back(3);

	newMatrix.push_back(row2);

	row3.push_back(0);
	row3.push_back(2);
	row3.push_back(1);
	row3.push_back(5);
	
	newMatrix.push_back(row3);

	row4.push_back(4);
	row4.push_back(2);
	row4.push_back(7);
	row4.push_back(9);
	
	newMatrix.push_back(row4);


	for(int k = 0; k < newMatrix[0].size(); k++){
		for(int h= 0; h <newMatrix[0].size(); h++) {
			cout<<newMatrix[k][h];
		}
		cout<<'\n';
	}

	cout <<'\n';

	newMatrix = rotateImage(newMatrix);
	

	for(int k = 0; k < newMatrix[0].size(); k++){
		for(int h= 0; h <newMatrix[0].size(); h++) {
			cout<<newMatrix[k][h];
		}
		cout<<'\n';
	}


	return 0;
}