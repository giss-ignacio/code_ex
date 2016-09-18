#include <iostream>
#include <vector>


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

int solution(vector<int> &A){	
	int west = 0;
	int passing = 0;
	
	for (int i = A.size()-1; i >= 0 ; --i)
		if (A[i] == 0){
			passing += west;
			if (passing > 1000000000)
				return -1;			
		} else
			west += 1;
			
	return passing;
}



int main()
{
	vector<int> A {0, 1, 0, 1, 1};
	//vector<int> A {9, 3, 9, 3, 2};
	
	
	int res = solution(A);
	
	printf("%d \n", res);
	
		
	return 0;
}
