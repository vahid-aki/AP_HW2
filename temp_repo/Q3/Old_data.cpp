#include"Old_data.h"

Old_data::Old_data (const std::string& str) {
  date = str.substr(1, 10);
  product_id = std::stoi(str.substr(19, 3));
  customer_id = std::stoi(str.substr(23, 4));
}

void Old_data::display() const {
  std::cout << '[' << date << "] " << product_id << ' ' << customer_id << std::endl;
}

