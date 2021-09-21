#include<stdio.h>
#include<math.h>
int main()
{
    float base,exp,power=1.0;
    printf("enter the base and exponent:\n");
    scanf("%f %f",&base,&exp);
    while(exp>0)
    {
        power=power*base;
        exp--;
    }
    printf("result=%f \n",power);
    return 0;
}