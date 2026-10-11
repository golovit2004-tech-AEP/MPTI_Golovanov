
#include <stdio.h>

int main(int argc, char **argv)
{
	/*unsigned int a;
	scanf ("%d", &a);
	int prev= a%10;
	int flag=0;
	
	while (a>0) { 
	int b = a % 10;
	if (b ==prev) {
	 flag = 1;
		break;
}
    prev=b;
    a=a/10;
}

if (flag)
 printf ("YES\n");
else printf ("NO\n");
	return 0;*/
	 int n;
    scanf("%d", &n);

    int prev = n % 10; 
    n /= 10;
    
    int found = 0;
    
    while (n > 0) {
        int curr = n % 10;  
        if (curr == prev) {  
            found = 1;
            break;
        }
        prev = curr;  
        n /= 10;
    }
    
    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}

