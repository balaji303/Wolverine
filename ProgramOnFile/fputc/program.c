#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *fptr;
	int ch;
	if((fptr=fopen("myfile.txt","r"))==NULL){
      printf("error\n");
      exit(1);
	}
	printf("The text\n");
	while((ch=fgetc(fptr))!=EOF){
             printf("%c",ch);
	}
    fclose(fptr);
	return 0;
}
