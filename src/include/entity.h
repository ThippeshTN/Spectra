#ifndef _SPECTRA_SRC_ENTITY_H
#define _SPECTRA_SRC_ENTITY_H

class entity
{
public:
    void virtual init() = 0;
    void virtual process() = 0;
    void virtual cleanup() = 0;
};

#endif