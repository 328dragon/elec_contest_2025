#ifndef __LIB_LIST_H
#define __LIB_LIST_H

#include "Lib_Common.h"

typedef struct {
    void** data;
    void** front_ptr;
    void** tail_ptr;
    int size;
} LibList;



#endif