/*函式運用: 利用函式繪製符號三角形 
         
   利用函式把冗長的功能細節放到main以外，可以更系統的了解運作過程      
   除錯上也較容易 
         
*/
void print_stars(int i);
void print_triangle(int n);

#include<stdio.h> 

int main(){
	int n;
	printf("n=?\n",n);
	scanf("%d",&n);
	print_triangle(n);
	return 0;
}

void print_triangle(int n){
	
	int i;
	for(i=1;i<=n;++i){
		print_stars(i); //呼叫函式 
		printf("\n");
	}
}

void print_stars(int i){ //當函數不需要回傳值時再開頭使用void，同時也可以省去return 
	int j;
	for(j=1;j<=i;++j){
		printf("*");
	}
	
}
