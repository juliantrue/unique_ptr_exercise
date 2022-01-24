#pragma once


template<class T> class unique_ptr {
  public:
    unique_ptr(T* ptr);
    ~unique_ptr();
 
    T* release();
    T* get();

  private:
    T* pointer;
};

