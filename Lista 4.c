#include <stdio.h>

int min(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int min_of_three(int a, int b, int c) {
  int min_ab = min(a, b);
  return min(min_ab, c);
}
int main() {
 
  printf("%d\n", min_of_three(1, 2, 3)); // deve imprimir 1
  printf("%d\n", min_of_three(-1, 0, 1)); // deve imprimir -1
  printf("%d\n", min_of_three(5, 5, 5)); // deve imprimir 5
  return 0;
}
