#include <iostream>

using namespace std;
void swap(int*, int*);		//protoypes says youre gonna accept two pointers
/* Everything on top is a directive and just include one header file */

void swap(int *n1, int *n2){  //going to accept two pointers
	int temp = *n1;
	*n1 = *n2;		//These are no longer values they are pointer referance
	*n2 = temp;
}

int main () {
	
		int a = 3, b = 5;
		int temp;
		
		cout << a << " " << b << endl;
		
		swap(&a, &b);
		
	/* 	temp = a;
		a = b;
		b = temp; */
		
		cout << a << " " << b << endl;
		
		return 0;

}