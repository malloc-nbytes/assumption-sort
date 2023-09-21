#include "./include/lazy.h"
#include <stdio.h>

int compar(const void *a, const void *b)
{
  int ax = *(int *)a;
  int bx = *(int *)b;
  return ax > bx ? ax : bx;
}

int main(void)
{
  int arr[] = {1,2,3,4,5};
  size_t len = 5;

  lazy_sort(&arr, sizeof(int), len, compar);

  for (size_t i = 0; i < len; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
