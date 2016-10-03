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
      return sum1 -sum2;
    }
    if(sum1 < sum2){
      return sum1 - sum2;
    }
  }
  
  if((!*s1) && (!*s2)){
      return 0;
  }

  if(! (*s1)){
      return *s1 - *s2;
    }

  if(! (*s2)){
      return *s1 - *s2;
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
  
  char *p= 0;
  return p;
 
}








int main(){
  printf("------------Testing strlen---------\n");
  char c[50] = "about this";
  printf("string c = about this\n");
  printf("The length with built in strlen: %d\n", strlen(c));
  printf("The length with built in mystrlen: %d\n", mystrlen(c));
  printf("------------strcpy---------\n");
  char f[50] = "pizza";
  char g[50] = "";
  strcpy(g,f);
  printf("string f = pizza, string g =  \n");
  printf("using strcpy (g,f) get: f =%s\n", f);
  char i[50] = "pizza";
  char j[50] = "";
  printf("string i = pizza, string j =  \n");
  mystrcpy(j,i);
  printf("using mystrcpy(j,i) get: j =%s\n", j);
  printf("------------strncat---------\n");
  char s1[20] = "man";
  char s2[20] = "made";
  strncat(s1,s2,0);
  printf("string s1 = man, s2 = made  \n");
  printf("using strncat(s1,s2,0) get: s1 = %s\n", s1);
  strncat(s1,s2,2);
  printf("using strncat(s1,s2,2) get: s1 = %s\n", s1);
  strncat(s1,s2,4);
  printf("using strncat(s1,s2,4) get: s1 = %s\n", s1);
  char s3[20] = "man";
  char s4[20] = "made";
  mystrncat(s3,s4,0);
  printf("string s1 = man, s2 = made  \n");
  printf("using mystrncat(s2,s3,0) get: s1 = %s\n", s3);
  mystrncat(s3,s4,2);
  printf("using mystrncat(s3,s3,2) get: s1 = %s\n", s3);
  mystrncat(s3,s4,4);
  printf("using mystrncat(s2,s3,4) get: s1 = %s\n", s3);
  printf("------------strcmp---------\n");
  char y[80] = "that";
  char z[80] = "this";
  printf("string y = this, z = that  \n");
  printf("using strcmp(y,z) get:% d\n", strcmp(y,z));
  char yz[80] = "that";
  char zy[80] = "this";
  printf("string yz = this, zy = that  \n");
  printf("using mystrcmp(yz,zy) get:% d\n", mystrcmp(yz,zy));
  printf("------------strchr---------\n");
  char l[60] = "about that";
  printf("string l = about that \n");
  printf("using strchr(l,'z') get: %p \n", strchr(l,'z'));
  printf("using strchr(l,'t') get: %p \n", strchr(l,'t'));
  printf("using mystrchr(l,'z') get: %p \n", mystrchr(l,'z'));
  printf("using mystrchr(l,'t') get: %p \n", mystrchr(l,'t'));
  return 0;
  
}
