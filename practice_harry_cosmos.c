/*設計一個程式，計算該年是否看得到哈雷彗星，哈雷彗星週期為75年
，已知1986年可見哈雷彗星，西元前則不判斷*/ 

#include<stdio.h>

int main(){
	
       int a,b;
	   
	   printf("請輸入西元年份:");
	   scanf("%d",&a);
	   	if (a>1986)
			b = a-1986;
		else 
		    b= 1986 -a;
	   	if (b%75==0)
	   {
	   	   printf("該年看得見哈雷彗星"); 
	   }	
	   else 
	   {
	   	   printf("該年看不見哈雷彗星");
		} 
       
	   return 0;
	
	
	
}
