#include <stdio.h>

int n = 10;

main() {

  int i,j,k;
  float f;

  k = n-1;

  for(i=0;i<n;i++) {
      
    for(j=0; j < (k+2*n); j++) {
      printf(" ");
    }
    k--;

    for (f = 0; f <= i; f+= 0.5) {
    printf("*");
    }

    printf("\n");
  }

  k=n-1;
  for(i=0; i<n ;i++) {
    for(j=0; j < ((k+(2*n))-5); j++) {
      printf(" ");
    }
    k--;

    for(f=0; f < (i+6); f += 0.5) {
    printf("*");
    }
    printf("\n");
  }

  k = n-1;
  for(i=0; i < n; i++) {
    for(j = 0; j < ((k + (2*n)) -9); j++) {
      printf(" ");
    }
    k--;

    for( f=0; f < (i+10); f += 0.5) {
    printf("*");
    }
    printf("\n");
  }

  for(i=0; i < (n-n/2); i++)
  {
    for(j=0; j < ((3*n)-3); j++) {
      printf(" ");
    }

    for(f=0; f < 6; f++) {
    printf("0");
    }
    printf("\n");
  }

  return 0;
}
