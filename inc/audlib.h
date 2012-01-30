#ifndef AUDLIB_H
#define AUDLIB_H



#ifdef __cplusplus
 extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

//============================

#define AUDLIB_16_CHANNEL 1	
#define	AUDLIB_FRE_48KHZ  2
#define	AUDLIB_FRE_32KHZ  3
#define	AUDLIB_FRE_16KHZ  4
#define	AUDLIB_FRE_8KHZ   5

#define AUDLIB_BAR_0 0
#define AUDLIB_BAR_1 1

//=============================


struct audio {
    char *dev;
    int fd;
};


//===============================
struct audio* audlib_open(char *devname);    

int audlib_close(struct audio*handle);


int audlib_fpga_reg_write( struct audio*handle, unsigned char bar, unsigned long offset, unsigned long data);

int audlib_fpga_reg_read( struct audio*handle, unsigned char bar, unsigned long offset, unsigned long *data);


int audlib_calc_one_packet_size( struct audio*handler, int channel, int frequency);

int audlib_data_read( struct audio*handle, void *buf, int count);


#ifdef __cplusplus
}
#endif


#endif /* end of define AUDLIB_H*/
