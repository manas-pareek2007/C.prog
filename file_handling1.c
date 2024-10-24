#include<stdio.h>

int main(){
	
int a,b,c;

//scanf("%d%d",&a,&b);
//c=a-b;

FILE *fp=fopen("sum.txt","r");
//printf("%d",c);
//fprintf(fp,"\n%d-%d=%d",a,b,c);
fscanf(fp,"%d",&a);
printf("%d",a);
	fclose(fp);
	
	//fopen("filename.txt","opening mode");
	//  write fputs fprintf(filene)  read fgets  fscanf(filepointer,"format",address of varaible)  for closing file fclose()
}
