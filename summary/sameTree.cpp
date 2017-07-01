#include <iostream>
#include <vector>
using namespace std;

class treeNode {
public:
	treeNode * left;
	treeNode * right;
	int val;
	treeNode(int v): val(v), left(nullptr), right(nullptr){};
};

void traversal(treeNode * root){
	
};

bool sameTree(treeNode * root1, treeNode * root2){
	if(!root1 && !root2) return true;
	if(!root1 || !root2) return false;
	return root1->val == root2->val && sameTree(root1->left, root2->left) && sameTree(root1->right, root2->right);
};

int main(){

	treeNode * root1 = new treeNode(1);
	treeNode * node1 = new treeNode(2);
	treeNode * node2 = new treeNode(3);
	treeNode * node3 = new treeNode(4);
	treeNode * node4 = new treeNode(6);

	root1->left = node1;
	root1->right = node2;
	node1->left = node3;
	node1->right =  node4;

	treeNode * root2 = new treeNode(1);
	treeNode * node12 = new treeNode(2);
	treeNode * node22 = new treeNode(3);
	treeNode * node32 = new treeNode(4);
	treeNode * node42 = new treeNode(6);
	
	root2->left = node12;
	root2->right = node22;
	node12->left = node32;
	node12->right =  node42;
	
	cout<< sameTree(root1,root2) << endl;
	return 0;
}


