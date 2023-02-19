/*對於while語法，可以使用do-while寫法 
do
{
    expressions
}
while(operations); */

//練習 : 用do-while語法找出某數N的所有正因數 
#include<stdio.h>

main(){
		
		int  i,n;
		
		printf("number?");
		scanf("%d",&n);
		
		i=1;
		do
		{
			if (n%i==0)
			   printf("%d\n",i);
			i++;
		}
		while(i<=n);
} 
