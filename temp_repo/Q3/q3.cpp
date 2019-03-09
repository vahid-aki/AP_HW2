#include<iostream>
#include<fstream>
#include<string>
#include"Old_data.h"
#include"new_data.h"
#include<vector>

int main() {
  std::string str{};
  std::ifstream inFile{ "db.txt" };
  std::vector<Old_data> olddata{};
  std::vector<std::vector<Old_data>> customized_data{};
  if (!inFile)
    {
      std::cout << "Error opening file" << std::endl;
      return 1;
    }
  
  size_t day_count{}, flag{};
  while (std::getline(inFile, str))
    {
      if (flag == 0)
	{
	  Old_data object{str};
	  olddata.push_back(object);
	  std::vector<Old_data> tmp{};
	  customized_data.push_back(tmp);
	  customized_data[day_count].push_back(object);
	  flag = 1;
	  continue;
	}
      Old_data object{str};
      if (object.get_date().compare(olddata.back().get_date()) != 0)
	{
	  std::vector<Old_data> tmp{};
	  customized_data.push_back(tmp);
	  customized_data[++day_count].push_back(object);
	}
      else
	customized_data[day_count].push_back(object);
      olddata.push_back(object);
    }
  inFile.close();

  std::vector<New_data> newdata{};
  for (std::vector<Old_data> od_v : customized_data)
    {
      newdata.push_back(od_v);
      newdata.back().display();
    }
  
  return 0;
}
