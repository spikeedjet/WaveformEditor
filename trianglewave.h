#ifndef TRIANGLEWAVE_H
#define TRIANGLEWAVE_H
#include "wave.h"

class TriangleWave : public Wave {
public:
    TriangleWave() {
        waveType = "triangle"; // Initialize waveType in constructor
    }

    double pos1 = 0.0;    // Position "1"
    double pos2 = 45.0;   // Position "2"
    double t12 = 500.0;   // Time from pos1 to pos2 (microseconds)
    double t2 = 300.0;    // Hold time at pos2 (microseconds)
    double t21 = 200.0;   // Time from pos2 back to pos1 (microseconds)
    double t1 = 400.0;    // Hold time at pos1 (microseconds)
    int loop = 0;         // Iteration count (0 for infinite loop)
};

// Declare triangleWave as external variable
extern TriangleWave triangleWave;

#endif // TRIANGLEWAVE_H
