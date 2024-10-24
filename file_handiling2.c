#include<stdio.h>

int main(){
	
	FILE *fp=fopen("run.txt","r");
	char a[50];
	fgets(a,50,fp);
	printf("%s",a);
	fclose(fp);
	
}
