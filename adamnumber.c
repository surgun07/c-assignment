// C program to print all three digit Adam Number.
#include <stdio.h>
#include<math.h>
int main()

{
int i=100,j=0,temp=0,k=0,d=0,pos=1,sq=0,revtemp=0,revnosq=0;
printf("All three digits Adam Numbers\n");
    while(i<=1000)
    {
        j=2;//Number of digits are three and j is initialized with 3-1=2.
        k=i;//k is initialized because we need no. i in future.
      	temp = 0, pos = 1, revtemp = 0, revnosq = 0, sq = 0;
	 while(k)
            {
                d=k%10;//Extracting digit from the number k.
                pos=pow(10,j);
                temp=temp+d*pos;
                k=k/10;
                j--;
    
	   }

            sq=i*i;//square of number.
            revnosq=temp*temp;//square of reverse of a number.
          
          k = 0;
	 temp = revnosq;
	while(temp){
		k++;
		temp = temp/10;
	
	}
	
	j = k -1;		 
	  while(revnosq)//reversing of number.
                {
                   
                    d=revnosq%10;//Extracting digit.
                    revtemp= revtemp + d*pow(10,j);//Placing the digit at right place.
                    revnosq=revnosq/10;//Removing last digit.
                    j--;

                }           
	    if(sq==revtemp)
                {
                    printf("%d, ",i);
                }
                
  
  
    i++;
    }
return 0;
}