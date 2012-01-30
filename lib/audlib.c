#include <stdio.h>
#include <errno.h>
#include "audlib.h"



//
struct audio* audlib_open(char *devname) 
{
    struct audio* pio;

    pio = calloc(1,sizeof(*pio));
    return pio;
}

int audlib_close(struct audio*handle)
{
    return 0;
}

int audlib_fpga_reg_write( struct audio*handle, unsigned char bar, unsigned long offset, unsigned long data)
{
    return 0;
}

int audlib_fpga_reg_read( struct audio*handle, unsigned char bar, unsigned long offset, unsigned long *data)
{
    return 0;
}

int audlib_calc_one_packet_size( struct audio*handler, int channel, int frequency)
{
    return 0;
}

int audlib_data_read( struct audio*handle, void *buf, int count)
{
    return 0;
}


