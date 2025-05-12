#include <bits/stdc++.h>

int countDigits(int n){
	int rem, count=0;
	int c = n;
	while(n>0){
		rem = n%10;
		if(rem>0 && c%rem == 0){
			count++;
		}
		n = n/10;
	}
	return count;
}