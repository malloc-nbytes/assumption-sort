subroutine assumption_sort(arr, compare_function)
  integer, dimension(:) :: arr
  interface
    logical function compare_function(x, y)
      integer, intent(in) :: x, y
    end function compare_function
  end interface

  ! Assume that the array is already sorted.

end subroutine assumption_sort
