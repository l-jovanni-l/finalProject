//g++ -std=c++11 -I ./ main.cpp functions.cpp
/***********************************************************
Name: Jovanni Elias
Assignment: coding 04
Purpose: To make me struggle... and fill a 2d array of rows 
and columns with random numbers then get the average of each row.
Notes: This was hard
***********************************************************/
#include "main.h"

int main(int argc, char** argv) {
    srand(time(NULL)); 
    cout.setf(ios::fixed, ios::floatfield); 
    cout.precision(2); 

    int row = atoi(argv[1]);
	if(!(row >= 1 && row <= 20)){	
		cout << "You must pass two integers between 1 and 20 (inclusive)" << endl;
	} 
	else {
		int col = atoi(argv[2]);
		if(!(col >= 1 && col <= 20)){	
			cout << "You must pass two integers between 1 and 20 (inclusive)" << endl;
		}
		else {
			float **array2d = make_2d_array(row, col);
			init_2d_array(array2d, row, col);
			print_2d_array(array2d, row, col);
			
			
			for (int i=0;i<row;i++){
				cout << "Row " << i+1 << " average is: " << avg_row(array2d[i] ,col) << endl;
			}
		}
	}

    return 0;
}




