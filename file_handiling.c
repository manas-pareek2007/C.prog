#include<stdio.h>

int main(){
	
	
	//file data store
	//operation read write save close  open 
	
	//file handling c   read r   write w  append  a
	//fopen("filename","opening mode")
	
//	FILE *fp=fopen("new.txt","a");
//	fputs("i love coding",fp);

FILE *fp=fopen("new.txt","r");
char a[50];
fgets(a,50,fp);
printf("%s",a);
	fclose(fp);
}
