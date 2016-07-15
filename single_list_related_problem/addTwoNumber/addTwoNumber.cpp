#include <iostream>
#include <list>
using namespace std;

class Node {
	public: 
		int val;
		Node * next;
		Node(int x) : val(x), next(NULL) {};

		void setNext(Node * nextNode) {
			next = nextNode;
		}
};


Node * addTwoNumbers ( Node * l1, Node *l2) {
	Node dummy (-1);
	int carry  = 0;
	Node * prev = &dummy;
	for (Node *pa = l1, *pb=l2; pa!=nullptr || pb!=nullptr; pa= pa==nullptr ? nullptr : pa->next, pb=pb==nullptr ?  nullptr :pb->next, prev = prev->next ) {
		const int ai = pa == nullptr ? 0 :pa->val;
		const int bi = pb == nullptr ? 0 :pb->val;
		const int value = (ai + bi + carry) %10;
		carry = (ai+bi+carry)/10;
		prev->next = new Node (value);
	}
	if( carry > 0 ) {
		prev->next = new Node(carry);
	}

	return dummy.next;
};


int main () {
	
	Node * list1Number1 = new Node(2); // first node with value 2;
	Node * list1Number2 = new Node(4); // second node with value 4;
	Node * list1Number3 = new Node(3);

	list1Number1->setNext(list1Number2);
	list1Number2->setNext(list1Number3);

	Node * list2Number1 = new Node(5); // first node with value 2;
	Node * list2Number2 = new Node(6); // second node with value 4;
	Node * list2Number3 = new Node(4);

	list2Number1->setNext(list2Number2);
	list2Number2->setNext(list2Number3);

	Node * finalResult = addTwoNumbers(list1Number1,list2Number1);

	cout << finalResult->val << endl;

	Node * secondResult = finalResult->next;
	cout << secondResult->val << endl;

	Node * thirdResult = secondResult->next;
	cout << thirdResult->val << endl;

	// list<int> list1;
	// list<int> list2;
	
	// list1.push_back(2);
	// list1.push_back(4);
	// list1.push_back(3);

	// list2.push_back(5);
	// list2.push_back(6);
	// list2.push_back(4);

	// list <int>::iterator ptr1; // iterator 
	// list <int>::iterator ptr2;

	// for(ptr1 = list1.begin(); ptr1 != list1.end(); ptr1++) {
	// 	cout << *ptr1 << endl;
	// }

	// for(ptr2 = list2.begin(); ptr2 != list2.end(); ptr2++) {
	// 	cout << *ptr2 << endl;
	// }
	

	return 0;
}