
#include <stdio.h>
void honest (int n) {
	int digit = 0;
	int sum=0;
	while(n>0) {
		 digit = n%10;
		 sum=sum+digit;
		n=n/10;
		}
		if(sum%2==0) {
			printf("YES");
		}
		else 
		printf("NO");
	
}
int main (int argc, char **argv)
{
	int n;
	scanf("%d", &n);

	honest(n);
}

