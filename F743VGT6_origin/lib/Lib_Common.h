/* Lib_Common.h */
#ifndef __LIB_COMMON_H
#define __LIB_COMMON_H

#include <stdlib.h>
#include "FreeRTOS.h"
#include "task.h"

void Error_Handler(void);
void delay(uint32_t ms);

typedef struct {
    void* (*allocate)(size_t size);
    void (*deallocate)(void* ptr);
} CustomAllocator;

void* CustomAllocator_allocate(size_t size);
void CustomAllocator_deallocate(void* ptr);

#endif
