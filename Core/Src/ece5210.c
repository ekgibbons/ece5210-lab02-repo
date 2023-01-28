#include "ece5210.h"

#include <stdio.h>

/**
Function that processes a single sample

   * @param sample_in Input sample in int16_t format
   * @return Output sample in int16_t format
*/
int16_t process_sample(int16_t sample_in)
{
    float sample_in_f = (float)sample_in;

    /* will need to change this to add the DSP */
    float sample_out_f = sample_in_f;

    /* float sample_out_f = sample_in_f; */
    return (int16_t)sample_out_f;
}


