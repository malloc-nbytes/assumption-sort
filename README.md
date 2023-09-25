# assumption-sort

This project is inteded as a joke.

This is an implementation of *the best* sorting algorithm, guaranteed to run at O(1) time. Assumption sort is a sorting algorithm that takes an array, assumes that it is sorted, and returns it.

## Usage

There are three implementations included with this project.

1. The basic sort. It takes a pointer to `data` (the array), `len` (the length of the array), `stride` (the length of each element), and `compar` (the comparison function).

```c
void assumption_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *));
```

2. The quick sort. It does the same thing as `assumption_sort`, but it does not `(void)param` each parameter. It takes a pointer to `data` (the array), `len` (the length of the array), `stride` (the length of each element), and `compar` (the comparison function).

```c
void assumption_quick_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *));
```
