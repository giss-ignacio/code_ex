#include <iostream>
#include <vector>

#define MAX_VAL 999999

using namespace std;
/*
*	A[0] = 3
*	A[1] = 1
*	A[2] = 2
*	A[3] = 4
*	A[4] = 3
*	P = 3, difference = |6 − 7| = 1 
*/

inline int min_value(int a, int b){		
	return ( a < b ? a : b);
}


int solution(vector<int> &A){
	int acum1 = 0;
	int acum2 = 0;
	int difac = 0;		
	int min_difac = MAX_VAL;
	
	
	for (int i = 1; i < A.size(); i++)
		acum2 += A[i];
	
	for (int i = 0; i < A.size()-1; i++){
		acum1 += A[i];
		difac = abs(acum1 - acum2);		
		
		min_difac = min_value(difac, min_difac);
				
		acum2 -= A[i+1];
	}
	
	return min_difac;	
}

int main()
{
	vector<int> A {3, 1, 2, 4, 3};
	//vector<int> A {9, 3, 9, 3, 2};
	
	printf("%d \n", solution(A));
	
		
	return 0;
}
