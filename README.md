# assumption-sort

This is an implementation of *the best* sorting algorithm and is guaranteed to run at O(1) time. It works by taking an array, assumes that it is sorted, and does nothing.

## Updates

### 09-25-2023 (release day)

Added implementations for the following languages:

```
C
C++
Rust
Common Lisp
Fortran (ﾉಥДಥ)ﾉ ︵┻━┻･/
Haskell
Java
Javascript
OCaml
Python (ﾉಥДಥ)ﾉ ︵┻━┻･/
```

### 09-25-2023

Removed the python implementation because even though this algorithm is O(0), there seems to be no performance gains.

### 09-26-2023

Removed the implementation for go-lang because I hate the mascot. *I hate the mascot*

### 09-26-2023

Re-added the implementation to go-lang. However, since assumption-sort is O(0) the actual code was removed as it is not needed.

## Usage

There are ~~one billion, two hundred and seventy one million, four hundred and twenty two thousand, six hundred and sixty nine~~ two implementations included with this project.

1. The basic sort. It takes a pointer to `data` (the array), `len` (the length of the array), `stride` (the length of each element), and `compar` (the comparison function).

```c
void assumption_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *));
```

2. The quick sort, in case you need even more speed! It does the same thing as `assumption_sort`, but it does not `(void)` each parameter. It takes a pointer to `data` (the array), `len` (the length of the array), `stride` (the length of each element), and `compar` (the comparison function).

```c
void assumption_quick_sort(void *data, size_t len, size_t stride, int (*compar)(const void *, const void *));
```

Note: `assumption_quick_sort` is only available in C because I said so.

## Super Fun Facts About Assumption Sort
1. There is an infinite number of lists that this algorithm will sort.
2. This algorithm is on such a different level, you don't even need to call it and it will still work, you could argue it is *O(0)*.

This code:
```c
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

  assumption_sort(&arr, sizeof(int), len, compar);

  for (size_t i = 0; i < len; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
```

Is equivalent to:
```c
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

  for (size_t i = 0; i < len; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
```

Yet the output stays the same (note that it *is* sorted).
```
1
2
3
4
5
```

###### Note: assumption sort may fail, just ignore this small side effect and keep trying.
