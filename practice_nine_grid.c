/*設計一個九宮格程式,輸入1~9的整數，會在對應的格子中出現該數字
由左至右，由上而下*/ 
#include <stdio.h>

int main(){
	    
	while(1){
		int n,r,c;
		printf("請輸入數字:");
		scanf("%d",&n);
		
		int row = (n-1)/3;     /*因為 將數列-1以後  0 3 6剛好為%3=0的第一列 1 4 7為%3=1的第二列 2 5 8為%3=2的第三列  成規律關係*/
		int column = (n-1)%3;
	    printf("*******\n");
	    
/*縱向*/for (r=0;r<3;r++){ 
	        printf("*");
/*橫向*/	for(c=0;c<3;c++){ 
		       if(r == row && c == column)
			      printf("%d",n);
		       else
		          printf(" "); 
			      printf("*");
		    }
	        printf("\n*******\n");			
      }
			
   }
   return 0;
} 
