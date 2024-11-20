#include "optional-parameters.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _CmprRows(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 local_58;
  
  if (_DAT_10000800c == 0) {
    uVar1 = *(undefined8 *)(*param_1 + (long)_DAT_100008008 * 8);
    local_58 = *(undefined8 *)(*param_2 + (long)_DAT_100008008 * 8);
  }
  else {
    uVar1 = *(undefined8 *)(*param_2 + (long)_DAT_100008008 * 8);
    local_58 = *(undefined8 *)(*param_1 + (long)_DAT_100008008 * 8);
  }
  (*__sortSpec)(uVar1,local_58);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _sortTable(undefined8 *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  char *local_30;
  
  __sortSpec = PTR__strcmp_100004038;
  _DAT_100008008 = 0;
  _DAT_10000800c = 0;
  local_30 = param_2;
  if (param_2 != (char *)0x0) {
    for (; *local_30 != '\0'; local_30 = local_30 + 1) {
      cVar2 = *local_30;
      if (cVar2 == 'c') {
        iVar1 = *(int *)register0x00000008;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
        if ((-1 < iVar1) && (iVar1 < *(int *)((long)param_1 + 0xc))) {
          _DAT_100008008 = iVar1;
        }
      }
      else if (cVar2 == 'o') {
        __sortSpec = *(undefined **)register0x00000008;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
      }
      else if (cVar2 == 'r') {
        iVar1 = *(int *)register0x00000008;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
        _DAT_10000800c = (uint)(iVar1 != 0);
      }
    }
  }
  _qsort((void *)*param_1,(long)*(int *)(param_1 + 1),8,(int *)_CmprRows);
  return 0;
}



int _printTable(long param_1,FILE *param_2,long param_3)

{
  int iVar1;
  int local_30;
  int local_2c;
  
  for (local_2c = 0; local_2c < *(int *)(param_1 + 8); local_2c = local_2c + 1) {
    _fprintf(param_2,"   ");
    for (local_30 = 0; local_30 < *(int *)(param_1 + 0xc); local_30 = local_30 + 1) {
      _fprintf(param_2,*(char **)(param_3 + (long)local_30 * 8));
    }
    _fprintf(param_2,"\n");
  }
  iVar1 = _fprintf(param_2,"\n");
  return iVar1;
}



int _ord(char param_1)

{
  return param_1 + -0x30;
}



int _cmprStrgs(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long local_58;
  long local_50;
  char *local_38;
  char *local_30;
  int local_14;
  
  local_38 = param_2;
  local_30 = param_1;
  while( true ) {
    iVar4 = _tolower((int)*local_30);
    iVar5 = _tolower((int)*local_38);
    bVar3 = false;
    if (iVar4 == iVar5) {
      bVar3 = *local_30 != '\0';
    }
    if (!bVar3) break;
    local_30 = local_30 + 1;
    local_38 = local_38 + 1;
  }
  iVar4 = _isdigit((int)*local_30);
  if ((iVar4 == 0) || (iVar4 = _isdigit((int)*local_38), iVar4 == 0)) {
    iVar4 = _tolower((int)*local_30);
    iVar5 = _tolower((int)*local_38);
    pcVar1 = param_2;
    pcVar2 = param_1;
    if (iVar4 == iVar5) {
      while( true ) {
        local_30 = pcVar2;
        local_38 = pcVar1;
        bVar3 = false;
        if (*local_30 == *local_38) {
          bVar3 = *local_30 != '\0';
        }
        if (!bVar3) break;
        pcVar1 = local_38 + 1;
        pcVar2 = local_30 + 1;
      }
      local_14 = (int)*local_30 - (int)*local_38;
    }
    else {
      local_14 = _tolower((int)*local_30);
      iVar4 = _tolower((int)*local_38);
      local_14 = local_14 - iVar4;
    }
  }
  else {
    if ((*local_30 == '0') || (*local_38 == '0')) {
      do {
        if (local_30 <= param_1) break;
        local_30 = local_30 + -1;
        local_38 = local_38 + -1;
      } while (*local_30 == '0');
      iVar4 = _isdigit((int)*local_30);
      if (iVar4 == 0) {
        local_30 = local_30 + 1;
        local_38 = local_38 + 1;
      }
    }
    pcVar2 = local_30;
    pcVar1 = local_38;
    local_50 = 0;
    while (iVar4 = _isdigit((int)*local_30), iVar4 != 0) {
      iVar4 = _ord((long)*local_30);
      local_50 = local_50 * 10 + (long)iVar4;
      local_30 = local_30 + 1;
    }
    local_58 = 0;
    while (iVar4 = _isdigit((int)*local_38), iVar4 != 0) {
      iVar4 = _ord((long)*local_38);
      local_58 = local_58 * 10 + (long)iVar4;
      local_38 = local_38 + 1;
    }
    if (local_50 == local_58) {
      local_14 = ((int)local_38 - (int)pcVar1) - ((int)local_30 - (int)pcVar2);
    }
    else {
      local_14 = (int)local_50 - (int)local_58;
    }
  }
  return local_14;
}



