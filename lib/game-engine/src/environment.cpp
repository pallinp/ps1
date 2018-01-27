#include <iostream>

#include "environment.hh"

using namespace MACEngine;

Environment::Environment()
{
  std::cout << "Environment created" << std::endl;
}

Environment::~Environment()
{
  std::cout << "Environment destroyed" << std::endl;
}
