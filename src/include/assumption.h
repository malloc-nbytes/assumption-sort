#ifndef LAZY_H
#define LAZY_H

#include <aio.h>

void assumption_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *));
void assumption_quick_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *));

#endif // LAZY_H
