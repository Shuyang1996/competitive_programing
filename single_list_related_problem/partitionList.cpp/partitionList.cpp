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
};

Node * partitionList(Node * list, int target) {
	//create intial node as a start;
	Node inital(0);
	Node * ptr = &initial;

	while()
};

int main () {

	Node * number1 = new Node(1);
	Node * number2 = new Node(4);
	Node * number3 = new Node(3);
	Node * number4 = new Node(2);
	Node * number5 = new Node(5);
	Node * number6 = new Node(2);

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


	return 0;
}


