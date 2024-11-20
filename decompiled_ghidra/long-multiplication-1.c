#include "long-multiplication-1.h"



void _longmulti(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int local_3c;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar2 = _strcmp(param_1,"0");
  if ((iVar2 == 0) || (iVar2 = _strcmp(param_2,"0"), iVar2 == 0)) {
    *param_3 = '0';
    param_3[1] = '\0';
  }
  else {
    local_34 = (uint)(*param_1 == '-');
    local_2c = (uint)(*param_1 == '-');
    if (*param_2 == '-') {
      local_34 = (uint)(local_34 == 0);
    }
    local_30 = (uint)(*param_2 == '-');
    if ((local_2c == 0) && (local_30 == 0)) {
      sVar3 = _strlen(param_1);
      iVar2 = (int)sVar3;
      sVar3 = _strlen(param_2);
      iVar4 = (int)sVar3;
      ___memset_chk(param_3,0x30,(long)(iVar2 + iVar4),0xffffffffffffffff);
      param_3[iVar2 + iVar4] = '\0';
      local_2c = iVar2;
      while (local_2c = local_2c + -1, -1 < (int)local_2c) {
        local_30 = iVar4 + -1;
        local_34 = local_2c + local_30 + 1;
        local_3c = 0;
        for (; -1 < (int)local_30; local_30 = local_30 + -1) {
          iVar1 = (param_1[(int)local_2c] + -0x30) * (param_2[(int)local_30] + -0x30) +
                  param_3[(int)local_34] + -0x30 + local_3c;
          local_3c = iVar1 / 10;
          param_3[(int)local_34] = (char)iVar1 + (char)(iVar1 / 10) * -10 + '0';
          local_34 = local_34 + -1;
        }
        param_3[(int)local_34] = param_3[(int)local_34] + (char)local_3c;
      }
      if (*param_3 == '0') {
        ___memmove_chk(param_3,param_3 + 1,(long)(iVar2 + iVar4),0xffffffffffffffff);
      }
    }
    else {
      if (local_34 != 0) {
        *param_3 = '-';
      }
      _longmulti(param_1 + (int)local_2c,param_2 + (int)local_30,param_3 + (int)local_34);
    }
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100004018;
  _longmulti("-18446744073709551616");
  iVar1 = _printf("%s\n");
  if (*(long *)PTR____stack_chk_guard_100004018 != lVar2) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___memmove_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memmove_chk_100004000)();
  return;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


