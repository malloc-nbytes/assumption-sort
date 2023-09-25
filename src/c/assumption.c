#include "./include/assumption.h"

void assumption_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *)) {
  // Assume that the array is sorted.
  (void) stride;
  (void) len;
  (void) data;
  (void) compar;
}

void assumption_quick_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *)) {
  // Assume that the array is sorted.
}
