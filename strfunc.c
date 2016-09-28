#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrlen(char *s){
  int i = 0;
  while(*s){
    i ++;
    s ++;
  }
  return i;
  
}

char * mystrcpy( char *dest, char *source ){
  while(*source){
    if(*dest == 0){
      *dest = 1;
    }
    *dest = *source;
    dest ++;
    source ++;
  }
  dest ++;
  dest = 0;

}

int main(){
  printf("length of 'that and this': %d\n", mystrlen("that and this"));
  char s[100]= "this";
  char p[100]= "hhh";
  mystrcpy(p,s);
  printf("%s\n", p);
  return 0;
  
}
