#include "vigen-re-cipher.h"



undefined4 entry(int param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  char *local_130 [2];
  undefined auStack_120 [4];
  undefined4 local_11c;
  undefined6 *local_118;
  undefined6 *local_110;
  ulong local_108;
  undefined *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  byte local_e1;
  long local_e0;
  ulong local_d8;
  void *local_d0;
  size_t local_c8;
  char local_bd;
  undefined4 local_bc;
  ulong local_b8;
  char *local_b0;
  undefined *local_a0;
  size_t local_98;
  char *local_90;
  uint local_88;
  byte local_82;
  char local_81;
  char *local_80;
  int local_78;
  undefined4 local_74;
  undefined6 local_70;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined6 local_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  char local_50 [40];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_74 = 0;
  builtin_strncpy(local_50,"Usage: vinigere [-d] key",0x19);
  local_81 = '\x01';
  local_60 = 0x206e69616c50;
  uStack_5a = 0x6574;
  uStack_58 = 0x20203a7478;
  local_70 = 0x726568706943;
  uStack_6a = 0x7420;
  uStack_68 = 0x203a747865;
  local_82 = 1;
  local_80 = param_2;
  local_78 = param_1;
  while (local_88 = _getopt(local_78,local_80,"d"), local_88 != 0xffffffff) {
    if (local_88 != 100) {
      local_f0 = (undefined8 *)PTR____stderrp_100004018;
      local_130[0] = (char *)(ulong)local_88;
      _fprintf(*(FILE **)PTR____stderrp_100004018,"Unrecogized command line argument:\'-%i\'\n");
      local_130[0] = local_50;
      _fprintf((FILE *)*local_f0,"\n%s\n");
      local_74 = 1;
      goto LAB_100003d48;
    }
    local_81 = -1;
    local_82 = 0;
    local_88 = 100;
  }
  if (local_78 - *(int *)PTR__optind_100004078 == 1) {
    local_90 = *(char **)(local_80 + (long)*(int *)PTR__optind_100004078 * 8);
    local_98 = _strlen(local_90);
    local_108 = local_98 + 0xf & 0xfffffffffffffff0;
    local_a0 = auStack_120;
    (*(code *)PTR____chkstk_darwin_100004000)();
    lVar2 = -local_108;
    local_100 = auStack_120 + lVar2;
    local_b0 = (char *)0x0;
    for (local_b8 = 0; local_b8 < local_98; local_b8 = local_b8 + 1) {
      iVar4 = _isalpha((int)local_90[local_b8]);
      if (iVar4 == 0) {
        _fprintf(*(FILE **)PTR____stderrp_100004018,"Invalid key\n");
        local_74 = 2;
        goto LAB_100003d3c;
      }
      iVar4 = _isupper((int)local_90[local_b8]);
      local_bd = 'A';
      if (iVar4 == 0) {
        local_bd = 'a';
      }
      local_100[local_b8] = (local_90[local_b8] - local_bd) * local_81;
    }
    do {
      _fflush(*(FILE **)PTR____stdoutp_100004028);
      if ((local_82 & 1) == 0) {
        local_110 = &local_70;
      }
      else {
        local_110 = &local_60;
      }
      *(undefined6 **)((long)local_130 + lVar2) = local_110;
      iVar4 = _printf("%s");
      local_b0 = (char *)_get_input(iVar4);
      if (local_b0 == (char *)0x0) {
        _fprintf(*(FILE **)PTR____stderrp_100004018,"Error getting input\n");
        local_74 = 4;
        goto LAB_100003d3c;
      }
      iVar4 = _strcmp(local_b0,"");
    } while (iVar4 == 0);
    local_c8 = _strlen(local_b0);
    local_d0 = _calloc(local_c8 + 1,1);
    if (local_d0 == (void *)0x0) {
      _fprintf(*(FILE **)PTR____stderrp_100004018,"Memory error\n");
      local_74 = 5;
    }
    else {
      local_e0 = 0;
      for (local_d8 = 0; pvVar3 = local_d0, local_d8 < local_c8; local_d8 = local_d8 + 1) {
        iVar4 = _isalpha((int)local_b0[local_d8]);
        if (iVar4 == 0) {
          *(char *)((long)local_d0 + local_d8) = local_b0[local_d8];
        }
        else {
          iVar4 = _isupper((int)local_b0[local_d8]);
          local_e1 = 0x41;
          if (iVar4 == 0) {
            local_e1 = 0x61;
          }
          iVar4 = (((int)local_b0[local_d8] + (int)(char)local_100[local_e0]) - (uint)local_e1) +
                  0x1a;
          *(byte *)((long)local_d0 + local_d8) =
               (char)iVar4 + (char)(iVar4 / 0x1a) * -0x1a + local_e1;
          uVar1 = 0;
          if (local_98 != 0) {
            uVar1 = (local_e0 + 1U) / local_98;
          }
          local_e0 = (local_e0 + 1U) - uVar1 * local_98;
        }
      }
      *(undefined *)((long)local_d0 + local_c8) = 0;
      if ((local_82 & 1) == 0) {
        local_118 = &local_60;
      }
      else {
        local_118 = &local_70;
      }
      *(undefined6 **)((long)local_130 + lVar2) = local_118;
      *(void **)((long)local_130 + lVar2 + 8) = pvVar3;
      _printf("%s%s\n");
      _free(local_d0);
      _free(local_b0);
      local_74 = 0;
    }
LAB_100003d3c:
    local_bc = 1;
  }
  else {
    local_f8 = (undefined8 *)PTR____stderrp_100004018;
    local_130[0] = *(char **)local_80;
    _fprintf(*(FILE **)PTR____stderrp_100004018,"%s requires one argument and one only\n");
    local_130[0] = local_50;
    _fprintf((FILE *)*local_f8,"\n%s\n");
    local_74 = 1;
  }
LAB_100003d48:
  local_11c = local_74;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_74;
}



char * _get_input(void)

{
  size_t sVar1;
  char *local_18;
  
  local_18 = (char *)_malloc(0x1000);
  if (local_18 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    _fgets(local_18,0x1000,*(FILE **)PTR____stdinp_100004020);
    sVar1 = _strlen(local_18);
    if (local_18[sVar1 - 1] == '\n') {
      local_18[sVar1 - 1] = '\0';
    }
  }
  return local_18;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004040)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004050)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getopt(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getopt_100004058)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isalpha(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isalpha_100004060)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isupper_100004068)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004070)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004080)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004088)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004090)();
  return sVar1;
}


