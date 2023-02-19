// 寫出一個程式，列出10*4的座位表，並把指定的座位打上*號 ，座號為兩位數 
#include<stdio.h>


int main(){
	int a,b;
	printf("請輸入座號:");
	scanf("%d",&b);
	
	for (a=1;a<=40;a++)  
	{
		    
		if (a!=b) 
            printf("%02d ",a); // 第一個0表示不足位時補上0，第二個數字2表示輸出字符的最大位數 
        else
		    printf("%02d* ",a);    	
		if (a%10==0)	          //當輸出到達10進位時換行一次 
			printf("\n");
    }
    return 0;
	
	 
	
	
}
