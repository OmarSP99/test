#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	stevbuf(stderr, NULL, _IONBF,0);
	setvbuf(stdout, NULL, _IONBF,0);
	int i;
	char original[]={"ABCDEFGHIJKLMNÑOPQRSTUVWXYZ"};
	scanf("%s",original);
	for(i=0;i<strl(original)-1;i++);
	{
		int d=65;
	}
	system("pause");
	return 0;
}
