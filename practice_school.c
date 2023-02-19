/* 銘傳國中每年都有12個班，一班有50個人
由於少子化每年每班都會減少1人，假設學生三年皆會準時畢業
試計算N年後學校一共有多少學生*/

#include<stdio.h>

int main(){
	
	      int N,sum=0;
	      
	      printf("請輸入年數:");
	      scanf("%d",&N);
	      
	      for(int c =1;c<=3;c++)
		  {
	    	  sum+= 12*(50 -(N-c));
			  	
		  }
	      printf("%d年後一共有%d位學生",N,sum);
	      return 0;
} 
