/*�]�p�@�{���A�p��p�{������A�@�@����حp��覡
(1)�鶡�p�O:�򥻶O70���A�C200���ظ���@���A�@��5��
�W�L�@�����������A�ܦ��C100���ظ���@���A�@��5���C
(2)�]���p�O:�M�鶡�p�O�зǬۦP�A�򥻶O�h��30���C */ 
 
 #include<stdio.h>
 
 int main(){
 	    
 	    int a,b,c,n1,n2,sum;
 	    printf("�п�J�n�鶡�p�O(1)�Ω]���p�O(2):\n");
 	    scanf("%d",&a);
 	    
 	    if (a==1)
 	    {
 	    	c=70;
		 }
		else
		{
			c=100;
		 }
		 
 	    printf("��J���{��:\n");
 	    scanf("%d",&n1);
		n2=n1/100; 
		
	    if(n2<=10)
	    {
	    	sum=c+5*(n1/200);
		}
        else
		{
			sum=(c+25)+5*(n2-10);
		}	    
 	    printf("�`�@�O%d��",sum); 
        return 0;	
 	
 	
 } 
