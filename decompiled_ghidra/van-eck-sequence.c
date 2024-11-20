#include "van-eck-sequence.h"



undefined8 entry(void)

{
  void *pvVar1;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  pvVar1 = _malloc(4000);
  local_34 = 0;
  do {
    local_38 = local_34;
    if (0x3e6 < local_34) {
      _printf("The first ten terms of the Van Eck sequence are:\n");
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        _printf("%d ");
      }
      _printf("\n\nTerms 991 to 1000 of the sequence are:\n");
      for (local_40 = 0x3de; local_40 < 1000; local_40 = local_40 + 1) {
        _printf("%d ");
      }
      _putchar(10);
      return 0;
    }
    do {
      local_38 = local_38 + -1;
      if (local_38 < 0) goto LAB_100003e38;
    } while (*(int *)((long)pvVar1 + (long)local_38 * 4) !=
             *(int *)((long)pvVar1 + (long)local_34 * 4));
    *(int *)((long)pvVar1 + (long)(local_34 + 1) * 4) = local_34 - local_38;
LAB_100003e38:
    local_34 = local_34 + 1;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}


