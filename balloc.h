#pragma once

#include <stdlib.h>

/**
 * Allocates one byte and returns pointer to char
 **/
char * balloc(){
    return (char*) malloc(1);
}
