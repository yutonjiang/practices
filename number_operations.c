// ��k�m�� 

#include <stdio.h>

int main(){
	
	int a=1,b=2,c=3,d;
	double e=1.0 , f;
	
	d = a / b ;
	    printf("d = %d\n", d);
	d = c % b ;
	    printf("d = %d\n" , d);
	f = a / b ;
	    printf("f = %.2f\n", f);
	f = e / b ;
	    printf("f = %.2f\n", f);
	f = double(a) / b ;     // ����a�ഫ���B�I��double���A 
	    printf("f = %.2f\n", f);
	    
	    
	    
	// increment ���W(++) . decrement ����(--)
	
	int m=1,n=1; 
	    
	    m++;                         // ����@��++ �N�O���ܼ�+1 
	    printf("m =%d n =%d\n",m,n); // m = 2 n = 1
	    n = m++;    
	    printf("m =%d n =%d\n",m,n); // ++��b�᭱�N�O������B�⦡�A+1 ,�ҥH n=m=2 �M�� m+1=3; 
	    n = ++m;    
		printf("m =%d n =%d\n",m,n); // ++��b�e���N�O��+1�A����B�⦡ ,�ҥH m+1 = 4 �M�� n=m=4
	
	
	
}
