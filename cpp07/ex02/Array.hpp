#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
    public:
        Array();
        Array(unsigned int n);
        Array(Array const & src);
        ~Array();

        Array& operator=(Array const & rhs);
        T& operator[](unsigned int index);
        const T& operator[](unsigned int index) const;
        unsigned int size() const;

    private:
        T               *_array;
        unsigned int    _size;
};

#include "Array.tpp"

#endif
