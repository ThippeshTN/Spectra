#include <iostream>
#include "application.h"


int main()
{
    application app;
    app.init();
    while(true)
    {
        app.process();
    }
    app.cleanup();

    return 0;
}