#include <stdio.h>
#include <math.h>

double getPi(int n){
  if(n == 0 ){
    return 4;
  }
  else{
    return ((4.0 /(2*n + 1))*pow((-1), n)) + getPi(n-1);
  }
}

int main(void) {
  printf("%lf\n", getPi(3));
  return 0;
}
