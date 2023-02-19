/*韓信點兵問題:在韓信點兵的問題中加入一個計數器來求得結果，例如:

求出1-1000內前三小符合韓信點兵的數字 

*/

#include<stdio.h>>

int main(){
	
	int number,count=0;
	for ( number=1 ; number<=1000 && count <3 ; ++number ){ // count<3是因為後續的數字皆不需要，所以為了效能縮小範圍 
		
		if(number%3==2 && number%5==3 && number%7==2){   //第一個if在計算找到符合條件的數字是第幾個 
			++count;
			
			if(count<=3){      //第二個 if 限制了要列出第幾個順序的數字 
		       printf("%d ",number);
		    }
		}
	}
	printf("\n");
	
	return 0;
} 
