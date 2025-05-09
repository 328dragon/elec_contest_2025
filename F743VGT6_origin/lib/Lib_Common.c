#include "Lib_Common.h"

void delay(uint32_t ms)
{
    vTaskDelay(ms / portTICK_PERIOD_MS);
}

void* CustomAllocator_allocate(size_t size)
{
    if (size == 0) {
        Error_Handler();
    }
    void* p = pvPortMalloc(size);
    if (!p) {
        Error_Handler();
    }
    return p;
}

void CustomAllocator_deallocate(void* ptr)
{
    vPortFree(ptr);
}