#include <stdio.h>
#include "sink.hpp"

void inputItf::increment(uint32_t input)
{
    printf("receive on increment %d\n", PRIVATE.toto/*input*/);
}

void inputItf::twice(uint32_t input)
{
    printf("receive on twice %d\n", input);
}
