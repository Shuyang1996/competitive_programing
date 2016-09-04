#include <iostream>
#include <vector>
using namespace std;

void rotateImage( vector<vector<int> > &image ) {

	// flip the image by diagonal
	int size =  image.size();
	for(int i = 0; i < size-1; i++ ) {

		for(int j = 0; j < size-1-i; j++ ) {
			int value = image[i][j];
			image[i][j] = image[size-1-j][size-1-i];
			image[size-1-j][size-1-i] = value ;
		}
	}

	// then we flip the new image up side down
	for(int i = 0; i < size/2; i++ ) {

		for(int j = 0; j < size; j++ ) {
			int value = image[i][j];
			image[i][j] = image[size-1-i][j];
			image[size-1-i][j] = value;
		}
	}
};

int main () {


	vector < vector <int> > image;
	
	vector <int> row1;
	vector <int> row2;
	vector <int> row3;

	row1.push_back(1);
	row1.push_back(2);
	row1.push_back(3);

	row2.push_back(4);
	row2.push_back(5);
	row2.push_back(6);

	row3.push_back(7);
	row3.push_back(8);
	row3.push_back(9);


	image.push_back(row1);
	image.push_back(row2);
	image.push_back(row3);
	
	cout << "Previous image is " << endl;

	for(int i = 0; i < 3; i++ ) {
		for(int j = 0; j < 3; j++) {
			cout << image[i][j];
		}
		cout <<""<< endl;
	}

	cout << "--------" << endl;

	cout << "New image is " << endl;

	rotateImage(image);

	for(int i = 0; i < 3; i++ ) {
		for(int j = 0; j < 3; j++) {
			cout << image[i][j];
		}
		cout <<""<< endl;
	}

	return 0;
}