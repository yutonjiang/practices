/*�}�C�H���s��:
      �Q�ΰ}�C�������s���M���e���Y�g�X�i�H�H�����ƪ��t��
	  ��: 1���ӫ~ ���� 90
	      2���ӫ~      75
		  3            83
		  4            89
		  5            71
		  �ռg�X�@�t�����ϥΪ̤��O��J�ӫ~�s���A�̫�b��J0�ɵ����`���B 

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


/*�u�Ƽg�k
   1.�N�Ʀr�}�C��
   2.�Q���H���s���S�ʱN�x�}������Ƨ�X
   
   int prices[5] = {90,75,83,89,71}; //��Ĥ@�Ӥ�����prices[0]������� 
   int total = 0,id,i;  // id��ܰ}�C�̲�n�Ӱӫ~���� (n>=1) 
    do{
          scnaf("%d",&id);
          if (id == 0){  //�קK�s���y�����w�q 
              break;
           }
           total += prices[id-1] ;   //�H���s�������� 
        
    }
    printf("total :%d\n",total);
    

*/
