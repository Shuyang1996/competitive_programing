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

bool sameTree(TreeNode * root1, TreeNode * root2){
	if( !root1 && !root2 ) return true;
	
	if( root1 != NULL && root2 != NULL ) {
		return
		(	
			root1->getVal() == root2->getVal() &&
			sameTree(root1->getLeft(),root2->getLeft() ) &&
			sameTree(root1->getRight(),root2->getRight() )
		);
	}

	return false;
};

int main () {
	//create first binary tree

	TreeNode * a = new TreeNode ("A");
	TreeNode * b = new TreeNode ("B");
	TreeNode * c = new TreeNode ("F");
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

	//create second binary tree
	TreeNode * aa = new TreeNode ("A");
	TreeNode * bb = new TreeNode ("B");
	TreeNode * cc = new TreeNode ("C");
	TreeNode * dd = new TreeNode ("D");
	TreeNode * ee = new TreeNode ("E");
	TreeNode * ff = new TreeNode ("F");
	TreeNode * gg = new TreeNode ("G");
	TreeNode * hh = new TreeNode ("H");
	TreeNode * ii = new TreeNode ("I");

	aa->setRight(cc);
	aa->setLeft(bb);

	bb->setRight(dd);

	cc->setRight(ff);
	cc->setLeft(ee);

	ee->setLeft(gg);

	ff->setLeft(hh);
	ff->setRight(ii);

	bool result = sameTree(a, aa);
	if(!result){
		cout << "These two trees are different" << endl;
	}else{
		cout << "These two trees are the same" << endl;
	}

////////////////////////////////////////////////////////////////////


	return 0;
}