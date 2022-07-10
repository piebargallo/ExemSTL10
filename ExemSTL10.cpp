// CPP program to illustrate
// Implementation of clear() function

#include <iostream>
#include <list>

using namespace std;

// Driver code
int main() {
	
	// Def List
	list<int> mylist{ 1, 2, 3, 4, 5 };

	// List becomes empty
	mylist.clear();

	// Printing the list
	for (auto it = mylist.begin(); it != mylist.end(); ++it)
		cout << ' ' << *it;

	return 0;

} // End driver
