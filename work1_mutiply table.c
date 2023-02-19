//  九九乘法表
#include <stdio.h>


int main(){
    int N = 1;
	
	printf("輸入乘法表的階數:");
	scanf("%d",&N);
	
	for (int a=1;a<=N;a++) // 縱向輸出 
	{
		    printf("\n");
		    
		for (int b=1;b<=N;b++) // 橫向輸出 
            
			printf("%d*%d=%d\t",a,b,a*b);
           
    }
    return 0;
		
	 
} 
/*也可以寫成一個for的迴圈
int c
for(c=1;c<=72;++c){
   int i =(c-1)/9+2  ( 2,2,2,...)
   int j =(c-1)%9+1  ( 1,2,3,...)
   printf("%d*%d=%d\n",i,j,i*j);
}
*/ 
