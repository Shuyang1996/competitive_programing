#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

// binary tree link list
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


vector <string> inorder( TreeNode * root ) {

   vector <string> result;
   stack < TreeNode * > s;

   TreeNode * ptr = root;

   while ( ! s.empty() || ptr != nullptr ) {
      if( ptr != nullptr ) {
         s.push(ptr);
         ptr =  ptr->getLeft();
      } else {
         ptr = s.top();
         s.pop();
         result.push_back(ptr->getVal());
         ptr = ptr->getRight();
      }
   }

   return result;

};


int main () {

	//construct sample binary tree
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

      vector <string> result = inorder(a);

      for(int i = 0; i < result.size(); i++ ) {
         cout << result[i] << endl;
      }



	return 0;
}