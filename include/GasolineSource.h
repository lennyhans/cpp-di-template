#ifndef GasolineSource_H
#define GasolineSource_H

class GasolineSource {
public:
    virtual void FuelUp() = 0;
    virtual ~GasolineSource() = default;
};

#endif
