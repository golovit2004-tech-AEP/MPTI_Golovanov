

#include <stdio.h>

unsigned long long corn (int cell) {
	unsigned long long quantity=1;

	for(int i =1; i <cell; i++) {
		quantity=quantity*2;	
	}
	return quantity;
}

int main(int argc, char **argv) {
    unsigned long long n;
	scanf ("%llu", &n);
   unsigned long long result = corn(n);
    printf("%llu", result);
	
	return 0;
}

