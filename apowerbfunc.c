#include<stdio.h>
#include<math.h>
float power(float,float);
int main()
{
    float base,exp,result;
    printf("enter the base and exponent:\n");
    scanf("%f %f",&base,&exp);
    result=power(base,exp);
    printf("the power of the number is :%f", result);
    return 0;
}
float power(float b,float e)
{
    float pow=1.0;
    while(e>0.0)
    {
        pow=pow*b;
        e--;
    }
   
}