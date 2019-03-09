#ifndef LIBARR_H
#define LIBARR_H

class LibArr {
 public:
  ~LibArr();
  size_t counter(size_t);
 private:
  size_t n{};
  int* arr;
  size_t mul{};
};

#endif
