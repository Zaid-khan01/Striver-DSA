bool checkArmstrong(int n){
	int c = n, sum=0, rem;
	while(n>0){
		rem = n%10;
		sum = (rem*rem*rem) + sum;
		n = n/10;
	}
	if(c==sum)
		return true;
	else
		return false;
}
