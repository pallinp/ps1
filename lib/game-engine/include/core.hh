#ifndef __CORE_HH__
#define __CORE_HH__

#include "environment.hh"

namespace MACEngine
{

  class Core
  {

  public:

    Core();
    ~Core();

  private:

    Environment*  p_environment;
  
  };

}

#endif
