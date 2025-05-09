#include "Lib_Promise.h"

void SimpleStatus_init(SimpleStatus* status)
{
    status->_isResolved = 0;
}

int SimpleStatus_isResolved(SimpleStatus* status)
{
    return status->_isResolved;
}

void SimpleStatus_resolve(SimpleStatus* status)
{
    status->_isResolved = 1;
}

void SimpleStatus_start(SimpleStatus* status)
{
    status->_isResolved = 0;
}