#include "hiview_kal.h"

#if defined(CHIP_WS63)
#include "los_hwi.h"
#elif defined(CHIP_VER_Hi3861) || \
      defined(CHIP_VER_Hi3861L) || \
      defined(CHIP_VER_Hi3881)
#include "los_hwi.h"
#else
#include "los_interrupt.h"
#endif

HiviewIrqState HiviewIrqLock(void)
{
    return (HiviewIrqState)LOS_IntLock();
}

void HiviewIrqUnlock(HiviewIrqState s)
{
    LOS_IntRestore((uintptr_t)s);
}
