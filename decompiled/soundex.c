#include "soundex.h"



void _add_code(char *param_1,undefined param_2)

{
  char *local_8;
  
  for (local_8 = param_1; *local_8 != '\0'; local_8 = local_8 + 1) {
    (&DAT_100008048)[(int)((int)*local_8 ^ 0x20)] = param_2;
    (&DAT_100008048)[*local_8] = param_2;
  }
  return;
}



void _init(void)

{
  int local_14;
  
  for (local_14 = 0; (&PTR_s_AEIOU_100008000)[local_14] != (undefined *)0x0; local_14 = local_14 + 1
      ) {
    _add_code((&PTR_s_AEIOU_100008000)[local_14],local_14 + -1);
  }
  return;
}



undefined1 * _soundex(char *param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  int local_1c;
  char *local_10;
  
  DAT_1000080cc = 0;
  DAT_1000080c8 = '\0';
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    DAT_1000080c8 = *param_1;
    cVar1 = (&DAT_100008048)[DAT_1000080c8];
    local_1c = 1;
    for (local_10 = param_1 + 1; *local_10 != '\0' && local_1c < 4; local_10 = local_10 + 1) {
      cVar2 = (&DAT_100008048)[*local_10];
      if (cVar2 != cVar1) {
        if (cVar2 == -1) {
          cVar1 = '\0';
        }
        else if ('\0' < cVar2) {
          lVar3 = (long)local_1c;
          local_1c = local_1c + 1;
          (&DAT_1000080c8)[lVar3] = cVar2 + '0';
          cVar1 = cVar2;
        }
      }
    }
    while (local_1c < 4) {
      lVar3 = (long)local_1c;
      local_1c = local_1c + 1;
      (&DAT_1000080c8)[lVar3] = 0x30;
    }
  }
  return &DAT_1000080c8;
}



undefined8 entry(void)

{
  int iVar1;
  char *pcVar2;
  int local_200;
  long alStack_1f8 [58];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(alStack_1f8,&PTR_s_Soundex_100004030,0x1d0);
  _init();
  iVar1 = _puts("  Test name  Code  Got\n----------------------");
  local_200 = 0;
  while (alStack_1f8[(long)local_200 * 2] != 0) {
    pcVar2 = (char *)_soundex(alStack_1f8[(long)local_200 * 2]);
    _printf("%11s  %s  %s ");
    _strcmp(pcVar2,(char *)alStack_1f8[(long)local_200 * 2 + 1]);
    iVar1 = _printf("%s\n");
    local_200 = local_200 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003db4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004028)((int)param_1);
  return iVar1;
}


