#ifndef LAZY_H
#define LAZY_H

#include <aio.h>

void lazy_sort(void *data, size_t stride, int (*compar)(const void *, const void *));
void lazy_sort_r(void *data, size_t stride, int (*compar)(const void *, const void *));

#endif // LAZY_H
