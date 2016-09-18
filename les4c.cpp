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

int solution(vector<int> &A){	
	vector<bool> counters(A.size());
	
	for (int i = 0; i < counters.size(); i++)
		counters[i] = false;
	
	for (int i = 0; i < A.size(); i++)		
		if ((A[i] > 0)&&(A[i] <= A.size())){
			counters[A[i]-1] = true;
		}
		
	int min_count = 0;
	while (counters[min_count] && (min_count < counters.size()))
		min_count++;	
	
	return min_count+1;
}



int main()
{
	vector<int> A {1, 3, 6, 4, 1, 2};
	//vector<int> A {9, 3, 9, 3, 2};
	
	
	int res = solution(A);
	
	printf("%d \n", res);
	
		
	return 0;
}
