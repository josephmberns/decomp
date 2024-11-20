#include "topological-sort-1.h"



int _get_item(undefined8 *param_1,int *param_2,char *param_3)

{
  int iVar1;
  void *pvVar2;
  int local_34;
  
  pvVar2 = (void *)*param_1;
  local_34 = 0;
  while( true ) {
    if (*param_2 <= local_34) {
      iVar1 = *param_2;
      *param_2 = iVar1 + 1;
      pvVar2 = _realloc(pvVar2,(long)(iVar1 + 1) << 5);
      *param_1 = pvVar2;
      iVar1 = *param_2 + -1;
      ___memset_chk((void *)((long)pvVar2 + (long)iVar1 * 0x20),0,0x20,0xffffffffffffffff);
      *(int *)((long)pvVar2 + (long)iVar1 * 0x20 + 0x14) = iVar1;
      *(char **)((long)pvVar2 + (long)iVar1 * 0x20) = param_3;
      return iVar1;
    }
    iVar1 = _strcmp(*(char **)((long)pvVar2 + (long)local_34 * 0x20),param_3);
    if (iVar1 == 0) break;
    local_34 = local_34 + 1;
  }
  return local_34;
}



void _add_dep(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0x14) != param_2) {
    pvVar2 = _realloc(*(void **)(param_1 + 8),(long)(*(int *)(param_1 + 0x10) + 1) << 2);
    *(void **)(param_1 + 8) = pvVar2;
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar1 + 1;
    *(int *)(*(long *)(param_1 + 8) + (long)iVar1 * 4) = param_2;
  }
  return;
}



undefined4 _parse_input(long *param_1)

{
  int iVar1;
  char *pcStack_50;
  char *local_48;
  char *pcStack_40;
  char *local_38;
  long local_30;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  long *local_18;
  
  local_1c = 0;
  local_30 = 0;
  local_38 = _input;
  local_18 = param_1;
  while (local_48 = _strtok_r(local_38,"\n",&pcStack_40), local_48 != (char *)0x0) {
    local_20 = 0;
    local_38 = local_48;
    while (local_48 = _strtok_r(local_48," \t",&pcStack_50), local_48 != (char *)0x0) {
      local_28 = _get_item(&local_30,&local_1c,local_48);
      iVar1 = local_28;
      if (local_20 != 0) {
        _add_dep(local_30 + (long)local_24 * 0x20,local_28);
        iVar1 = local_24;
      }
      local_24 = iVar1;
      local_20 = local_20 + 1;
      local_48 = (char *)0x0;
    }
    local_38 = (char *)0x0;
    local_48 = (char *)0x0;
  }
  *local_18 = local_30;
  return local_1c;
}



int _get_depth(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_30;
  int local_2c;
  int local_14;
  
  if (*(long *)(param_1 + (long)param_2 * 0x20 + 8) == 0) {
    *(undefined4 *)(param_1 + (long)param_2 * 0x20 + 0x18) = 1;
    local_14 = 1;
  }
  else {
    local_14 = *(int *)(param_1 + (long)param_2 * 0x20 + 0x18);
    if (-1 < local_14) {
      *(undefined4 *)(param_1 + (long)param_2 * 0x20 + 0x18) = param_3;
      local_30 = 0;
      local_2c = 0;
      while ((iVar1 = local_2c, local_30 < *(int *)(param_1 + (long)param_2 * 0x20 + 0x10) &&
             (iVar1 = _get_depth(param_1,*(undefined4 *)
                                          (*(long *)(param_1 + (long)param_2 * 0x20 + 8) +
                                          (long)local_30 * 4),param_3), -1 < iVar1))) {
        if (local_2c < iVar1 + 1) {
          local_2c = iVar1 + 1;
        }
        local_30 = local_30 + 1;
      }
      local_2c = iVar1;
      *(int *)(param_1 + (long)param_2 * 0x20 + 0x18) = local_2c;
      local_14 = local_2c;
    }
  }
  return local_14;
}



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  long local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_24 = -1;
  local_20 = _parse_input(&local_38);
  for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
    if ((*(int *)(local_38 + (long)local_18 * 0x20 + 0x18) == 0) &&
       (iVar2 = _get_depth(local_38,local_18,local_24), iVar2 < 0)) {
      local_24 = local_24 + -1;
    }
  }
  local_2c = 0;
  local_28 = 0;
  for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
    if (local_28 < *(int *)(local_38 + (long)local_18 * 0x20 + 0x18)) {
      local_28 = *(int *)(local_38 + (long)local_18 * 0x20 + 0x18);
    }
    if (*(int *)(local_38 + (long)local_18 * 0x20 + 0x18) < local_2c) {
      local_2c = *(int *)(local_38 + (long)local_18 * 0x20 + 0x18);
    }
  }
  _printf("Compile order:\n");
  for (local_18 = local_2c; local_18 <= local_28; local_18 = local_18 + 1) {
    if (local_18 != 0) {
      if (local_18 < 0) {
        _printf("   [unorderable]");
      }
      else {
        _printf("%d:");
      }
      local_1c = 0;
      while( true ) {
        bVar1 = true;
        if (local_20 <= local_1c) {
          iVar2 = _putchar(10);
          bVar1 = iVar2 == 0;
        }
        if (!bVar1) break;
        if (*(int *)(local_38 + (long)local_1c * 0x20 + 0x18) == local_18) {
          _printf(" %s");
        }
        local_1c = local_1c + 1;
      }
    }
  }
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok_r(char *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_r_100004028)();
  return pcVar1;
}


