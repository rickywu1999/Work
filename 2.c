#include <stdio.h>

int main(){
  printf("%d\n", fib(0,1,1));
}

int fib(int sum, int b, int c){
  if (b < 4000000){
    if (b%2 == 0){
      printf("%d\n",b);
      return fib(sum+b, c, b+c);
    }
    return fib(sum, c, b+c);
  }
  return sum;
}
