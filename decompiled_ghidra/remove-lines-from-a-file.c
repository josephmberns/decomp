#include "remove-lines-from-a-file.h"



int entry(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FILE *pFVar5;
  long lVar6;
  void *pvVar7;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_14;
  
  local_44 = 1;
  local_48 = 0;
  local_4c = 0;
  local_50 = -1;
  if (param_1 == 4) {
    iVar2 = _atoi(*(char **)(param_2 + 0x18));
    if (iVar2 < 1) {
      local_14 = 0;
    }
    else {
      iVar3 = _atoi(*(char **)(param_2 + 0x10));
      if (iVar3 < 1) {
        local_14 = _fprintf(*(FILE **)PTR____stderrp_100004008,
                            "Error: <start> (%d) must be positive\n");
      }
      else {
        pFVar5 = _fopen(*(char **)(param_2 + 8),"r");
        if (pFVar5 == (FILE *)0x0) {
          local_14 = _fprintf(*(FILE **)PTR____stderrp_100004008,"No such file: %s\n");
        }
        else {
          _fseek(pFVar5,0,2);
          lVar6 = _ftell(pFVar5);
          pvVar7 = _malloc(lVar6 + 1);
          _rewind(pFVar5);
          iVar1 = local_50;
          while( true ) {
            local_50 = iVar1;
            iVar4 = _fgetc(pFVar5);
            iVar1 = local_50 + 1;
            *(char *)((long)pvVar7 + (long)iVar1) = (char)iVar4;
            if ((char)iVar4 == -1) break;
            if (*(char *)((long)pvVar7 + (long)iVar1) == '\n') {
              local_44 = local_44 + 1;
              if (local_44 == iVar3) {
                local_48 = local_50 + 2;
              }
              if (local_44 == iVar3 + iVar2) {
                local_4c = local_50 + 2;
              }
            }
          }
          if (local_44 < iVar3 + iVar2) {
            _free(pvVar7);
            _fclose(pFVar5);
            local_14 = _fprintf(*(FILE **)PTR____stderrp_100004008,
                                "Error: invalid parameters for file with %d lines\n");
          }
          else {
            ___memmove_chk((long)pvVar7 + (long)local_48,(long)pvVar7 + (long)local_4c,
                           (long)(iVar1 - local_4c),0xffffffffffffffff);
            _freopen(*(char **)(param_2 + 8),"w",pFVar5);
            _fwrite(pvVar7,(long)((iVar1 - local_4c) + local_48),1,pFVar5);
            _free(pvVar7);
            _fclose(pFVar5);
            local_14 = 0;
          }
        }
      }
    }
  }
  else {
    local_14 = _fprintf(*(FILE **)PTR____stderrp_100004008,"Usage: %s <file> <start> <count>\n");
  }
  return local_14;
}



void ___memmove_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memmove_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004028)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _freopen(char *param_1,char *param_2,FILE *param_3)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__freopen_100004040)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fseek(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fseek_100004048)((int)param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _ftell(FILE *param_1)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__ftell_100004050)();
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004058)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004060)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _rewind(FILE *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__rewind_100004068)();
  return;
}


