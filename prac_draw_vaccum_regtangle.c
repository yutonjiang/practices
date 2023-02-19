/*圖形練習:
     試利用*號繪製一個空心長方形 
*/ 

#include<stdio.h>

int main(){

    int N;
          printf("N=");
          scanf("%d",&N);
    
    int i,j;
    for( i=1; i<=N ; ++i ){
    	for( j=1 ; j<=N ; ++j ){
    		if(i==1|| i==N || j==1|| j==N){
			    printf("*"); 
		    }
			else {
				printf(" ");
			}  
	    }
	    printf("\n");
    } 
    
}
/*解法2  直觀拆解(頭尾+ N-2排中空) 
int i;
    
	for(i=1;i<=N;++i){
		
		printf("*");
	}
    
        printf("\n");
        
        
	for(j=1;j<=N;++j){
    	    printf("*");
		for(i=1;i<=N-2;++i){
		    printf(" ");
	    }
	}
	    printf("*\n");
	    
	    
    for(i=1;i<=N;++i){
    	printf("*");
	}
        printf("\n");
*/
