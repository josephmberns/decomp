#include "semordnilap.h"



undefined8 entry(void)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  FILE *pFVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  char *local_a0;
  uint local_94;
  ulong local_90;
  char *local_88;
  undefined8 local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  FILE *local_60;
  undefined *local_58;
  long local_50;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  char acStack_30 [24];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_34 = 0;
  local_40 = 0;
  local_48 = 0;
  local_60 = _fopen("unixdict.txt","r");
  while (local_3c = _fgetc(local_60), local_3c != -1) {
    local_40 = local_40 + (uint)(local_3c == 10);
  }
  _rewind(local_60);
  local_70 = (long)local_40 * 8 + 0xfU & 0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar3 = (long)&local_a0 - local_70;
  local_68 = (long)local_40 * 8 + 0xfU & 0xfffffffffffffff0;
  local_50 = lVar3;
  (*(code *)PTR____chkstk_darwin_100004000)();
  puVar5 = (undefined *)(lVar3 - local_68);
  local_38 = 0;
  local_58 = puVar5;
  while( true ) {
    pFVar4 = local_60;
    *(char **)(puVar5 + -0x10) = acStack_30;
    *(int **)(puVar5 + -8) = &local_44;
    iVar6 = _fscanf(pFVar4,"%s%n");
    if (iVar6 == -1) break;
    local_90 = (long)local_44 + 0xfU & 0xfffffffffffffff0;
    (*(code *)PTR____chkstk_darwin_100004000)();
    lVar3 = (long)puVar5 - local_90;
    *(long *)(local_50 + (long)local_38 * 8) = lVar3;
    local_88 = acStack_30;
    local_80 = 0xffffffffffffffff;
    uVar7 = ___strcpy_chk();
    local_78 = (long)local_44 + 0xfU & 0xfffffffffffffff0;
    (*(code *)PTR____chkstk_darwin_100004000)(uVar7,local_88,local_80);
    puVar5 = (undefined *)(lVar3 - local_78);
    *(undefined **)(local_58 + (long)local_38 * 8) = puVar5;
    ___strcpy_chk();
    FUN_100003e04(*(undefined8 *)(local_58 + (long)local_38 * 8),local_44 + -1);
    local_38 = local_38 + 1;
  }
  _fclose(local_60);
  _qsort(local_58,(long)local_40,8,(int *)FUN_100003eb4);
  local_3c = 0;
  for (local_38 = 0; local_38 < local_40; local_38 = local_38 + 1) {
    while( true ) {
      iVar6 = _strcmp(*(char **)(local_58 + (long)local_38 * 8),
                      *(char **)(local_50 + (long)local_3c * 8));
      local_94 = 0;
      if (0 < iVar6) {
        local_94 = (uint)(local_3c < local_40 + -1);
      }
      if (local_94 == 0) break;
      local_3c = local_3c + 1;
    }
    iVar6 = _strcmp(*(char **)(local_58 + (long)local_38 * 8),
                    *(char **)(local_50 + (long)local_3c * 8));
    if (iVar6 == 0) {
      local_a0 = acStack_30;
      ___strcpy_chk(local_a0,*(undefined8 *)(local_58 + (long)local_38 * 8),0x18);
      sVar8 = _strlen(local_a0);
      FUN_100003e04(local_a0,sVar8);
      iVar6 = _strcmp(*(char **)(local_58 + (long)local_38 * 8),local_a0);
      if ((0 < iVar6) && (uVar2 = local_48 + 1, bVar1 = (int)local_48 < 5, local_48 = uVar2, bVar1))
      {
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(local_58 + (long)local_38 * 8);
        *(char **)(puVar5 + -8) = acStack_30;
        _printf("%s\t%s\n");
      }
    }
  }
  *(ulong *)(puVar5 + -0x10) = (ulong)local_48;
  iVar6 = _printf("Semordnilap pairs: %d\n");
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar6);
}



void FUN_100003e04(long param_1,int param_2)

{
  undefined uVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = param_2 + -1;
  for (local_10 = 0; local_10 < param_2 / 2; local_10 = local_10 + 1) {
    uVar1 = *(undefined *)(param_1 + local_10);
    *(undefined *)(param_1 + local_10) = *(undefined *)(param_1 + local_14);
    *(undefined *)(param_1 + local_14) = uVar1;
    local_14 = local_14 + -1;
  }
  return;
}



int FUN_100003eb4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004030)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004048)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _rewind(FILE *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__rewind_100004050)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004058)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004060)();
  return sVar1;
}


