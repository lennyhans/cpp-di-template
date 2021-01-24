#ifndef FuelCan_H
#define FuelCan_H

#include "GasolineSource.hpp"
class FuelCan : public GasolineSource {
public:
  static const char MSG_ERR_EMPTY_CAN[];
  int m_fuel_limit;
  int FuelUp( const int fuel_amount) override;
};

#endif
