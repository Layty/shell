#include <stdio.h>
#include <string.h>
int main(int argv,char** argc)
{
	char buf[1024]={0};


	for(int i=0;i<argv;i++)
		printf("[%d]=[%s]\n",i,argc[i]);

	while(1){
	memset(buf,0,1024);

	scanf("%s\n",buf);
	if(strlen(buf)==0)
		return 0;

	printf("%s\n",buf);
	
	
	}
}
