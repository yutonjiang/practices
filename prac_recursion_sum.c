/*函式遞迴:
   利用遞迴印出1~N 
   
   對於連續整數相加的規律，可以觀察出
   
   sum 1 = 1
   sum 2 = 1+2 = sum1+2
   sum 3 = 1+2+3 = sum2+3
   
   諸如此類，可以得知除了sum1外都是sum n =sum(n-1)+n  
   
   註:當函式運作到return時，就代表該函式結束執行 
*/ 

#include <stdio.h>

int adding(int n);

int main(){
	int n;
	printf("n=?\n",n);
	scanf("%d",&n);
	printf("%d\n",adding(n));
	return 0;
}

int adding(int n){
	if(n == 1){  
		return 1;           
	}
	return adding(n-1)+n;  // 當main的 n 進來函式以後，會return後面的adding(n-1)+n，同時又因為adding(n-1)再繼續向前呼叫，直到 1為止 
}
