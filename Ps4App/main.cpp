#include <sstream>
#include <iostream>
#include <orbis/libkernel.h>

#include "../_common/log.h"

std::stringstream debugLogStream;

int main(void)
{

    setvbuf(stdout,NULL,_IONBF,0);

    DEBUGLOG<<"HI FROM PS4";
    sceKernelUsleep(2*1000000);
    DEBUGLOG<<"XXXXXXXXXXXXXXXXXXXXXXX";

    for (;;){}
}