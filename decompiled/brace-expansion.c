#include "brace-expansion.h"



undefined4 * _allocate_node(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_malloc(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"Failed to allocate node for tag: %d\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  *puVar1 = param_1;
  *(undefined8 *)(puVar1 + 4) = 0;
  return puVar1;
}



long _make_leaf(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = _allocate_node(0);
  *(undefined8 *)(lVar1 + 8) = param_1;
  return lVar1;
}



long _make_tree(void)

{
  long lVar1;
  
  lVar1 = _allocate_node(1);
  *(undefined8 *)(lVar1 + 8) = 0;
  return lVar1;
}



long _make_seq(void)

{
  long lVar1;
  
  lVar1 = _allocate_node(2);
  *(undefined8 *)(lVar1 + 8) = 0;
  return lVar1;
}



void _deallocate_node(int *param_1)

{
  if (param_1 != (int *)0x0) {
    _deallocate_node(*(undefined8 *)(param_1 + 4));
    param_1[4] = 0;
    param_1[5] = 0;
    if (*param_1 == 0) {
      _free(*(void **)(param_1 + 2));
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      if ((*param_1 != 1) && (*param_1 != 2)) {
        _fprintf(*(FILE **)PTR____stderrp_100004010,"Cannot deallocate node with tag: %d\n");
                    // WARNING: Subroutine does not return
        _exit(1);
      }
      _deallocate_node(*(undefined8 *)(param_1 + 2));
      param_1[2] = 0;
      param_1[3] = 0;
    }
    _free(param_1);
  }
  return;
}



void _append(int *param_1,long param_2)

{
  long local_28;
  
  if (param_1 == (int *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"Cannot append to uninitialized node.");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  if (param_2 != 0) {
    if ((*param_1 != 2) && (*param_1 != 1)) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"Cannot append to node with tag: %d\n");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    if (*(long *)(param_1 + 2) == 0) {
      *(long *)(param_1 + 2) = param_2;
    }
    else {
      for (local_28 = *(long *)(param_1 + 2); *(long *)(local_28 + 0x10) != 0;
          local_28 = *(long *)(local_28 + 0x10)) {
      }
      *(long *)(local_28 + 0x10) = param_2;
    }
  }
  return;
}



long _count(int *param_1)

{
  long lVar1;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_18;
  
  if (param_1 == (int *)0x0) {
    local_18 = 0;
  }
  else if (*param_1 == 0) {
    local_18 = 1;
  }
  else if (*param_1 == 1) {
    local_28 = 0;
    for (local_30 = *(long *)(param_1 + 2); local_30 != 0; local_30 = *(long *)(local_30 + 0x10)) {
      lVar1 = _count(local_30);
      local_28 = local_28 + lVar1;
    }
    local_18 = local_28;
  }
  else {
    if (*param_1 != 2) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"Cannot count node with tag: %d\n");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    local_38 = 1;
    for (local_40 = *(long *)(param_1 + 2); local_40 != 0; local_40 = *(long *)(local_40 + 0x10)) {
      lVar1 = _count(local_40);
      local_38 = local_38 * lVar1;
    }
    local_18 = local_38;
  }
  return local_18;
}



int * _expand(int *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_40;
  long local_28;
  ulong local_20;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      uVar1 = _printf(*(char **)(param_1 + 2));
      param_1 = (int *)(ulong)uVar1;
    }
    else if (*param_1 == 1) {
      local_28 = *(long *)(param_1 + 2);
      for (local_20 = param_2; uVar2 = _count(local_28), uVar2 <= local_20;
          local_20 = local_20 - uVar2) {
        local_28 = *(long *)(local_28 + 0x10);
      }
      param_1 = (int *)_expand(local_28,local_20);
    }
    else {
      if (*param_1 != 2) {
        _fprintf(*(FILE **)PTR____stderrp_100004010,"Cannot expand node with tag: %d\n");
                    // WARNING: Subroutine does not return
        _exit(1);
      }
      for (local_40 = *(long *)(param_1 + 2); local_40 != 0; local_40 = *(long *)(local_40 + 0x10))
      {
        uVar3 = _count(local_40);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = param_2 / uVar3;
        }
        param_1 = (int *)_expand(local_40,param_2 - uVar2 * uVar3);
      }
    }
  }
  return param_1;
}



