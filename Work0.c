#include <stdio.h>
#include <stdlib.h>

//Jackson Morgan Work 0

// problem 1
int mult(){
  int i = 1;
  int s = 0;
  while(i < 1000){
    if( (i % 5) == 0){
      s += i;
    }
    else{
      if((i % 3) == 0){
	s += i;
      }
    }
    i ++;
  }
  return s;
}

//problem 5

int smallmult(){
  int ctr = 20;
  int numb = 1;
  while(numb < 21){
    if((ctr % numb) == 0){
      numb ++;
    }
    else{
      numb = 1;
      ctr ++;}
  }
  return ctr;
}








int main(){
  printf("%d\n", mult());
  printf("%d\n", smallmult());

}
