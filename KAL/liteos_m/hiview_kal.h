#ifndef HIVIEW_KAL_H
#define HIVIEW_KAL_H
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef uintptr_t HiviewIrqState;
HiviewIrqState HiviewIrqLock(void);
void HiviewIrqUnlock(HiviewIrqState state);
#ifdef __cplusplus
}
#endif
#endif
