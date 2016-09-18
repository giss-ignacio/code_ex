#include <iostream>
#include <vector>


using namespace std;
/*
*	Arithmetic Series formula
*	(a1 + an)*n/2
*/


int solution(vector<int> &A){
	long int acum = 0;	
	
	for (int i = 0; i < A.size(); i++)
		acum += A[i];
	
	// Arithmetic Series
	long int complete = ((2 + A.size())*(A.size() + 1)) / 2;
	
	return (complete - acum);	
}

int main()
{
	vector<int> A {2, 3, 1, 5};
	//vector<int> A {9, 3, 9, 3, 2};
	
	printf("%d \n", solution(A));
	
		
	return 0;
}
