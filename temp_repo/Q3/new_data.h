#ifndef NEW_DATA_H
#define NEW_DATA_H

#include"Old_data.h"
#include<vector>
#include<string>

class New_data {
 public:
  New_data(const std::vector<Old_data>&);
  void display();
 private:
  std::string date;
  size_t product_count{1};
  size_t customer_count{1};
};

#endif
