#include <iostream>
#include <vector>
using namespace std;

void rotateImage () {

};

int main () {

	//create this image 
	vector <vector<int> > matrix;
	for(int i = 0; i < 2; i++){
		vector<int> row;
		for(int j= 0; j <2; j++) {
			row.push_back(j);
		}
		matrix.push_back(row);
	}

	for(int k = 0; k < 2; k++){
		for(int h= 0; h <2; h++) {
			cout<<matrix[k][h];
		}
		cout<<'\n';
	}
	return 0;
}