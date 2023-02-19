// if & else . string if判斷式和字串規律
#include<stdio.h>

int main(){
	int a = 1, b = 0, c = -1, d = 2;
	
	    if (a == true)
	       printf("a is true\n");
	    if (b == true)
	       printf("b is true\n");
	    if (c == true)
	       printf("c is true\n");
	    if (d == true)
	       printf("d is true\n");
	       
		char w1 = 'a', w2[20] = "hello";
		printf("w1 = %c\n",w1);
		
		printf("w2 = %s\n",w2);
		
		printf("%c\n",w2[4]); // 印出w2中第4個元素 (從0算起) 
		
	/* 三元條件運算符(?:) 效果等同if  [condition ? true stament : false statment]
	可以寫在printf裡，非零即真*/ 	
	a == 1 ? printf("1"):printf("2"); 
		   
	
	    return 0;
	
	
	
} 
