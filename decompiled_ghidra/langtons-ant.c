#include "langtons-ant.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention -- yet parameter storage is locked

int _refresh(void)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar1 = _printf("\x1b[H");
  local_24 = 0;
  for (local_1c = 0; local_1c < __h; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < __w; local_20 = local_20 + 1) {
      iVar1 = 0x23;
      if (*(char *)(__pix + local_24) == '\0') {
        iVar1 = 0x20;
      }
      _putchar(iVar1);
      local_24 = local_24 + 1;
    }
    iVar1 = _putchar(10);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _walk(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 1;
  local_24 = __w / 2;
  local_28 = __h / 2;
  __pix = _calloc(1,(long)(__w * __h));
  _printf("\x1b[H\x1b[J");
  do {
    iVar1 = local_28 * __w + local_24;
    if (*(char *)((long)__pix + (long)iVar1) == '\0') {
      iVar2 = -local_14;
      local_14 = local_18;
      local_18 = iVar2;
    }
    else {
      iVar2 = -local_18;
      local_18 = local_14;
      local_14 = iVar2;
    }
    *(bool *)((long)__pix + (long)iVar1) = *(char *)((long)__pix + (long)iVar1) == '\0';
    _printf("\x1b[%d;%dH%c");
    local_24 = local_24 + local_14;
    local_28 = local_28 + local_18;
    bVar3 = false;
    if (local_24 < 0) {
      ___memmove_chk((long)__pix + 1,__pix,(long)(__w * __h + -1),0xffffffffffffffff);
      for (local_1c = 0; local_1c < __w * __h; local_1c = local_1c + __w) {
        *(undefined *)((long)__pix + (long)local_1c) = 0;
      }
      local_24 = local_24 + 1;
      bVar3 = true;
    }
    else if (__w <= local_24) {
      ___memmove_chk(__pix,(long)__pix + 1,(long)(__w * __h + -1),0xffffffffffffffff);
      for (local_1c = __w + -1; local_1c < __w * __h; local_1c = local_1c + __w) {
        *(undefined *)((long)__pix + (long)local_1c) = 0;
      }
      local_24 = local_24 + -1;
      bVar3 = true;
    }
    if (local_28 < __h) {
      if (local_28 < 0) {
        ___memmove_chk((long)__pix + (long)__w,__pix,(long)(__w * (__h + -1)));
        ___memset_chk(__pix,0,(long)__w,0xffffffffffffffff);
        local_28 = local_28 + 1;
        bVar3 = true;
      }
    }
    else {
      ___memmove_chk(__pix,(long)__pix + (long)__w,(long)(__w * (__h + -1)));
      ___memset_chk((long)__pix + (long)(__w * (__h + -1)),0,(long)__w,0xffffffffffffffff);
      local_28 = local_28 + -1;
      bVar3 = true;
    }
    if (bVar3) {
      _refresh();
    }
    _printf("\x1b[%d;%dH\x1b[31m@\x1b[m");
    _fflush(*(FILE **)PTR____stdoutp_100004010);
    _usleep(10000);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(int param_1,long param_2)

{
  if (1 < param_1) {
    __w = _atoi(*(char **)(param_2 + 8));
  }
  if (2 < param_1) {
    __h = _atoi(*(char **)(param_2 + 0x10));
  }
  if (__w < 0x28) {
    __w = 0x28;
  }
  if (__h < 0x19) {
    __h = 0x19;
  }
  _walk();
  return 0;
}



void ___memmove_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memmove_chk_100004000)();
  return;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004038)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004040)(param_1);
  return iVar1;
}


