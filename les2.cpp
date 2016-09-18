#include <iostream>
#include <vector>

using namespace std;
/*
*	For example, given array A = [3, 8, 9, 7, 6] and K = 3, the function should return [9, 7, 6, 3, 8].
*	 
*/


vector<int> solution(vector<int> &A, int K){
	int cycles = K % A.size();
	if (cycles == 0)
		return A;	
	
	vector<int> result = vector<int>(A.size());
	
	for (size_t i=0; i< cycles; i++)
		result[i] = A[A.size() - cycles + i];
	
	for (size_t i=0; i< A.size() - cycles; i++)
		result[cycles + i] = A[i];
	
	return result;
}

int main()
{
	vector<int> A {3, 8, 9, 7, 6, 6, 4, 7, 2};
	
	vector<int> res = solution(A, 5);
	
	for (size_t i=0; i< res.size(); i++)
		printf("%d, ", res[i]);
	printf("\n");
		
	return 0;
}
