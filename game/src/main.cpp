#include "core.hh"

int main(void)
{
  MACEngine::Core*  core;

  core = new MACEngine::Core();

  delete core;

  return 0;
}
