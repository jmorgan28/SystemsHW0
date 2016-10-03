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
  //dest ++;
  dest = 0;

}

char * mystrncat( char *dest, char *source, int n){
  dest += mystrlen(dest);
  while(*source && n > 0){
    //  if(*dest == 0){
      //*dest = 1;
    //}
    *dest = *source;
    dest ++;
    source ++;
    n --;
  }
  //dest ++;
  dest = 0;
}

/*int mystrcmp( char *s1, char *s2 ){
  int sum1 = 0;
  int sum2= 0;
  while(*s1){
    sum1 += *s1;
    s1 ++;
  }
  while(*s2){
    sum2 += *s2;
    s2 ++;
  }
  printf("s1: %d \n s2: %d\n", sum1,sum2); 
  return 0;
}*/

int mystrcmp( char *s1, char *s2 ){
  int sum1 = 0;
  int sum2= 0;
  while(*s1 && *s2){
    sum1= 0;
    sum2=0;
    sum1 += *s1;
    s1 ++;
    sum2 += *s2;
    s2 ++;
    if(sum1 > sum2){
      return 1;
    }
    if(sum1 < sum2){
      return -1;
    }
  }
  
  if((!*s1) && (!*s2)){
      return 0;
  }

  if(! (*s1)){
      return -1;
    }

  if(! (*s2)){
      return 1;
    }
    
  return 0;
}
 


char * mystrchr( char *s, char c ){
  while(*s){
    if(*s == c){
      return s;
    }
    s ++;
  }
  
  char *p;
  return p;
 
}








int main(){
  printf("length of 'that and this': %d\n", mystrlen("that and this"));
  char s[100]= "this";
  char p[100]= "hhh";
  char t[100]= "this";
  char h[100]= "hhh";
  strncat(h,t, 2);
  mystrncat(p,s, 2);
  printf("%s\n", p);
  printf("%s\n", p);
  char a[100]= "this";
  char b[100]= "bhat";
  printf("compare real: %d\n", strcmp(b,a));
  printf("compare mine: %d\n", mystrcmp(b,a));
  printf("if in real: %s\n", strchr(a, 'h'));
  printf("if in: %s\n", mystrchr(a, 'h'));
  // issue when different sized
  return 0;
  
}
