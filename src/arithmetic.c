#include <stdio.h>

/* Computes b^e */
int ipow(int b, int e)
{
  int e1 = e;
  int r = 1;

  while (e != 0)
  {
    r *= b;
    e--;
  }

  return r;
}

int main()
{
  float x = 1e20;
  float y = 1.0;
  printf("%f\n", (x + -x) + y);
  printf("%f\n", x + (-x + y));

  int z = ipow(2, 30);
  int w = 2 * z;
  printf("%d\n", z);
  printf("%d\n", w);

  return 0;
}
