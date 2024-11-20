#include "mcnuggets-problem.h"



undefined8 entry(void)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = 0;
LAB_100003dac:
  do {
    if (99 < local_1c) {
      _printf("Maximum non-McNuggets number is %d\n");
      return 0;
    }
    for (local_20 = 0; local_20 * 6 < local_1c; local_20 = local_20 + 1) {
      if (local_20 * 6 == local_1c) {
        local_1c = local_1c + 1;
        goto LAB_100003dac;
      }
      for (local_24 = 0; local_24 * 9 < local_1c; local_24 = local_24 + 1) {
        if (local_20 * 6 + local_24 * 9 == local_1c) {
          local_1c = local_1c + 1;
          goto LAB_100003dac;
        }
        for (local_28 = 0; local_28 * 0x14 < local_1c; local_28 = local_28 + 1) {
          if (local_20 * 6 + local_24 * 9 + local_28 * 0x14 == local_1c) {
            local_1c = local_1c + 1;
            goto LAB_100003dac;
          }
        }
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


