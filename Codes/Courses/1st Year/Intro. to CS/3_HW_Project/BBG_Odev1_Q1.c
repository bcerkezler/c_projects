//BBG Odev Q1 code
#include <stdio.h>
#include <math.h>

float func(float,int);

int main(){
	
	float x, sum;
	int n;
	
	
    printf("x: ");
    scanf("%f", &x);
    printf("n: ");
    scanf("%d", &n);
   
    sum = func(x, n);  	
	
    printf("f(%.f,%d): %f\n", x, n, sum);
		
    return 0;
}

float func(float x, int n)
{
	float sum = x, fact = 1.0, f_inc = 2.0, pwr = x;
	int i;
    
	for (i = 0; i < n; i++)
	{
		pwr *= (-pow(x,2));
		fact *= (f_inc * (f_inc + 1));
		sum += (pwr / fact);
		f_inc += 2;
	}

	return sum;
}