void * _allocate_string(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  
  sVar1 = _strlen(param_1);
  pvVar2 = _calloc(sVar1 + 1,1);
  if (pvVar2 == (void *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"Failed to allocate a copy of the string.");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  ___strcpy_chk(pvVar2,param_1,0xffffffffffffffff);
  return pvVar2;
}



undefined8 _parse_tree(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char local_d3;
  undefined local_d2;
  byte local_d1;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  long *local_b8;
  long local_b0;
  char acStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_b8 = param_2;
  local_b0 = param_1;
  local_c0 = _make_tree();
  _memset(acStack_a8,0,0x80);
  local_c8 = 0;
  local_d0 = 0;
  local_d1 = 0;
  local_d2 = 0;
LAB_100003708:
  do {
    uVar2 = local_c0;
    if (*(char *)(local_b0 + *local_b8) == '\0') {
LAB_100003a1c:
      if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
        return local_c0;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    lVar3 = *local_b8;
    *local_b8 = lVar3 + 1;
    local_d3 = *(char *)(local_b0 + lVar3);
    if (local_d3 != '\\') {
      if (local_d3 == '{') {
        acStack_a8[local_c8] = '{';
        acStack_a8[local_c8 + 1] = '\0';
        local_d1 = 1;
        local_d0 = local_d0 + 1;
        local_c8 = local_c8 + 1;
      }
      else if (local_d3 == '}') {
        lVar3 = local_d0 + -1;
        if (local_d0 == 0) {
          if ((local_d1 & 1) == 0) {
            local_d0 = lVar3;
            _allocate_string(acStack_a8);
            uVar1 = _make_leaf();
            _append(uVar2,uVar1);
          }
          else {
            local_e0 = 0;
            local_d0 = lVar3;
            local_e8 = _parse_seq(acStack_a8,&local_e0);
            _append(local_c0,local_e8);
          }
          goto LAB_100003a1c;
        }
        acStack_a8[local_c8] = '}';
        acStack_a8[local_c8 + 1] = '\0';
        local_d0 = lVar3;
        local_c8 = local_c8 + 1;
      }
      else if (local_d3 == ',') {
        if (local_d0 == 0) {
          if ((local_d1 & 1) == 0) {
            _allocate_string();
            uVar1 = _make_leaf();
            _append(uVar2,uVar1);
          }
          else {
            local_f0 = 0;
            uVar2 = _parse_seq(acStack_a8,&local_f0);
            _append(local_c0,uVar2);
            local_d1 = 0;
          }
          acStack_a8[0] = '\0';
          local_c8 = 0;
        }
        else {
          acStack_a8[local_c8] = ',';
          acStack_a8[local_c8 + 1] = '\0';
          local_c8 = local_c8 + 1;
        }
      }
      else {
        acStack_a8[local_c8] = local_d3;
        acStack_a8[local_c8 + 1] = '\0';
        local_c8 = local_c8 + 1;
      }
      goto LAB_100003708;
    }
    lVar3 = *local_b8;
    *local_b8 = lVar3 + 1;
    local_d3 = *(char *)(local_b0 + lVar3);
    if (local_d3 == '\0') goto LAB_100003a1c;
    acStack_a8[local_c8] = '\\';
    acStack_a8[local_c8 + 1] = local_d3;
    acStack_a8[local_c8 + 2] = '\0';
    local_c8 = local_c8 + 2;
  } while( true );
}



undefined8 _parse_seq(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_b8;
  char acStack_98 [128];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uVar2 = _make_seq();
  _memset(acStack_98,0,0x80);
  local_b8 = 0;
  while (*(char *)(param_1 + *param_2) != '\0') {
    lVar5 = *param_2;
    *param_2 = lVar5 + 1;
    cVar1 = *(char *)(param_1 + lVar5);
    if (cVar1 == '\\') {
      lVar5 = *param_2;
      *param_2 = lVar5 + 1;
      cVar1 = *(char *)(param_1 + lVar5);
      if (cVar1 == '\0') break;
      acStack_98[local_b8] = cVar1;
      acStack_98[local_b8 + 1] = '\0';
      local_b8 = local_b8 + 1;
    }
    else if (cVar1 == '{') {
      uVar4 = _parse_tree(param_1,param_2);
      if (local_b8 != 0) {
        _allocate_string();
        uVar3 = _make_leaf();
        _append(uVar2,uVar3);
        local_b8 = 0;
        acStack_98[0] = '\0';
      }
      _append(uVar2,uVar4);
    }
    else {
      acStack_98[local_b8] = cVar1;
      acStack_98[local_b8 + 1] = '\0';
      local_b8 = local_b8 + 1;
    }
  }
  if (local_b8 != 0) {
    _allocate_string();
    uVar4 = _make_leaf();
    _append(uVar2,uVar4);
    acStack_98[0] = '\0';
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void _test(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong local_38;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  uVar1 = _parse_seq(param_1,&local_20);
  uVar2 = _count(uVar1);
  _printf("Pattern: %s\n");
  for (local_38 = 0; local_38 < uVar2; local_38 = local_38 + 1) {
    _expand(uVar1,local_38);
    _printf("\n");
  }
  _printf("\n");
  _deallocate_node(uVar1);
  return;
}



undefined4 entry(void)

{
  _test("~/{Downloads,Pictures}/*.{jpg,gif,png}");
  _test("It{{em,alic}iz,erat}e{d,}, please.");
  _test("{,{,gotta have{ ,\\, again\\, }}more }cowbell!");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003db8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003dd0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004028)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ddc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003de8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004040)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e00. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004048)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e18. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}


