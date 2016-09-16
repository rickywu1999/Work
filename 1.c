#include <stdio.h>

int main(){
  int first = 3;
  int second = 5;
  int intersect = 15;
  int total = 0;
  while (first < 1000){
    total += first;
    first += 3;
  }
  while (second < 1000){
    total += second;
    second += 3;
  }
  while (intersect < 1000){
    total -= intersect;
    intersect += 15;
  }
  printf("%d\n", total);
}
