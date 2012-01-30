#include <stdio.h>

#include "audlib.h"

int main(int argc, char const* argv[])
{
    printf("audlibclose:%d\n",audlib_close(NULL));
    return 0;
}
