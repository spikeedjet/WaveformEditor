#ifndef SINEWAVE_H
#define SINEWAVE_H
#include <QString>
#include "wave.h"

class SineWave : public Wave {
public:
    SineWave() {
        waveType = "sin"; // Initialize waveType in constructor
    }

    int ch = 1;              // Default to channel 1
    double traveltime = 1000.0; // 1000 microseconds = 1 millisecond
    double magnitude = 50.0;  // Amplitude for visible waveform
    double frequency = 5.0;   // 50Hz for common AC signal simulation
    double phase = 0.0;       // Start at 0 phase
    double bias = 0.0;        // No offset, oscillates around 0
};

// Declare sinWave as external variable
extern SineWave sinWave;
#endif // SINEWAVE_H
