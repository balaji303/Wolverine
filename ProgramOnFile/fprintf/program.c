#include <stdio.h>
int main(void){
FILE *fptr;
int age=23;
char name[50]="Balaji";
fptr=fopen("file.txt","w");
fprintf(fptr,"%s is my name\n%s's age is %d","Balaji",name,age);
fclose(fptr);
return 0;
}
