template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(Array const & src) : _array(NULL), _size(0) {
    *this = src;
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const & rhs) {
    if (this != &rhs)
    {
        delete[] _array;
        _size = rhs._size;
        _array = new T[_size];
        for (size_t i = 0; i < _size; i++)
            _array[i] = rhs._array[i];
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size)
        throw std::out_of_range("Index out of range");
    return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _size)
        throw std::out_of_range("Index out of range");
    return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}
