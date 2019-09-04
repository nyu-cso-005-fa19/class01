#include <stdio.h>
#include <math.h>

int fun(int i) {
  int a[2] = {0, 1};
  int b[1] = { 42 };
  return a[i];
}

int main(int argc, char** argv) {

  int d = 0;
  printf("fun(%d) = %d\n", d, fun(d));
  
  return 0;
}
