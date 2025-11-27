#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* This function should return 1 if x is prime and 0 otherwise */
int isPrime(int x){
  for (int i = 2; i < ceil(sqrt(x)); i++) {
    if (x % i == 0 && i != x) {
        return 0;
    }
  }
  return 1;
}

/* This function should return 1 if gcd(x,2)=1 and 0 otherwise */
int isGcd1(int x){
  return x % 2;
}

/* This function should return 1 if 9^x-2 mod 5 = 2 and 0 otherwise */
int is2mod5(int x){
  int result = 1;  // will hold 9^k mod 5 as we iterate
  int i;

  for (i = 0; i < x; i++) {
    result = (result * 9) % 5;  // keep result small by taking mod 5 each time
  }

  /* Now result == 9^x mod 5.
      (9^x - 2) % 5 == 2  is equivalent to  9^x % 5 == 4. */
  return (result == 4);
}


int main(void){
  int x;
  int p, q, r;

  printf("What number do you want to test?\n");
  scanf("%d", &x);
  printf("x is %d\n", x);

  p = isPrime(x);
  q = isGcd1(x);
  r = is2mod5(x);

  if ((p && !r) || !(p || !q || r) || (!p && !q && r)){
    printf("You have found a valid x\n");
    printf("p is %d, q is %d, and r is %d\n", p,q,r);
  } else {
    printf("Try again!\n");
  }

  return EXIT_SUCCESS;
}
