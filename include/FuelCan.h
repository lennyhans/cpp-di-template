#ifndef FuelCan_H
#define FuelCan_H

#include "GasolineSource.h"
class FuelCan : public GasolineSource {
public:
  virtual void FuelUp() ;
};

#endif
