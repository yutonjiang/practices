// logic operation 邏輯運算 
#include <stdio.h>

int main(){
	int a = 1,b = 0 ,c;
	
	c= !a ;  // ! : not
	printf("a=%d b=%d c=%d\n",a,b,c); //  a != 0 ,hence !a = 0(false)
	
	c= a && b; // && : and
	printf("a=%d b=%d c=%d\n",a,b,c); //  0=false,1=true, 所以 a=1=true b=0=false, a and b要兩個皆為true才會輸出1，所以c=0 
	
	c = a || b; // || :or
	printf("a=%d b=%d c=%d\n",a,b,c); //  a = 1 = true , b = 0 =true , a or b其中一者是true就會輸出1，所以c=1 
	 
	 
	int d= 0, e =0 ,f =0;
	
	f = ++d && ++e ;
	printf("d = %d e = %d f = %d",d,e,f); // d= 1 , e =1 ,hence f=1   (1 1 1)
	printf("\n");
	f = --d && --e ;
	printf("d = %d e = %d f = %d",d,e,f); // d-1 =false=0，不會繼續計算--e (0 1 0)
	printf("\n"); 
	f =  ++d || ++e ; 
	printf("d = %d e = %d f = %d",d,e,f); // d= 1 =true，不會繼續計算++e (1 1 1)
	printf("\n");
}
