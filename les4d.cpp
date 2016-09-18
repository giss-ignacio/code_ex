#include <iostream>
#include <vector>


using namespace std;
/*
*	N=5 counters (0, 0, 1, 0, 0)
*
*/

int max(int a, int b){
	return (a > b ? a : b);
}

vector<int> solution(int N, vector<int> &A){
	vector<int> counters(N);
	int max_count = 0;
	
	for (int i = 0; i < A.size(); i++){
		
		if (A[i] == N + 1)
			for (int j = 0; j < counters.size(); j++)
				counters[j] = max_count;
		else
			if ((A[i] > 0) && (A[i] <= N)){
				counters[A[i]-1] += 1;
				max_count = max(counters[A[i]-1], max_count);
			}			
	}
	
	return counters;
}



int main()
{
	vector<int> A {3, 4, 4, 6, 1, 4, 4};
	//vector<int> A {9, 3, 9, 3, 2};
	
	
	vector<int> res = solution(5, A);
	
	for (size_t i=0; i< res.size()-1; i++)
		printf("%d, ", res[i]);
	
	printf("%d \n", res[res.size()-1]);
	
		
	return 0;
}
