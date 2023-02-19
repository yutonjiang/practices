/*猜數字遊戲:利用rand隨機產生一個數並讓使用者輸入數字去猜 

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int ans = rand() % 100 +1; //將數字設到成1~100之間 
	int n ;
	
	do{
	      printf("enter your guess:");
	      scanf("%d",&n);
	   if (n > ans){
	   	   printf("too large!\n");
	   } else if(n < ans){
	   	   printf("too small!\n");
	   } else{
	   	   printf("correct!\n");
	   }
    }while(n != ans);
	return 0;
}
