#include <iostream>
using namespace std;

class Node {
	private:
		int val;
		Node * next;
		Node (int x) : val(x), next(NULL) {};
	public:
		void setNext(Node * nextNode) {
			next =  nextNode;
		}	

		Node * getNext() {
			return next;
		}

		int getVal(){
			return val;
		}

};

Node * removeDuplicates(Node * list) {
	Node initial (0);
	intial.setNext(list);
	Node * ptr = initial.getNext(); // ptr is pointing at first element in this list;

	for(Node * prev = ptr->getNext(); prev!= nullptr; prev = prev->getNext()){
		int val = prev->getVal();
		if(ptr->getVal() == val){
		
		}
	}
}	

int main () {
	Node * number1 = new Node(1);
	Node * number2 = new Node(1);
	Node * number3 = new Node(1);
	Node * number4 = new Node(2);
	Node * number5 = new Node(3);

	number1->setNext(number2);
	number2->setNext(number3);
	number3->setNext(number4);
	number4->setNext(number5);
	
	cout << number1->getVal() << endl;

	Node * number_2 = number1->getNext();
	cout << number_2->getVal() << endl;

	Node * number_3 =  number_2->getNext();
	cout << number_3->getVal() << endl;

	Node * number_4 = number_3->getNext();
	cout << number_4->getVal() << endl;

	Node * number_5 =  number_4->getNext();
	cout << number_5->getVal() << endl;

	return 0;
}