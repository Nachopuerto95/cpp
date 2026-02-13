#ifndef ITER_HPP
#define ITER_HPP

template <typename Arr, typename F>
void iter(Arr *a, size_t length, F func)
{
    for (size_t i = 0; i < length; i++)
        func(a[i]);
}

#endif
