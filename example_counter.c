/*陣列循序存取:以擲骰子為例，試寫出一個計數器，在擲骰子6000次中，紀錄1~6點數出現的次數(利用陣列) 
    
	陣列的第二個用途:循序存取 
    對於一群資料，可以賦予編號，比起分開宣告，將資料放在陣列中可以方便做一些運算的處理
	 
*/ 

#include <stdio.h>
#include <stdlib.h>  //引入random 
#include <time.h>

int main(){
	srand(time(0));
	int counter[6]= {0}; // 定義空間為6格，並且元素初始化的陣列
	int i; 
	for (i=1;i<=6000;++i){
		int dice = rand() % 6 + 1;
		switch (dice){
			   case 1 : counter[0]++;break; // 當dice最後的結果出來，依據餘數0~5來決定此結果是1~6 
			   case 2 : counter[1]++;break;
			   case 3 : counter[2]++;break;
			   case 4 : counter[3]++;break;
			   case 5 : counter[4]++;break;
			   case 6 : counter[5]++;break;
		}
	}
	printf("1: %d\n", counter[0]);
	printf("2: %d\n", counter[1]);	
	printf("3: %d\n", counter[2]);	
	printf("4: %d\n", counter[3]);	
	printf("5: %d\n", counter[4]);	
	printf("6: %d\n", counter[5]);	
	return 0;
}

/*簡化寫法
for ( j =1; j<=6; ++j ){
if (dice == j){
     counter[j-1]++;
}

for (j=1;j<= 6 ; ++j){
    printf("%d : %d\n",j,counter[j-1]);
}
*/ 
