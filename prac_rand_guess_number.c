/*�q�Ʀr�C��:�Q��rand�H�����ͤ@�Ӽƨ����ϥΪ̿�J�Ʀr�h�q 

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int ans = rand() % 100 +1; //�N�Ʀr�]�즨1~100���� 
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
