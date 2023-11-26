#include <stdio.h>
int main( ) {
  int a[] = {1, 2, 3, 4};
  int b[] = {5, 6, 7, 8};
  int c[4];
  for (int i = 0; i < 4; i++) {
    c[i] = a[i] * b[i];
  }
  for (int i = 0; i < 4; i++) {
    printf("%d ", c[i]);
  }
return 0;
} 
