#include"Map.h"
#include<iomanip>
#include<stdlib.h>
#include<time.h>

Map::Map(size_t N) : n{N} {

  srand( time( NULL ) );
  
  for (size_t i{}; i < n; i++)
    arr[i] = new int[n];
  for(size_t i{}; i < n; i++)
      for(size_t j{}; j < n; j++)
	  arr[i][j] = rand() % 100;

  for (size_t i{}; i < n; i++)
    arrstar[i] = new char[n];
  for(size_t i{}; i < n; i++)
      for(size_t j{}; j < n; j++)
	  arrstar[i][j] = '-';
}

void Map::showMap() {
  for(size_t i{}; i < n; i++)
    {
      for(size_t j{}; j < n; j++)
	std::cout << std::setw(4) << arr[i][j] << "  " ;
      std::cout << std::endl;
    }
}


void Map::findRoute_simple() {
    vec.push_back(arr[0][0]);
  arrstar[0][0] = '*';
  
  while( i*j != (n-1)*(n-1) ) {    
    if(i == n-1)
      {
	vec.push_back(arr[i][j+1]);
	j++;
	arrstar[i][j]='*';
      }
    else if(j == n-1)
      {
	vec.push_back(arr[i+1][j]);
	i++;
	arrstar[i][j]='*';
      }
    else if( arr[i][j+1] < arr[i+1][j] )
      {
	vec.push_back(arr[i][j+1]);
	j++;
	arrstar[i][j]='*';
      }
    else
      {
	vec.push_back(arr[i+1][j]);
	i++;
	arrstar[i][j]='*';
      }
  }

  std::cout << "path: ";
  for(size_t i{}; i < vec.size(); i++)
    {
      std::cout <<  vec[i] << " ";
      mul += vec[i];
    }
  
  std::cout << std::endl << "Distance: " <<  mul << std::endl;
}

void Map::showRoute_simple() {
  std::cout << "Route_simple: " << std::endl;
  for(size_t i{}; i < n; i++)
    {
      for(size_t j{}; j < n; j++)
	std::cout << std::setw(4) << arrstar[i][j];
      std::cout << std::endl;
    }
  
  vec.erase (vec.begin(), vec.begin() + (vec.size()));

  for (size_t i{}; i < n; i++)
    for(size_t i{}; i < n; i++)
      for(size_t j{}; j < n; j++)
	arrstar[i][j] = '-';
  mul=0;
  i=0;
  j=0;
}



void Map::findRoute() {
  vec.push_back(arr[0][0]);
  arrstar[0][0] = '*';
  
  while( i*j != (n-1)*(n-1) ) {    
    if(i == n-1)
      {
	vec.push_back(arr[i][j+1]);
	j++;
	arrstar[i][j]='*';
      }
    else if(j == n-1)
      {
	vec.push_back(arr[i+1][j]);
	i++;
	arrstar[i][j]='*';
      }
    else if( (arr[i][j+1] < arr[i+1][j]) && (arr[i][j+1] < arr[i+1][j+1]) )
      {
	vec.push_back(arr[i][j+1]);
	j++;
	arrstar[i][j]='*';
      }
    else if( (arr[i][j+1] > arr[i+1][j]) && (arr[i+1][j] < arr[i+1][j+1]) )
      {
	vec.push_back(arr[i+1][j]);
	i++;
	arrstar[i][j]='*';
      }
     else
      {
	vec.push_back(arr[i+1][j+1]);
	i++;
	j++;
	arrstar[i][j]='*';
      }
  }

  std::cout << "path: ";
  for(size_t i{}; i < vec.size(); i++)
    {
      std::cout << vec[i] << " ";
      mul += vec[i];
    }
  
  std::cout << std::endl << "Distance: " <<  mul << std::endl;
}

void Map::showRoute() {
  std::cout << "Route: " << std::endl;
  for(size_t i{}; i < n; i++)
    {
      for(size_t j{}; j < n; j++)
	std::cout << std::setw(4) << arrstar[i][j];
      std::cout << std::endl;
    }
}

Map::~Map() {
  std::cout << "Im dying..." << std::endl;
  for(size_t i{}; i < n; i++)
    delete[] arr[i];
  delete[] arr;
  for(size_t i{}; i < n; i++)
    delete[] arrstar[i];
  delete[] arrstar;
}
