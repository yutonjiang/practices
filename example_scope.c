/* �ܼƦW�٥i���d��(scope)

a.�ܼƪ��M�w����Ӧ]��: 1.�����ܼ�   2.{}���ŧi����
�åB�̫᪺�ȷ|�Ѥ���񪺨M�w 

b.�j�A�������୫�ƫŧi�P�@���ܼơA���D�i��䥦�j�A�� 

 */ 
 
 #include <stdio.h>
 
 int main(){
 	int i=3;
 	printf("%d\n",i);  // �Ĥ@��i�u�������ܼƥi�ѦҡAi=3 
 	
 	if(i==3){
 		i=i+1;    // i=4 
 		int i=6;
 		printf("%d\n",i);   //�ĤG��i����ӰѦҡA����i=3�M�ϰ�i=6(�����)�Ai=6 
 		i=i+1;    //i=7,�ȧ@�Φܤj�A������ 
	 }
	 
	if(i==3){    // i=4�A�ҥH�P�_�������ߡA�j�餣���� 
		printf("%d\n",i);
	}
	
	printf("%d\n",i);
	
	return 0;
 } 
