//��ܱԭz  switch��� 
#include<stdio.h>

main(){
	int i ;
	printf("enter the score:");
	scanf("%d",&i);
	
	i /= 10;
	
	switch(i) //�A�����i�H��J����B��A�ǥѧP�O���G�i�J���Pcase �A�i�H�O�ܼ�.���� .�r�� 
	{
	    default: // ��S��case���߮ɱqdefault�V�U����A�S��case�ŦX�]�S��default���ҫh����switch 
			printf("nice try");
			break;
			
		case 9: //��case�����󦨥߮ɰ���U��ԭz 
			printf("keep going!");
			break;  // �p�G�S��break���ܡA�{���|�q���ߪ�case�@���V�U���檽��break�ε����ԭz���� 
			
		case 8:
		    printf("pretty good!");
		    break;
		    
		case 7:
			printf("still ok");
			break;
		
	} 
	return 0;
		
	}
	
	
	
	
	
	
	

