//選擇敘述  switch函數 
#include<stdio.h>

main(){
	int i ;
	printf("enter the score:");
	scanf("%d",&i);
	
	i /= 10;
	
	switch(i) //括弧內可以放入控制運算，藉由判別結果進入不同case ，可以是變數.等式 .字符 
	{
	    default: // 當沒有case成立時從default向下執行，沒有case符合也沒有default標籤則結束switch 
			printf("nice try");
			break;
			
		case 9: //當case的條件成立時執行下行敘述 
			printf("keep going!");
			break;  // 如果沒有break的話，程式會從成立的case一路向下執行直到break或結束敘述等等 
			
		case 8:
		    printf("pretty good!");
		    break;
		    
		case 7:
			printf("still ok");
			break;
		
	} 
	return 0;
		
	}
	
	
	
	
	
	
	

