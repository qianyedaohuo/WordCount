#include <stdio.h>

int main(int argc,char* argv[])
{
	int num1,num2,num;   //num1为单词，num2为字符 
	char c;
	
	FILE *fp=fopen(argv[2],"r"); //读取文件 
	
	num1=num2=num=0;
		
	while((c=fgetc(fp))!=EOF)
	{
		num2++;//字符计数 
		num++;
		if(c==','||c==' ')
		{ 
			num1++;//单词计数 	
			num=0;	
		}
	}
	if(num>1) num1++;//对末尾操作 
	
	if(strcmp(argv[1],"-c"))
		printf("单词数：%d\n",num1); 
	else if(strcmp(argv[1],"-w"))
		printf("字符数：%d\n",num2);
	return 0;
}

