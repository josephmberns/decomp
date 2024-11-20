#include "self-describing-numbers-2.h"



undefined4 entry(int param_1,long param_2)

{
  bool bVar1;
  size_t sVar2;
  char *pcVar3;
  int aiStack_59c [247];
  ulong local_1c0;
  undefined4 local_1a4;
  int aiStack_1a0 [94];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  if (param_1 == 2) {
    _digs = *(char **)(param_2 + 8);
    sVar2 = _strlen(_digs);
    if ((sVar2 < 2) || (0x5e < sVar2)) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"Invalid number of digits\n");
      local_1a4 = 1;
    }
    else {
      for (local_1c0 = 0; local_1c0 < 0x5e; local_1c0 = local_1c0 + 1) {
        aiStack_1a0[local_1c0] = 0;
      }
      local_1c0 = 0;
      while( true ) {
        bVar1 = false;
        if (local_1c0 < sVar2) {
          pcVar3 = _strchr(_ref,(int)_digs[local_1c0]);
          bVar1 = false;
          if (pcVar3 != (char *)0x0) {
            bVar1 = aiStack_1a0[(int)_digs[local_1c0] - (int)(char)*_ref] == 0;
          }
        }
        if (!bVar1) break;
        aiStack_1a0[(int)_digs[local_1c0] - (int)(char)*_ref] = 1;
        local_1c0 = local_1c0 + 1;
      }
      if (local_1c0 < sVar2) {
        _fprintf(*(FILE **)PTR____stderrp_100004010,"Invalid digits\n");
        local_1a4 = 1;
      }
      else {
        _nums = _calloc(sVar2,8);
        if (_nums == (void *)0x0) {
          _fprintf(*(FILE **)PTR____stderrp_100004010,"Could not allocate memory for nums\n");
          local_1a4 = 1;
        }
        else {
          _inds = _malloc(sVar2 * 8);
          if (_inds == (void *)0x0) {
            _fprintf(*(FILE **)PTR____stderrp_100004010,"Could not allocate memory for inds\n");
            _free(_nums);
            local_1a4 = 1;
          }
          else {
            _inds_sum = 0;
            _inds_val = 0;
            for (_base = 2; _base <= sVar2; _base = _base + 1) {
              _selfdesc(_base);
            }
            _free(_inds);
            _free(_nums);
            local_1a4 = 0;
          }
        }
      }
    }
  }
  else {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"Usage is %s <digits>\n");
    local_1a4 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return local_1a4;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



ulong _selfdesc(ulong param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  if (param_1 == 0) {
    for (local_30 = 0; local_30 < _base; local_30 = local_30 + 1) {
      _putchar((int)*(char *)(_digs + *(long *)(_inds + local_30 * 8)));
    }
    uVar4 = _puts("");
    uVar5 = (ulong)uVar4;
  }
  else {
    local_40 = _base - _inds_sum;
    local_50 = local_40;
    if (_inds_sum == 0) {
      local_50 = _base - 1;
    }
    local_28 = local_50;
    uVar3 = param_1 - 1;
    local_38 = local_40;
    if (uVar3 != 0) {
      local_38 = 0;
      local_40 = 0;
      if (uVar3 != 0) {
        local_40 = (_base - _inds_val) / uVar3;
      }
    }
    if (local_40 < local_50) {
      local_28 = local_40;
    }
    *(ulong *)(_inds + uVar3 * 8) = local_38;
    uVar5 = param_1;
    while (*(ulong *)(_inds + uVar3 * 8) <= local_28) {
      plVar2 = (long *)(_nums + *(long *)(_inds + uVar3 * 8) * 8);
      *plVar2 = *plVar2 + 1;
      _inds_sum = _inds_sum + *(long *)(_inds + uVar3 * 8);
      _inds_val = _inds_val + *(long *)(_inds + uVar3 * 8) * uVar3;
      local_48 = _base;
      do {
        local_48 = local_48 - 1;
        bVar1 = false;
        if ((uVar3 < local_48) &&
           (bVar1 = false, *(ulong *)(_nums + local_48 * 8) <= *(ulong *)(_inds + local_48 * 8))) {
          bVar1 = (ulong)(*(long *)(_inds + local_48 * 8) - *(long *)(_nums + local_48 * 8)) <=
                  param_1;
        }
      } while (bVar1);
      if (local_48 == uVar3) {
        uVar5 = _selfdesc(param_1 - 1);
      }
      _inds_val = _inds_val - *(long *)(_inds + uVar3 * 8) * uVar3;
      _inds_sum = _inds_sum - *(long *)(_inds + uVar3 * 8);
      plVar2 = (long *)(_nums + *(long *)(_inds + uVar3 * 8) * 8);
      *plVar2 = *plVar2 + -1;
      plVar2 = (long *)(_inds + uVar3 * 8);
      *plVar2 = *plVar2 + 1;
    }
  }
  return uVar5;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e84. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004038)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004048)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004050)();
  return sVar1;
}


