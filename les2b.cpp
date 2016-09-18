#include <iostream>
#include <vector>

using namespace std;
/*
*	For example, given array A = [3, 8, 9, 7, 6] and K = 3, the function should return [9, 7, 6, 3, 8].
*	 
*/

int shift(int n){	
	return ( n%2 == 0 ? 0 : -1);
}

int solution(vector<int> &A){
	return (A[A.size() -1 + shift(A.size() / 2)]);
}


int main()
{
	vector<int> A {9, 3, 9, 3, 9, 7, 9};
	//vector<int> A {9, 3, 9, 3, 2};
	
	printf("%d \n", solution(A));
	
		
	return 0;
}
