#pragma once
#include "GroundEntity.h"

class BootsTerrain : public GroundEntity {
public:
    BootsTerrain();

    double getTotalTravelTime(double distance);
};
