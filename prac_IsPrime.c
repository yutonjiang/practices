/*質數判斷練習
    思路:
	質數通常介在2 ~ (n-1)之間，因此只要此區間的數字都無法整除，就是質數 
*/
#include<stdio.h>

int main(){
	
	int n;
	
	printf("number=");
	scanf("%d",&n);
	
	int count =0; 
	int i;
	for(i=2 ; i<n ; ++i){
		if (n % i==0){
			++count; //也可以一開始將count設成1，找到因數時變為0，再交由後面的判斷式處理 
		 
		}
		
	}
	
	if(count==0){ //count後面的==0可以省略，如果count本身只有0跟1的結果就可以當作邏輯運算使用 
	    printf(" yes\n");
    }
	else{
	    printf(" no\n");
    }
	return 0;
} 
