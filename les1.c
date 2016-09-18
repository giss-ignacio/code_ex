#include <stdio.h>


int max(int a, int b){
	return (a > b ? a : b);
}

int solution(int n) {
	int max_gap = 0;
	int curr_gap = 0;
	while ((n > 0)&(n %2 == 0) )
		n /= 2;
	
	while (n > 0){
		int remain = n%2;
		if (remain == 0)
			curr_gap += 1;
		else
			if (curr_gap != 0){
				max_gap = max(curr_gap, max_gap);
				curr_gap = 0;
			}
		n /= 2;			
	}			
	
	
	return max_gap;
}


int main()
{
	int test_num = 1347;
	
	printf("%d \n", solution(test_num));
	
	
    return 0;
}