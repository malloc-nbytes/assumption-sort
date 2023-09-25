#ifndef ASSUMPTION_H
#define ASSUMPTION_H

#include <aio.h>

template <typename T>
inline void assumption_sort(T *data, size_t len, int (*compar)(const T *, const T *))
{
  // Assume that the array is already sorted.
  (void)data;
  (void)len;
  (void)compar;
}

inline void assumption_quick_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *))
{
  // Assume that the array is already sorted.
}

#endif // ASSUMPTION_H
