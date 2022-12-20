
#include <stdio.h>
#include<math.h>
#define PI 3.141592
int main()
{
    int n,term,i;
    float sum,x,no;
    printf("Enter n and x");
    scanf("%d %f",&n,&x);
    no=x;
    x=x*PI/180.0; // degrees to radians conversion
    term=x; // first term value
    sum=x; //term stored in sum
    for (i=1; i<=n; i++) // computation & summation for second term onwards
    {
        term= term*(((-1)*x*x)/(2*i*(2*i+1)));
        sum+=term;
    }
    printf("Library value of Sin(%.2f) = %.2f ", no, sin(x));
    printf("\nSin (%.2f) = %.2f", no, sum);
    return 0;
}
