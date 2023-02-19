/* 設計一個程式，可以把輸入的數字以絕對值輸出 
利用非零即真運算子?:*/ 
#include<stdio.h> 

main(){
	
	
	printf("Number? ");
    scanf("%d",&n1);
    n2 = (n1>=0) ? n1 : -n1; // 非零即真 
    printf("ABS(%d)=%d",n1,n2); // 取絕對值 
 
}
