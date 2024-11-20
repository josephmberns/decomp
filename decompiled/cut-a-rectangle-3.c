#include "cut-a-rectangle-3.h"



long * _alloc2(int param_1,int param_2)

{
  long *plVar1;
  int local_1c;
  
  plVar1 = (long *)_calloc(1,(long)param_2 * 8 + (long)(param_2 * param_1));
  *plVar1 = (long)(plVar1 + param_2);
  for (local_1c = 1; local_1c < param_2; local_1c = local_1c + 1) {
    plVar1[local_1c] = plVar1[local_1c + -1] + (long)param_1;
  }
  return plVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _show(void)

{
  char *pcVar1;
  int iVar2;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  _printf("%ld\n");
  for (local_14 = 0; local_14 < __h; local_14 = local_14 + 1) {
    if (local_14 == 0) {
      local_1c = 0;
    }
    else {
      if (**(char **)(__hor + (long)local_14 * 8) == '\0') {
        local_24 = local_20;
      }
      else {
        local_24 = (uint)(local_20 == 0);
      }
      local_1c = local_24;
    }
    local_20 = local_1c;
    local_18 = 0;
    while (local_18 < __w) {
      pcVar1 = "\x1b[31m[]";
      if (local_1c == 0) {
        pcVar1 = "\x1b[33m{}";
      }
      _printf(pcVar1);
      local_18 = local_18 + 1;
      if (*(char *)(*(long *)(__ver + (long)local_14 * 8) + (long)local_18) == '\0') {
        local_28 = local_1c;
      }
      else {
        local_28 = (uint)(local_1c == 0);
      }
      local_1c = local_28;
    }
    _puts("\x1b[m");
  }
  iVar2 = _putchar(10);
  return iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _walk(int param_1,int param_2)

{
  char *pcVar1;
  
  if ((((-1 < param_2) && (-1 < param_1)) && (param_2 <= __w)) && (param_1 <= __h)) {
    if (((param_2 == 0) || (param_1 == 0)) || ((param_2 == __w || (param_1 == __h)))) {
      __count = __count + 1;
      if (__verbose != 0) {
        _show();
      }
    }
    else if (*(char *)(*(long *)(__vis + (long)param_1 * 8) + (long)param_2) == '\0') {
      pcVar1 = (char *)(*(long *)(__vis + (long)param_1 * 8) + (long)param_2);
      *pcVar1 = *pcVar1 + '\x01';
      pcVar1 = (char *)(*(long *)(__vis + (long)(__h - param_1) * 8) + (long)(__w - param_2));
      *pcVar1 = *pcVar1 + '\x01';
      if ((param_2 != 0) &&
         (*(char *)(*(long *)(__hor + (long)param_1 * 8) + (long)(param_2 + -1)) == '\0')) {
        *(undefined *)(*(long *)(__hor + (long)(__h - param_1) * 8) + (long)(__w - param_2)) = 1;
        *(undefined *)(*(long *)(__hor + (long)param_1 * 8) + (long)(param_2 + -1)) = 1;
        _walk(param_1,param_2 + -1);
        *(undefined *)(*(long *)(__hor + (long)(__h - param_1) * 8) + (long)(__w - param_2)) = 0;
        *(undefined *)(*(long *)(__hor + (long)param_1 * 8) + (long)(param_2 + -1)) = 0;
      }
      if ((param_2 < __w) &&
         (*(char *)(*(long *)(__hor + (long)param_1 * 8) + (long)param_2) == '\0')) {
        *(undefined *)(*(long *)(__hor + (long)(__h - param_1) * 8) + (long)((__w - param_2) + -1))
             = 1;
        *(undefined *)(*(long *)(__hor + (long)param_1 * 8) + (long)param_2) = 1;
        _walk(param_1,param_2 + 1);
        *(undefined *)(*(long *)(__hor + (long)(__h - param_1) * 8) + (long)((__w - param_2) + -1))
             = 0;
        *(undefined *)(*(long *)(__hor + (long)param_1 * 8) + (long)param_2) = 0;
      }
      if ((param_1 != 0) &&
         (*(char *)(*(long *)(__ver + (long)(param_1 + -1) * 8) + (long)param_2) == '\0')) {
        *(undefined *)(*(long *)(__ver + (long)(__h - param_1) * 8) + (long)(__w - param_2)) = 1;
        *(undefined *)(*(long *)(__ver + (long)(param_1 + -1) * 8) + (long)param_2) = 1;
        _walk(param_1 + -1,param_2);
        *(undefined *)(*(long *)(__ver + (long)(__h - param_1) * 8) + (long)(__w - param_2)) = 0;
        *(undefined *)(*(long *)(__ver + (long)(param_1 + -1) * 8) + (long)param_2) = 0;
      }
      if ((param_1 < __h) &&
         (*(char *)(*(long *)(__ver + (long)param_1 * 8) + (long)param_2) == '\0')) {
        *(undefined *)(*(long *)(__ver + (long)((__h - param_1) + -1) * 8) + (long)(__w - param_2))
             = 1;
        *(undefined *)(*(long *)(__ver + (long)param_1 * 8) + (long)param_2) = 1;
        _walk(param_1 + 1,param_2);
        *(undefined *)(*(long *)(__ver + (long)((__h - param_1) + -1) * 8) + (long)(__w - param_2))
             = 0;
        *(undefined *)(*(long *)(__ver + (long)param_1 * 8) + (long)param_2) = 0;
      }
      pcVar1 = (char *)(*(long *)(__vis + (long)param_1 * 8) + (long)param_2);
      *pcVar1 = *pcVar1 + -1;
      pcVar1 = (char *)(*(long *)(__vis + (long)(__h - param_1) * 8) + (long)(__w - param_2));
      *pcVar1 = *pcVar1 + -1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _cut(void)

{
  if ((__h * __w & 1) == 0) {
    __hor = _alloc2(__w + 1,__h + 1);
    __ver = _alloc2(__w + 1,__h + 1);
    __vis = _alloc2(__w + 1,__h + 1);
    if ((__h & 1) == 0) {
      if ((__w & 1) == 0) {
        *(undefined *)(*(long *)(__vis + (long)((int)__h / 2) * 8) + (long)((int)__w / 2)) = 1;
        *(undefined *)(*(long *)(__hor + (long)((int)__h / 2) * 8) + (long)((int)__w / 2)) = 1;
        *(undefined *)(*(long *)(__hor + (long)((int)__h / 2) * 8) + (long)((int)__w / 2 + -1)) = 1;
        _walk((int)__h / 2,(int)__w / 2 + -1);
        *(undefined *)(*(long *)(__hor + (long)((int)__h / 2) * 8) + (long)((int)__w / 2)) = 0;
        *(undefined *)(*(long *)(__hor + (long)((int)__h / 2) * 8) + (long)((int)__w / 2 + -1)) = 0;
        *(undefined *)(*(long *)(__ver + (long)((int)__h / 2) * 8) + (long)((int)__w / 2)) = 1;
        *(undefined *)(*(long *)(__ver + (long)((int)__h / 2 + -1) * 8) + (long)((int)__w / 2)) = 1;
        _walk((int)__h / 2 + -1,(int)__w / 2);
      }
      else {
        *(undefined *)(*(long *)(__hor + (long)((int)__h / 2) * 8) + (long)((int)__w / 2)) = 1;
        _walk((int)__h / 2,(int)__w / 2);
      }
    }
    else {
      *(undefined *)(*(long *)(__ver + (long)((int)__h / 2) * 8) + (long)((int)__w / 2)) = 1;
      _walk((int)__h / 2,(int)__w / 2);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _cwalk(int param_1,int param_2,uint param_3)

{
  if ((((param_1 == 0) || (param_1 == __h)) || (param_2 == 0)) || (param_2 == __w)) {
    __count = __count + 1;
  }
  else {
    *(undefined *)(*(long *)(__vis + (long)(__h - param_1) * 8) + (long)(__w - param_2)) = 1;
    *(undefined *)(*(long *)(__vis + (long)param_1 * 8) + (long)param_2) = 1;
    if ((param_2 != 0) &&
       (*(char *)(*(long *)(__vis + (long)param_1 * 8) + (long)(param_2 + -1)) == '\0')) {
      _cwalk(param_1,param_2 + -1,param_3 | 1);
    }
    if ((((param_3 & 1) != 0) && (param_2 < __w)) &&
       (*(char *)(*(long *)(__vis + (long)param_1 * 8) + (long)(param_2 + 1)) == '\0')) {
      _cwalk(param_1,param_2 + 1,param_3 | 1);
    }
    if ((param_1 != 0) &&
       (*(char *)(*(long *)(__vis + (long)(param_1 + -1) * 8) + (long)param_2) == '\0')) {
      _cwalk(param_1 + -1,param_2,param_3 | 2);
    }
    if ((((param_3 & 2) != 0) && (param_1 < __h)) &&
       (*(char *)(*(long *)(__vis + (long)(param_1 + 1) * 8) + (long)param_2) == '\0')) {
      _cwalk(param_1 + 1,param_2,param_3 | 2);
    }
    *(undefined *)(*(long *)(__vis + (long)(__h - param_1) * 8) + (long)(__w - param_2)) = 0;
    *(undefined *)(*(long *)(__vis + (long)param_1 * 8) + (long)param_2) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _count_only(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_20;
  
  uVar1 = __h;
  if ((__h * __w & 1) == 0) {
    if ((__h & 1) != 0) {
      __h = __w;
      __w = uVar1;
    }
    __vis = _alloc2(__w + 1,__h + 1);
    *(undefined *)(*(long *)(__vis + (long)((int)__h / 2) * 8) + (long)((int)__w / 2)) = 1;
    if ((__w & 1) != 0) {
      *(undefined *)(*(long *)(__vis + (long)((int)__h / 2) * 8) + (long)((int)__w / 2 + 1)) = 1;
    }
    if ((int)__w < 2) {
      local_20 = 1;
    }
    else {
      _cwalk((int)__h / 2,(int)__w / 2 + -1,1);
      lVar3 = __count * 2;
      __count = 0;
      if (__w != __h) {
        uVar2 = 3;
        if ((__w & 1) == 0) {
          uVar2 = 2;
        }
        _cwalk((int)__h / 2 + 1,(int)__w / 2,uVar2);
      }
      local_20 = lVar3 + -1 + (__count * 2 - (ulong)((__w & 1) == 0));
    }
    if (__w == __h) {
      local_20 = local_20 * 2 + 2;
    }
    __count = local_20;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  int local_24;
  undefined4 local_14;
  
  for (local_24 = 1; local_24 < param_1; local_24 = local_24 + 1) {
    if (((**(char **)(param_2 + (long)local_24 * 8) == '-') &&
        (*(char *)(*(long *)(param_2 + (long)local_24 * 8) + 1) == 'v')) &&
       (*(char *)(*(long *)(param_2 + (long)local_24 * 8) + 2) == '\0')) {
      __verbose = 1;
    }
    else {
      if (__w == 0) {
        __w = _atoi(*(char **)(param_2 + (long)local_24 * 8));
        iVar1 = __w;
      }
      else {
        if (__h != 0) goto LAB_100003efc;
        __h = _atoi(*(char **)(param_2 + (long)local_24 * 8));
        iVar1 = __h;
      }
      if (iVar1 < 1) goto LAB_100003efc;
    }
  }
  if (__w == 0) {
LAB_100003efc:
    _fprintf(*(FILE **)PTR____stderrp_100004000,"bad args\n");
    local_14 = 1;
  }
  else {
    if (__h == 0) {
      __h = __w;
    }
    if (__verbose == 0) {
      _count_only();
    }
    else {
      _cut();
    }
    _printf("Total: %ld\n");
    local_14 = 0;
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004030)((int)param_1);
  return iVar1;
}


