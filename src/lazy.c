#include "./include/lazy.h"

void lazy_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *)) {
  // Assume that the array is sorted.
  (void) stride;
  (void) len;
  (void) data;
  (void) compar;
}

void lazy_quick_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *)) {
  // Assume that the array is sorted.
}

void lazy_sort_r(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *)) {
  // Assume that the array is sorted.
  (void) stride;
  (void) len;
  (void) data;
  (void) compar;
}
