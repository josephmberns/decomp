#include "continued-fraction-arithmetic-g-matrix-ng-continued-fraction-n--2.h"



void _generator_t_initialize(long param_1)

{
  undefined8 *local_20;
  
  if (param_1 != 0) {
    ___memcpy_chk(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                  *(long *)(param_1 + 8) << 3,0xffffffffffffffff);
    for (local_20 = *(undefined8 **)(param_1 + 0x20); local_20 != (undefined8 *)0x0;
        local_20 = (undefined8 *)local_20[1]) {
      _generator_t_initialize(*local_20);
    }
  }
  return;
}



void _generator_t_free(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  
  if (param_1 != (void *)0x0) {
    _free(*(void **)((long)param_1 + 0x10));
    _free(*(void **)((long)param_1 + 0x18));
    local_20 = *(undefined8 **)((long)param_1 + 0x20);
    while (local_20 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)local_20[1];
      _generator_t_free(*local_20);
      _free(local_20);
      local_20 = puVar1;
    }
    _free(param_1);
  }
  return;
}



void _ftroff_generator_output(FILE *param_1,undefined8 *param_2,int param_3)

{
  undefined local_38 [10];
  byte local_2e;
  byte local_2d;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 *local_20;
  FILE *local_18;
  
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  if (0 < param_3) {
    _generator_t_initialize(param_2);
    local_28 = 0;
    local_2c = 0;
    local_2d = 0;
    while ((local_2d & 1) == 0) {
      if (local_28 == local_24) {
        _fprintf(local_18,", ~ ... ~ ]");
        local_2d = 1;
      }
      else {
        (*(code *)*local_20)(local_20[3],local_20[4],&local_2e,local_38);
        if ((local_2e & 1) == 0) {
          _fprintf(local_18,"^ ] ");
          local_2d = 1;
        }
        else {
          if (local_2c == 0) {
            _fprintf(local_18,"[ ^ ");
            local_2c = 1;
          }
          else if (local_2c == 1) {
            _fprintf(local_18,"; ^ ");
            local_2c = 2;
          }
          else {
            _fprintf(local_18," , ");
          }
          _fprintf(local_18,"%jd");
          local_28 = local_28 + 1;
        }
      }
    }
    _generator_t_initialize(local_20);
    return;
  }
                    // WARNING: Subroutine does not return
  ___assert_rtn("ftroff_generator_output",
                "continued-fraction-arithmetic-g-matrix-ng-continued-fraction-n--2.c",0x79,
                "1 <= max_terms");
}



undefined8 * _r2cf_make(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)_malloc(0x28);
  *puVar1 = FUN_10000327c;
  puVar1[1] = 2;
  pvVar2 = _malloc(puVar1[1] << 3);
  puVar1[2] = pvVar2;
  pvVar2 = _malloc(puVar1[1] << 3);
  puVar1[3] = pvVar2;
  *(undefined8 *)puVar1[2] = param_1;
  *(undefined8 *)(puVar1[2] + 8) = param_2;
  ___memcpy_chk(puVar1[3],puVar1[2],puVar1[1] << 3,0xffffffffffffffff);
  puVar1[4] = 0;
  return puVar1;
}



void FUN_10000327c(long *param_1,undefined8 param_2,byte *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[1];
  *param_3 = lVar3 != 0;
  if ((*param_3 & 1) != 0) {
    lVar4 = *param_1;
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar4 / lVar3;
    }
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar4 / lVar3;
    }
    *param_1 = lVar3;
    param_1[1] = lVar4 - lVar2 * lVar3;
    *param_4 = lVar1;
  }
  return;
}



undefined8 * _sqrt2_make(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)_malloc(0x28);
  *puVar1 = FUN_1000033e0;
  puVar1[1] = 1;
  pvVar2 = _malloc(puVar1[1] << 3);
  puVar1[2] = pvVar2;
  pvVar2 = _malloc(puVar1[1] << 3);
  puVar1[3] = pvVar2;
  *(undefined8 *)puVar1[2] = 1;
  ___memcpy_chk(puVar1[3],puVar1[2],puVar1[1] << 3,0xffffffffffffffff);
  puVar1[4] = 0;
  return puVar1;
}



void FUN_1000033e0(undefined8 *param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  *param_3 = 1;
  *param_4 = *param_1;
  *param_1 = 2;
  return;
}



undefined8 *
_hfunc_make(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)_malloc(0x28);
  *puVar1 = FUN_10000353c;
  puVar1[1] = 4;
  pvVar2 = _malloc(puVar1[1] << 3);
  puVar1[2] = pvVar2;
  pvVar2 = _malloc(puVar1[1] << 3);
  puVar1[3] = pvVar2;
  *(undefined8 *)puVar1[2] = param_1;
  *(undefined8 *)(puVar1[2] + 8) = param_2;
  *(undefined8 *)(puVar1[2] + 0x10) = param_3;
  *(undefined8 *)(puVar1[2] + 0x18) = param_4;
  ___memcpy_chk(puVar1[3],puVar1[2],puVar1[1] << 3,0xffffffffffffffff);
  pvVar2 = _malloc(0x10);
  puVar1[4] = pvVar2;
  *(undefined8 *)puVar1[4] = param_5;
  *(undefined8 *)(puVar1[4] + 8) = 0;
  return puVar1;
}



