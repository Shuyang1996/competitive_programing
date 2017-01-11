#include <iostream>
#include <vector>
#include <stack>
#include <string>

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

		string getVal() {
			return val;
		}
};

vector <string> preorderTraversal ( TreeNode * root) {
	vector <string> result;
	stack < TreeNode * > s;
	
	if( root !=  nullptr ) {
		s.push(root);
	}

	while (! s.empty() ) {
		TreeNode * ptr = s.top();
		s.pop();
		result.push_back( ptr->getVal() );

		if(ptr->right != nullptr ) s.push(ptr->right);
		if(ptr->left != nullptr ) s.push(ptr->left);
	}


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

	vector <string> result = preorderTraversal(a);

	for(int i = 0; i < result.size(); i++ ) {
		cout << result[i] << endl;
	}

	return 0;
}