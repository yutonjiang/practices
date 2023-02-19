/*韓信點兵:最大值問題
       在一個有限的範圍內，找出除以三會餘二，除以五會餘三
，除以七會餘二，而且在範圍內最大的數字 
*/ 
#include<stdio.h>

int main(){
	
	int max;
	
	printf("max=");
	scanf("%d",&max);
	
	int number=max;
	
	while( number>0 && !( number%3==2 && number%5==3 && number%7==2)){ //用顛倒的方式，由大的數往前數，為了避免陷入無窮迴圈，要設定>0時停止 
	        --number;
	     }
	
	if (number>0){   //為了確保跳出while時是因後面變成false(表示找到數字)，所以篩選掉前面變成false的可能 
		printf("%d\n",number);
	   } 
	   
     return 0;	
}

/*for 寫法

int answer = 0;
int number;
for( number = max ; number>=1 && answer == 0 ; --number){
       if( number%3==2 && number%5==3 && number%7==2){
	       answer = number;
	   }

}
       if (answer != 0){
	       printf("%d\n",answer);
	   }

*/ 
