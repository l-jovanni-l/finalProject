#include <iostream>

#define ROWS 8
#define COLS 5

using namespace std;

void fill_array_zeros(int[][COLS]);
void print_array(int[][COLS]);
void pattern1(int[][COLS]);
void pattern2(int[][COLS]);

/*********** Header File ***************/

void fill_array_zeros(int array[] [COLS]){
	
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++){
			array[i][j] = 0;
		}
	}
	
}

void print_array(int array[][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++){
			cout << array[i][j];
		}
		cout << endl;
	}
	
}

void pattern1(int array[][COLS]){
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++){
			if (j <= i){
			array[i][j] = 1;
			} 
		}
	}
}

void pattern2 (int array[] [COLS]){
		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COLS; j++){
				if (j == 0 || j == i){
				array[i][j] = 1;
			} 
		}
	}
}



/*********** cpp file **************/
int main() {
	int my_array[ROWS][COLS];
	fill_array_zeros(my_array);
	print_array(my_array);
	
	pattern1(my_array);
	print_array(my_array);
	
	fill_array_zeros(my_array);
	pattern2(my_array);
	print_array(my_array);
	
	
	
	
	return 0;
}