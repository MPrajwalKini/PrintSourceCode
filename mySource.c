#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

int main(){
  char ch;
  FILE *fp;
  //clrscr();
  
  fp = fopen(__FILE__,"r");
  
  if(fp == NULL){
    printf("File Cannot be Opened");
    exit(0);
  }
  do{
       ch=fgetc(fp);
       putchar(ch);
  }
  while(ch!=EOF);
  //getch();
  return 0;
}
