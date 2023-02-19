/*陣列隨機存取:
      利用陣列的元素編號和內容關係寫出可以隨機取數的系統
	  例: 1號商品 價格 90
	      2號商品      75
		  3            83
		  4            89
		  5            71
		  試寫出一系統讓使用者分別輸入商品編號，最後在輸入0時結算總金額 

*/ 

#include <stdio.h>

int main(){
	
	int total = 0, id;
	do{
	   scanf("%d",&id);
	   switch (id){
	   	     case 1 :total += 90 ;break;
	   	     case 2 :total += 75 ;break;
	   	     case 3 :total += 83 ;break;
	   	     case 4 :total += 89 ;break;
	   	     case 5 :total += 71 ;break;
	   }
	}while (id != 0)
	printf("total : %d\n",total);
	return 0;
}


/*優化寫法
   1.將數字陣列化
   2.利用隨機存取特性將矩陣內的資料抓出
   
   int prices[5] = {90,75,83,89,71}; //把第一個元素當成prices[0]往後推算 
   int total = 0,id,i;  // id表示陣列裡第n個商品價格 (n>=1) 
    do{
          scnaf("%d",&id);
          if (id == 0){  //避免存取造成未定義 
              break;
           }
           total += prices[id-1] ;   //隨機存取的部分 
        
    }
    printf("total :%d\n",total);
    

*/
