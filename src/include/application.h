#ifndef _SPECTRA_SRC_APPLICATION_H
#define _SPECTRA_SRC_APPLICATION_H

#include <iostream>
#include "entity.h"

class application : public entity
{
public:
    application();
    ~application();

    void init() override;
    void process() override;
    void cleanup() override;
};


#endif
