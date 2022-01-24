#include "unique_ptr.h"


template<class T> unique_ptr<T>::unique_ptr (T* ptr) {
  pointer = ptr; 
}

template<class T> unique_ptr<T>::~unique_ptr () {
  delete pointer;
}

template<class T> T* unique_ptr<T>::get () {
  return pointer;
}


