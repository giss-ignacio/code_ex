#include <iostream>
#include <math.h>

using namespace std;


int solution(int X, int Y, int D){
	
	return ceil((float)abs(X - Y)/(float)D);
}

int main()
{	
	printf("%d \n", solution(10, 85, 30));
	
		
	return 0;
}
