#include <iostream>
using namespace std;

class Node {
	private:
		int val;
		Node * next;

	public:
		Node(int x): val(x), next(nullptr) {};	
		
		void setNext(Node * nextNode){
			next = nextNode;
		}

		Node * getNext(){
			return next;
		}

		int getVal(){
			return val;
		}
};

Node * reverseLinkedList ( Node * list, int m, int n ){
	Node dummy(0);
	dummy.setNext(list);
	Node * prev = &dummy;
	for (int i=0; i <m-1; ++i){
		prev = prev->getNext();
	} 
	Node * const head2 = prev;
	prev = head2->getNext();
	Node * cur = prev->getNext();
	
	for(int i =m; i <n; ++i){
		prev->setNext(cur->getNext());
		cur->setNext(head2->getNext()) ;
		head2->setNext(cur);
		cur = prev->getNext(); 
	}
	return dummy.getNext();
};	

Node * reverseLinkedList ( Node * list, int m, int n ) {
	Node initial (0);
	initial.setNext(list);
	Node * ptr =  &initial;

	for(int i = 0; i < m-1 ; i++) { // just time counter
		ptr = ptr->getNext(); // now ptr is pointing at the first swap number 
	}

	Node * const ptr2 =  ptr; // make first pointer a constant that won't be modified;
	ptr = ptr2->getNext(); 
	Node * cur =  ptr->getNext();

	for(int i =m; i < n; i++){
		ptr->setNext(cur->getNext());
		cur->setNext(ptr2->getNext()); //exchange 
		ptr2->setNext(cur);
		cur = prev->getNext();
	} // I don't get this exchange....

};


int main () {
	// set up sample linked list 

	Node * number1 =  new Node(1);
	Node * number2 =  new Node(4);
	Node * number3 =  new Node(3);
	Node * number4 =  new Node(2);
	Node * number5 =  new Node(5);

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
	cout <<"-------------------" << endl;

	Node * result = reverseLinkedList(number1, 2, 4);

	cout << result->getVal() << endl;

	Node * result2 = result->getNext();
	cout << number_2->getVal() << endl;

	Node * result3 =  result2->getNext();
	cout << result3->getVal() << endl;

	Node * result4 = result3->getNext();
	cout << result4->getVal() << endl;

	Node * result5 =  result4->getNext();
	cout << result5->getVal() << endl;
	return 0;
}
