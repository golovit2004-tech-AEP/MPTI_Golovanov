
#include <stdio.h>
#define PI 3.141592

float sinus (float x) {
	x=x*PI/180.0f;
	float sinus=0.0f;
    float e = 0.001f;
    float term=x;
    int n=1;
    
    while(term >e || term < -e) {
		
		sinus = sinus+term; 
		term=-term*x*x/((2.0f*n)*(2.0f*n+1));
		n++;
	}
	return sinus;
}
int main(int argc, char **argv)
{
	float x;
	scanf("%f", &x);

	printf("%.3f\n", sinus(x));
	return 0;
}

