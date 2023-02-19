// compound assignment 複合運算 
#include<stdio.h>

int main(){
	int a=1,b=2,c=3;
        
		
		c *= a+b;  // c*(a+b)
		printf("c =%d\n",c);      // c = 3*(2+1)= 9
		c /= a+b;  // c/(a+b)
		printf("c =%d\n",c);      // c = 3/(2+1)= 1 
		c -= a+b;  // c-(a+b)
		printf("c =%d\n",c);      // c = 3-(2+1)= 0
		
	
	// priority 運算優先級	
	a=1,b=2,c=3;
    c = !a + b * c ;
        printf("a=%d b=%d c=%d\n",a,b,c); // c= 0 +2*3 =6 (1 2 6)
    c = ++a && b-- * c;
        printf("a=%d b=%d c=%d\n",a,b,c); // a+1=2(true),2*6=12(true) ->非零即真 ,c=1 (2 1 1)
    c = a++ * b + c % b;
        printf("a=%d b=%d c=%d\n",a,b,c); // c=2*1+1%1 =2+0=2 (3 1 2)
		
			
	
	
} 
