#include <iostream>
using namespace std;

class Node {
	private:
		int val;
		Node * next;
	public:
		Node(int x) : val(x), next(NULL) {};
		
		void setNext(Node * nextNode) {
			next =  nextNode;
		}

		Node * getNext(){
			return next;
		}

		int getVal(){
			return val;
		}

		void setVal(int x){
			val = x;
		}
};

Node * removeDuplicates (Node * list) {
	//create initial node;
	Node initial (0);
	Node * ptr = &initial;
	initial.setNext(list); // connect it with first node in sample data 
	ptr =  ptr->getNext(); // pointing at the first element in the array 

	for( Node * prev = ptr->getNext(); prev != nullptr; prev = prev->getNext()){
		
		const int val = prev->getVal();
		if(ptr->getVal()!= val) {
			ptr =  ptr->getNext();
			ptr->setVal(val);
		}
	}

	return initial.getNext();
};


int main () {
	Node * number1 = new Node(1);
	Node * number2 = new Node(1);
	Node * number3 = new Node(2);
	Node * number4 = new Node(3);
	Node * number5 = new Node(3);
	Node * number6 = new Node(4);

	number1->setNext(number2);
	number2->setNext(number3);
	number3->setNext(number4);
	number4->setNext(number5);
	number5->setNext(number6);

	cout << number1->getVal() << endl;

	Node * number_2 = number1->getNext();
	cout << number_2->getVal() << endl;

	Node * number_3 =  number_2->getNext();
	cout << number_3->getVal() << endl;

	Node * number_4 = number_3->getNext();
	cout << number_4->getVal() << endl;

	Node * number_5 =  number_4->getNext();
	cout << number_5->getVal() << endl;

	Node * number_6 =  number_5->getNext();
	cout << number_6->getVal() << endl;

	cout << "------------------------" << endl;

	Node * newList = removeDuplicates(number1);

	cout << newList->getVal() << endl;

	Node * newList_2 = newList->getNext();
	cout << newList_2->getVal() << endl;

	Node * newList_3 =  newList_2->getNext();
	cout << newList_3->getVal() << endl;

	Node * newList_4 = newList_3->getNext();
	cout << newList_4->getVal() << endl;


	return 0;
}