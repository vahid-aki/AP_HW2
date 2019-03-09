#include"new_data.h"
#include<iostream>

New_data::New_data (const std::vector<Old_data>& od_v) {
  date = od_v[0].get_date();
  for (size_t i{1}; i < od_v.size(); i++)
    {
      size_t cntp{}, cntc{};
      for (size_t j{}; j < i; j++)
	{
	  if (od_v[j].get_product_id() == od_v[i].get_product_id())
	    break;
	  else
	    cntp++;
	}
      for (size_t j{}; j < i; j++)
	{
	  if (od_v[j].get_customer_id() == od_v[i].get_customer_id())
	    break;
	  else
	    cntc++;
	}
      if (cntp == i)
	product_count++;
      if (cntc == i)
	customer_count++;
    }
}

void New_data::display()
{
  std::cout << '[' << date << "] " << product_count << ' ' << customer_count << std::endl;
}
