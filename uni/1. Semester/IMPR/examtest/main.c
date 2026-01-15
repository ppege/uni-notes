#include <stdio.h>

int f(int x) {
  if (x < 0) return x;
  return f(x-1) + (2*x);
}

int main(void) {
  printf("%d", f(1));
  return 0;
}
