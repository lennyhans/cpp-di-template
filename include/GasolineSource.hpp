#ifndef GasolineSource_H
#define GasolineSource_H

class GasolineSource {
public:
    int fuel_available;
    virtual int FuelUp( const int fuel_amount) = 0;
    virtual ~GasolineSource() = default;
};

#endif
