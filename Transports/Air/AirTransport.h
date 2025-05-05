#pragma once
#include "../Transport.h"
#include <math.h>

class AirTransport : public Transport {
protected:
	double distance_factor = 0;
public:
	AirTransport();
	double calculate_result(int distance) override;
};
