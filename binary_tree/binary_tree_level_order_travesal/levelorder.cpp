#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
	public:
		string val;
		TreeNode * left;
		TreeNode * right;

		TreeNode (string x) : val(x) , left(nullptr), right(nullptr) {};
		
		void setLeft( TreeNode * leftNode ) {
			left = leftNode;
		}

		void setRight( TreeNode * rightNode ) {
			right = rightNode;
		}

		TreeNode * getLeft(){
			return left;
		}

		TreeNode * getRight(){
			return right;
		}

		string getVal() {
			return val;
		}
};

void levelOrderFunction(TreeNode * root, int level, vector< vector <string> > &result ){
	if(!root) return; //no more left subtree exist
	if(level > result.size() ) result.push_back(vector<string>()); // enter an empty vector space in one of vector cells
	
	result[level-1].push_back(root->getVal());
	
	levelOrderFunction(root->getLeft(), level+1, result);
	levelOrderFunction(root->getRight(), level+1, result);
};	

vector < vector <string> > levelOrder (TreeNode * root) {
	vector < vector <string> > result;
	levelOrderFunction( root, 1, result); // function overloading; 
	return result;
};	



int main () {
	//create a binary tree first

	TreeNode * a = new TreeNode ("A");
	TreeNode * b = new TreeNode ("B");
	TreeNode * c = new TreeNode ("C");
	TreeNode * d = new TreeNode ("D");
	TreeNode * e = new TreeNode ("E");
	TreeNode * f = new TreeNode ("F");
	TreeNode * g = new TreeNode ("G");
	TreeNode * h = new TreeNode ("H");
	TreeNode * i = new TreeNode ("I");

	a->setRight(c);
	a->setLeft(b);

	b->setRight(d);

	c->setRight(f);
	c->setLeft(e);

	e->setLeft(g);

	f->setLeft(h);
	f->setRight(i);

	vector < vector <string> > result;
	result = levelOrder(a);

	vector <string>::iterator ptr;
	for(int i = 0; i < result.size(); i++ ) {
		
		for(ptr = result[i].begin(); ptr!= result[i].end(); ptr++){
			cout << *ptr << endl;
		}

		cout << "" << endl;
	}

	return 0;
}