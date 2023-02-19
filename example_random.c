/*
   函式運用: 亂數生成 
   
   c語言內附有函數rand來產生亂數，並且不需要輸入參數
   由stdlib.h產生 
   rand()函式所產生的亂數會是固定的，所以會需要srand()函式 來改變這些固定的亂數達成隨機效果
   在srand(x)中,x為亂數種，當亂數種改變，就會得到不同的亂數結果，亂數種可以用時間，用cpu循環次數等等難以一模一樣的量
   來當作亂數種 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){
	srand(time(0)); //括弧內使用時間當作引數，當時間不完全一樣，亂數也不會一樣 
	int i;
	for(i=1;i<=5;i++){
		printf("%d\n",rand());
	}
	
	
    return 0;	
} 


