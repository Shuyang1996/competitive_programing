#include <iostream>
#include <list>
using namespace std;

struct ListNode {
	int val;
	ListNode * next;
	ListNode (int x) : val(x), next(NULL) {}; 
}; // C++ member initializer list

int main () {
	list<int> list1;
	list<int> list2;
	
	list1.push_back(2);
	list1.push_back(4);
	list1.push_back(3);

	list2.push_back(5);
	list2.push_back(6);
	list2.push_back(4);

	list <int>::iterator ptr1; // iterator 
	list <int>::iterator ptr2;

	for(ptr1 = list1.begin(); ptr1 != list1.end(); ptr1++) {
		cout << *ptr1 << endl;
	}

	for(ptr2 = list2.begin(); ptr2 != list2.end(); ptr2++) {
		cout << *ptr2 << endl;
	}
	

	return 0;
}