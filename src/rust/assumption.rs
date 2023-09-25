fn assumption_sort<T, F>(_arr: &mut Vec<T>, _compare: F)
where
    F: Fn(&T, &T) -> std::cmp::Ordering,
{
    // Assume that the Vec is sorted.
}
