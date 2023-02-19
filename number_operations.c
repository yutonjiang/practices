// 算法練習 

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
	f = double(a) / b ;     // 把整數a轉換成浮點數double型態 
	    printf("f = %.2f\n", f);
	    
	    
	    
	// increment 遞增(++) . decrement 遞減(--)
	
	int m=1,n=1; 
	    
	    m++;                         // 執行一次++ 就是對變數+1 
	    printf("m =%d n =%d\n",m,n); // m = 2 n = 1
	    n = m++;    
	    printf("m =%d n =%d\n",m,n); // ++放在後面就是先執行運算式再+1 ,所以 n=m=2 然後 m+1=3; 
	    n = ++m;    
		printf("m =%d n =%d\n",m,n); // ++放在前面就是先+1再執行運算式 ,所以 m+1 = 4 然後 n=m=4
	
	
	
}
