#include <iostream>
#include <list>
using namespace std;

class Node {
	public:
		int val;
		Node * next;
		Node(int x): val(x), next(NULL) {};
		
		void setNext (Node * nexeNode) {
			next = nexeNode;
		}
};

Node * addTwoNumbers ( Node * list1, Node * list2 ) {
	//create start node 
	Node initial (0);
	Node * ptr = &initial;
	int carry = 0;

	// ptr1 and ptr2 are iterators for these two different lists; 
	for( Node * ptr1 = list1, * ptr2 = list2; ptr1 != nullptr || ptr2 != nullptr; ptr1 = ptr1 == nullptr ? nullptr :ptr1->next, ptr2 = ptr2 == nullptr ? nullptr : ptr2->next, ptr = ptr->next) {
		const int number1 = ptr1 == nullptr ? 0 : ptr1->val; // if ptr1 is out of bound, then it should be 0
		const int number2 = ptr2 == nullptr ? 0 : ptr2->val;
		const int value =  (number1+number2+carry)%10;
		carry =  (number1+number2+carry)/10;
		ptr->next = new Node(value);
	}
	if(carry>0){
		ptr->next = new Node(carry);
	}
	return initial.next;
};


int main () {
	Node * list1number1 = new Node(2); // create a node pointer points at the first number 
	Node * list1number2 = new Node(4); // another question why use new to allocate new memory
	Node * list1number3 = new Node(3);

	list1number1->setNext(list1number2);
	list1number2->setNext(list1number3);

	Node * list2number1 = new Node(5); // create a node pointer points at the first number 
	Node * list2number2 = new Node(6);
	Node * list2number3 = new Node(4);

	list2number1->setNext(list2number2);
	list2number2->setNext(list2number3);

	Node * result = addTwoNumbers(list1number1, list2number1);
	cout << result->val << endl;
	Node * secondNumber =  result->next;
	cout << secondNumber->val << endl;
	Node * thirdNumber = secondNumber->next;
	cout << thirdNumber->val << endl;

	return 0;
}