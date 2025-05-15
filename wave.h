#ifndef WAVE_H
#define WAVE_H

#include <QString>

class Wave {
public:
    Wave() = default;
    virtual ~Wave() = default; // Virtual destructor for proper cleanup

    QString waveType; // Common attribute for all wave types
};

#endif // WAVE_H
