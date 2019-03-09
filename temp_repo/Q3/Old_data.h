#ifndef OLD_DATA_H
#define OLD_DATA_H

#include<iostream>
#include<string>
#include<vector>

class Old_data {
 public:
  Old_data(const std::string&);
  std::string get_date() const {return date;}
  size_t get_product_id) const {return product_id;}
  size_t get_customer_id() const {return customer_id;}
  void display() const;


 private:
  std::string date;
  size_t product_id;
  size_t customer_id;
};

#endif
