//Program to print Fibonacci Series upto given number of terms.
#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,i=0,n=0;
    printf("Enter no of Terms:");
    scanf("%d",&n);
    while(i<n)
    {
        printf("%d ",a);//Logic to print fibonacci series.
        c=a+b;
        a=b;
        b=c;
        i++;
    }
return 0;
}