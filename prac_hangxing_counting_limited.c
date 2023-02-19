/*韓信點兵問題(限定範圍):

試在一定範圍內找出除以三會餘二，除以五會餘三
，除以七會餘二的所有數字
*/
#include<stdio.h>

int main(){
	
	int min,max;
	printf("max=");
	scanf("%d",&max);
	printf("min=");
	scanf("%d",&min);
	
	int number;
	for(number=min;number<=max;++number){ //由小排到大 
		if( number%3==2 && number%5==3 && number%7==2 ){
			printf("%d ",number);
		}
	}
	
	printf("\n");
	return 0;
	
} 
