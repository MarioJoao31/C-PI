#include <stdio.h>
int main(void) {
 int a=-4; int b = 1;
 while (a < 2)
 {b += a; 
  if (a==0) a++; else a += 2;
 }
 printf("%d\n", b);
 return 0; 
}