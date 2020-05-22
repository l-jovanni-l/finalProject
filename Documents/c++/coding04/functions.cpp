/***********************************************************
Name: Jovanni Elias
Assignment: coding 04
Purpose: To make me struggle... and fill a 2d array of rows 
and columns with random numbers then get the average of each row.
Notes: This file was hardest
***********************************************************/
#include "functions.h"

	
float simple_random(){
	return (float) (rand() % RAND_MAX) / (float) RAND_MAX;
}

float** make_2d_array(const int row, const int col ){
	
	float **array2d = new float*[row];	
	for (int i=0;i<row;i++){		
		array2d[i] = new float[col];
	}
	return array2d;
}

void init_2d_array(float**array2d, const int row, const int col){
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			array2d[i][j] = simple_random();
		}
	}
}
void print_2d_array(float**array2d, const int row, const int col){
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){			
			cout << setw(4) <<  array2d[i][j] << " "; 
		}
		cout << endl;
	}
	cout << endl;
}


float avg_row(float row[], const int col) {
	float rowAverage = 0;
	for (int i=0;i<col;i++){
		rowAverage += row[i];
	}
	return rowAverage/(float)col;
}



	