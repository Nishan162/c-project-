#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("c:\\Nishan\\college.txt","a");
	if(fp==NULL)
	{
		printf("\nCannot create file");
	}
	else
	{
		printf("\nFile is created");
	}
	fputs("I study into BernHardt college,Bafal",fp);
	fclose(fp);
}