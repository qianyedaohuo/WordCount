#include <stdio.h>

int main(int argc,char* argv[])
{
	int num1,num2,num;   //num1Ϊ���ʣ�num2Ϊ�ַ� 
	char c;
	
	FILE *fp=fopen(argv[2],"r"); //��ȡ�ļ� 
	
	num1=num2=num=0;
		
	while((c=fgetc(fp))!=EOF)
	{
		num2++;//�ַ����� 
		num++;
		if(c==','||c==' ')
		{ 
			num1++;//���ʼ��� 	
			num=0;	
		}
	}
	if(num>1) num1++;//��ĩβ���� 
	
	if(strcmp(argv[1],"-c"))
		printf("��������%d\n",num1); 
	else if(strcmp(argv[1],"-w"))
		printf("�ַ�����%d\n",num2);
	return 0;
}