void FUN_10000353c(long *param_1,undefined8 param_2,undefined *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  bVar3 = false;
  while (!bVar3) {
    lVar4 = param_1[2];
    lVar5 = param_1[3];
    if ((lVar4 == 0) && (lVar5 == 0)) {
      *param_3 = 0;
      bVar3 = true;
    }
    else {
      lVar6 = *param_1;
      lVar7 = param_1[1];
      if ((lVar4 == 0) || (lVar5 == 0)) {
        FUN_100003c88(param_1,param_2);
      }
      else {
        lVar1 = 0;
        if (lVar4 != 0) {
          lVar1 = lVar6 / lVar4;
        }
        lVar2 = 0;
        if (lVar5 != 0) {
          lVar2 = lVar7 / lVar5;
        }
        if (lVar1 == lVar2) {
          *param_1 = lVar4;
          param_1[1] = lVar5;
          param_1[2] = lVar6 - lVar4 * lVar2;
          param_1[3] = lVar7 - lVar5 * lVar2;
          *param_3 = 1;
          *param_4 = lVar2;
          bVar3 = true;
        }
        else {
          FUN_100003c88(param_1,param_2);
        }
      }
    }
  }
  return;
}



void _ftroff_rational_number(FILE *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = _r2cf_make(param_2,param_3);
  _fprintf(param_1,"%s %jd over %jd %s");
  _ftroff_generator_output(param_1,uVar1,0x14);
  _fprintf(param_1,"%s%s");
  _generator_t_free(uVar1);
  return;
}



void _ftroff_sqrt2(FILE *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _sqrt2_make();
  _fprintf(param_1,"%s sqrt 2 %s");
  _ftroff_generator_output(param_1,uVar1,0x14);
  _fprintf(param_1,"%s%s");
  _generator_t_free(uVar1);
  return;
}



void _ftroff_hfunc_of_rational_number
               (FILE *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = _r2cf_make(param_7,param_8);
  uVar1 = _hfunc_make(param_3,param_4,param_5,param_6,uVar1);
  _fprintf(param_1,"%s %s %s");
  _ftroff_generator_output(param_1,uVar1,0x14);
  _fprintf(param_1,"%s%s");
  _generator_t_free(uVar1);
  return;
}



void _ftroff_hfunc_of_sqrt2
               (FILE *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = _sqrt2_make();
  uVar1 = _hfunc_make(param_3,param_4,param_5,param_6,uVar1);
  _fprintf(param_1,"%s %s %s");
  _ftroff_generator_output(param_1,uVar1,0x14);
  _fprintf(param_1,"%s%s");
  _generator_t_free(uVar1);
  return;
}



void _ftroff_complicated(FILE *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _sqrt2_make();
  uVar1 = _hfunc_make(0,1,1,0,uVar1);
  uVar1 = _hfunc_make(1,1,0,1,uVar1);
  uVar1 = _hfunc_make(1,0,0,2,uVar1);
  _fprintf(param_1,"%s {1 ~ + ~ { 1 over { sqrt 2 } }} over 2 %s");
  _ftroff_generator_output(param_1,uVar1,0x14);
  _fprintf(param_1,"%s%s");
  _generator_t_free(uVar1);
  return;
}



undefined8 entry(void)

{
  FILE *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pFVar1 = *(FILE **)PTR____stdoutp_100004010;
  _fprintf(pFVar1,".nr PO 0.25i\n");
  _fprintf(pFVar1,".nr HM 0.25i\n");
  _fprintf(pFVar1,".ps 14\n");
  uVar2 = 0xd;
  uVar3 = 0xb;
  _ftroff_rational_number(pFVar1);
  _ftroff_rational_number(pFVar1);
  _ftroff_sqrt2(pFVar1);
  _ftroff_hfunc_of_rational_number(pFVar1,"{ 13 over 11 } ~ + ~ { 1 over 2 }",2);
  _ftroff_hfunc_of_rational_number
            (pFVar1,"{ 22 over 7 } ~ + ~ { 1 over 2 }",2,1,0,2,0x16,7,uVar2,uVar3);
  _ftroff_hfunc_of_rational_number
            (pFVar1,"{ ^ {\"\\s-3\" 22 over 7 \"\\s+3\"}} over 4",1,0,0,4,0x16,7);
  _ftroff_hfunc_of_sqrt2(pFVar1,"{ sqrt 2 } over 2",1,0,0,2);
  _ftroff_hfunc_of_sqrt2(pFVar1,"1 over { sqrt 2 }",0,1);
  _ftroff_hfunc_of_sqrt2(pFVar1,"{ 2 ~ + ~ { sqrt 2 }} over 4",1,2,0,4);
  _ftroff_complicated(pFVar1);
  return 0;
}



void FUN_100003c88(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_38;
  byte local_29;
  undefined8 *local_28;
  long *local_20;
  long *local_18;
  
  local_28 = (undefined8 *)*param_2;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)*local_28)(local_28[3],local_28[4],&local_29,&local_38);
  lVar1 = *local_18;
  lVar2 = local_18[2];
  if ((local_29 & 1) == 0) {
    local_18[1] = lVar1;
    local_18[3] = lVar2;
  }
  else {
    *local_18 = local_18[1] + lVar1 * local_38;
    local_18[1] = lVar1;
    local_18[2] = local_18[3] + lVar2 * local_38;
    local_18[3] = lVar2;
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003d8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003da4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003db0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dbc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}