undefined8 entry(void)

{
  undefined *puVar1;
  undefined8 **local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_184;
  char **local_180;
  char **local_178;
  char **local_170;
  char **local_168;
  char **local_160;
  char **local_158;
  char **local_150;
  char **local_148;
  char *local_140;
  char *pcStack_138;
  char *local_130;
  char *local_120;
  char *pcStack_118;
  char *local_110;
  char *local_100;
  char *pcStack_f8;
  char *local_f0;
  char *local_e0;
  char *pcStack_d8;
  char *local_d0;
  char *local_c0;
  char *pcStack_b8;
  char *local_b0;
  char *local_a0;
  char *pcStack_98;
  char *local_90;
  char *local_80;
  char *pcStack_78;
  char *local_70;
  char *local_60;
  char *pcStack_58;
  char *local_50;
  char *local_40;
  char *pcStack_38;
  char *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_184 = 0;
  pcStack_38 = " %-5.5s";
  local_40 = " %-5.5s";
  local_30 = " %-9.9s";
  local_180 = &local_60;
  pcStack_58 = "red";
  local_60 = "a101";
  local_50 = "Java";
  local_178 = &local_80;
  pcStack_78 = "gren";
  local_80 = "ab40";
  local_70 = "Smalltalk";
  local_170 = &local_a0;
  pcStack_98 = "blue";
  local_a0 = "ab9";
  local_90 = "Fortran";
  local_168 = &local_c0;
  pcStack_b8 = "ylow";
  local_c0 = "ab09";
  local_b0 = "Python";
  local_160 = &local_e0;
  pcStack_d8 = "blak";
  local_e0 = "ab1a";
  local_d0 = "Factor";
  local_158 = &local_100;
  pcStack_f8 = "brwn";
  local_100 = "ab1b";
  local_f0 = "C Sharp";
  local_150 = &local_120;
  pcStack_118 = "pink";
  local_120 = "Ab1b";
  local_110 = "Ruby";
  local_148 = &local_140;
  pcStack_138 = "orng";
  local_140 = "ab1";
  local_130 = "Scheme";
  local_198 = &local_180;
  local_190 = 8;
  local_18c = 3;
  _sortTable(&local_198,"");
  _printf("sort on col 0, ascending\n");
  puVar1 = PTR____stdoutp_100004010;
  _printTable(&local_198,*(undefined8 *)PTR____stdoutp_100004010,&local_40);
  _sortTable(&local_198,"ro");
  _printf("sort on col 0, reverse.special\n");
  _printTable(&local_198,*(undefined8 *)puVar1,&local_40);
  _sortTable(&local_198,"c");
  _printf("sort on col 1, ascending\n");
  _printTable(&local_198,*(undefined8 *)puVar1,&local_40);
  _sortTable(&local_198,"cr");
  _printf("sort on col 2, reverse\n");
  _printTable(&local_198,*(undefined8 *)puVar1,&local_40);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isdigit(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isdigit_100004020)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tolower(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tolower_100004040)(_c);
  return iVar1;
}


