#include<stdio.h>

int main()
{
	int n,rem=0,rev=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reverse number= %d",rev);
	return 0;
}
