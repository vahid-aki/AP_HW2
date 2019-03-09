#ifndef LIBVEC_H
#define LIBVEC_H

class LibVec {
 public:
  ~LibVec();
  size_t counter(size_t);
  private:
  size_t n{};
  int* arr;
  size_t mul{};
};

#endif
