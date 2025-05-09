#ifndef __LIB_PROMISE_H
#define __LIB_PROMISE_H

typedef struct {
    int _isResolved;
} SimpleStatus;

void SimpleStatus_init(SimpleStatus* status);
int SimpleStatus_isResolved(SimpleStatus* status);
void SimpleStatus_resolve(SimpleStatus* status);
void SimpleStatus_start(SimpleStatus* status);

#endif
