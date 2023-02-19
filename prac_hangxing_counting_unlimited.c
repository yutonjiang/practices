/*韓信點兵問題(不定範圍)
    
        試求除三餘二，除二餘三，除七餘二的最小數字 

*/

#include<stdio.h>

int main(){
	
	int number = 1;
	while(!( number%3==2 && number%5==3 && number%7==2)){  //  !()表示不符合條件 
	      ++number;	
	}
	
	printf("%d\n",number);
	return 0;
	
	
	
	
	
} 
