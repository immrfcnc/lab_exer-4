#include <iostream>

using namespace std;

int main ()

{
	int num [5];
		cout << " Enter a Number: ";
		
	for(int i= 0; i< 5; ++i )
		cin >> num [i];
		
		cout << " Entered Number: ";	
	for(int i = 0; i < 5; ++i)
	
		cout << *(num + i) << endl;
		
	return 0;
}
