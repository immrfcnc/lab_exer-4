#include <iostream>


using namespace std;

int main()


{
	int x;
	int * pointer_p;
	
	pointer_p = &x;
	*pointer_p= 25;
	
	
	cout << x;
	return 0;
	
}
