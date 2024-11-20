#include "read-a-specific-line-from-a-file-2.h"



void * _get_nth_line(FILE *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int local_16c;
  ulong local_168;
  void *local_158;
  ulong local_150;
  size_t local_148;
  int local_13c;
  void *local_130;
  char acStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_148 = 0x100;
  local_150 = 0;
  local_158 = _malloc(0x100);
  bVar2 = param_2 == 1;
  if (param_2 < 1) {
    local_130 = (void *)0x0;
  }
  else {
    local_13c = param_2;
    if (local_158 == (void *)0x0) {
      local_130 = (void *)0x0;
    }
    else {
LAB_100003b80:
      bVar1 = false;
      if (local_13c != 0) {
        local_168 = _fread(acStack_128,1,0x100,param_1);
        bVar1 = local_168 != 0;
      }
      if (bVar1) {
        for (local_16c = 0; (ulong)(long)local_16c < local_168; local_16c = local_16c + 1) {
          if (bVar2) {
            if (local_148 <= local_150) {
              local_148 = local_148 << 1;
              local_158 = _realloc(local_158,local_148);
              if (local_158 == (void *)0x0) {
                local_130 = (void *)0x0;
                goto LAB_100003d70;
              }
            }
            *(char *)((long)local_158 + local_150) = acStack_128[local_16c];
            local_150 = local_150 + 1;
          }
          if (acStack_128[local_16c] == '\n') {
            local_13c = local_13c + -1;
            if (local_13c == 1) {
              bVar2 = true;
            }
            if (local_13c == 0) break;
          }
        }
        goto LAB_100003b80;
      }
      if (local_13c == 0) {
        local_130 = _realloc(local_158,local_150 + 1);
        if (local_130 == (void *)0x0) {
          local_130 = (void *)0x0;
        }
        else {
          *(undefined *)((long)local_130 + local_150) = 0;
        }
      }
      else {
        _free(local_158);
        local_130 = (void *)0x0;
      }
    }
  }
LAB_100003d70:
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return local_130;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)_get_nth_line(*(undefined8 *)PTR____stdinp_100004010,7);
  if (pvVar2 == (void *)0x0) {
    _printf("Did not find the 7th line of input.  Reason:  ");
    iVar1 = _feof(*(FILE **)PTR____stdinp_100004010);
    if (iVar1 == 0) {
      iVar1 = _ferror(*(FILE **)PTR____stdinp_100004010);
      if (iVar1 == 0) {
        _puts("Out of memory.");
      }
      else {
        _puts("Error reading input.");
      }
    }
    else {
      _puts("End of file reached.");
    }
  }
  else {
    _printf("The 7th line of input was:\n%s\n");
    _free(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _feof(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__feof_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _ferror(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__ferror_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004028)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004050)();
  return pvVar1;
}


