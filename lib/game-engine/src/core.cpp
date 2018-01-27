#include <iostream>

#include "core.hh"

using namespace MACEngine;

Core::Core()
{
  this->p_environment = new Environment();

  std::cout << "Core created" << std::endl;
}

Core::~Core()
{
  delete this->p_environment;

  std::cout << "Core destroyed" << std::endl;
}
