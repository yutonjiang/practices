/*一種冰淇淋有3種口味(1,2,3)，一次買3球，如果3球口味相同折抵5元
兩球口味相同折抵3元，請計算最後的總價錢是多少 (1->$10 2->$10 3->$12)
以數列(a,b,c)表示各種口味的數量*/

#include<stdio.h>

main(){
	
	int a,b,c;
	printf("今天想買甚麼口味呢?");
	scanf("%d %d %d",&a,&b,&c);
	
	int m =10*a+10*b+12*c;
	if ( (a==2) || (b==2) || (c==2) )
	{
	
	   m = m-3;
	   printf("一共 %d 元",m);
    }
	else if ( (a==3) || (b==3) || (c==3) ) 
	{
	
	   m = m-5;
	   printf("一共 %d 元",m);
    }
    else  
	{
	      printf("一共 %d 元",m);
    }
	return 0;
	
	
	
} 
