#include <iostream>
#include <vector>
#include <math.h>   

#define MAX_MOD 1073741824

using namespace std;
/*
*	Array A contains only 0s and/or 1s:
*
*	0 represents a car traveling east,
*	1 represents a car traveling west.
*/

int max(int a, int b){
	return (a > b ? a : b);
}

vector<int> solution(vector<int> &A, vector<int> &B){	
	int fib_an_2 = 1;
	int fib_an_1 = 1;
	int fib_an = 0;
	int mod_n = 0;
	vector<int> counters(A.size());
	vector<int> result(A.size());
	
	counters[0] = 1;
	
	for (int i = 1; i < A.size() ; ++i)
	{		
		fib_an = fib_an_1 + fib_an_2;
		fib_an %= MAX_MOD;		
		
		fib_an_2 = fib_an_1;
		fib_an_1 = fib_an;
		
		counters[i] = fib_an;
		
	}
	
	for (int i = 0; i < A.size() ; ++i)
	{
		mod_n = pow(2, B[i]);		
		result[i]= counters[A[i]-1] % mod_n;		
	}
	
	return result;
}



int main()
{
	vector<int> A {4, 4, 5, 5, 1};
	vector<int> B {3, 2, 4, 3, 1};
	//vector<int> A {9, 3, 9, 3, 2};	
	
	vector<int> res = solution(A, B);
	
	for (size_t i=0; i< res.size()-1; i++)
		printf("%d, ", res[i]);
	
	printf("%d \n", res[res.size()-1]);
		
	return 0;
}
