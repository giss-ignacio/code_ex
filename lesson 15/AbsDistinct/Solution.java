import java.io.*;
import java.util.*;
import java.math.*;


public class Solution {
	
	public static int abs(int a){
		return (a > 0 ? a : -a);
	}

	public static int solution(int[] A) {
		int absDistinct = A.length;
		int i = 0;
		int f = absDistinct -1;
		
		while (A[i] < 0 && i < A.length) {
			if (-A[i] == A[f]){
				absDistinct--;
				i++;
			} else if (-A[i] > A[f])
				i++;
			else {
				while (-A[i] < A[f])
					f--;
			}				
		}
		
		return absDistinct;
	}

    public static void main(String[] args) {        
        //Scanner scan = new Scanner(System.in);
		
		
			int[] in_vec = {-5, -3, -1, 0, 3, 6};
		
			int res = solution(in_vec);
			
            System.out.println(res);
			
    }
}