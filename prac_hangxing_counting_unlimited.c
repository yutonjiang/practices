/*���H�I�L���D(���w�d��)
    
        �ըD���T�l�G�A���G�l�T�A���C�l�G���̤p�Ʀr 

*/

#include<stdio.h>

int main(){
	
	int number = 1;
	while(!( number%3==2 && number%5==3 && number%7==2)){  //  !()��ܤ��ŦX���� 
	      ++number;	
	}
	
	printf("%d\n",number);
	return 0;
	
	
	
	
	
} 
