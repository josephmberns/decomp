#include "zhang-suen-thinning-algorithm.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _getBlackNeighbours(int param_1,int param_2)

{
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  for (local_c = -1; local_c < 2; local_c = local_c + 1) {
    for (local_10 = -1; local_10 < 2; local_10 = local_10 + 1) {
      if ((local_c != 0) || (local_10 != 0)) {
        local_14 = local_14 +
                   (uint)(*(char *)(*(long *)(__imageMatrix + (long)(param_1 + local_c) * 8) +
                                   (long)(param_2 + local_10)) == _imagePixel);
      }
    }
  }
  return local_14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char _getBWTransitions(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  bVar1 = false;
  if (*(char *)(*(long *)(__imageMatrix + (long)(param_1 + -1) * 8) + (long)param_2) == _blankPixel)
  {
    bVar1 = *(char *)(*(long *)(__imageMatrix + (long)(param_1 + -1) * 8) + (long)(param_2 + 1)) ==
            _imagePixel;
  }
  bVar2 = false;
  if (*(char *)(*(long *)(__imageMatrix + (long)(param_1 + -1) * 8) + (long)(param_2 + 1)) ==
      _blankPixel) {
    bVar2 = *(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + 1)) ==
            _imagePixel;
  }
  bVar3 = false;
  if (*(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + 1)) == _blankPixel)
  {
    bVar3 = *(char *)(*(long *)(__imageMatrix + (long)(param_1 + 1) * 8) + (long)(param_2 + 1)) ==
            _imagePixel;
  }
  bVar4 = false;
  if (*(char *)(*(long *)(__imageMatrix + (long)(param_1 + 1) * 8) + (long)(param_2 + 1)) ==
      _blankPixel) {
    bVar4 = *(char *)(*(long *)(__imageMatrix + (long)(param_1 + 1) * 8) + (long)param_2) ==
            _imagePixel;
  }
  bVar5 = false;
  if (*(char *)(*(long *)(__imageMatrix + (long)(param_1 + 1) * 8) + (long)param_2) == _blankPixel)
  {
    bVar5 = *(char *)(*(long *)(__imageMatrix + (long)(param_1 + 1) * 8) + (long)(param_2 + -1)) ==
            _imagePixel;
  }
  bVar6 = false;
  if (*(char *)(*(long *)(__imageMatrix + (long)(param_1 + 1) * 8) + (long)(param_2 + -1)) ==
      _blankPixel) {
    bVar6 = *(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + -1)) ==
            _imagePixel;
  }
  bVar7 = false;
  if (*(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + -1)) == _blankPixel)
  {
    bVar7 = *(char *)(*(long *)(__imageMatrix + (long)(param_1 + -1) * 8) + (long)(param_2 + -1)) ==
            _imagePixel;
  }
  bVar8 = false;
  if (*(char *)(*(long *)(__imageMatrix + (long)(param_1 + -1) * 8) + (long)(param_2 + -1)) ==
      _blankPixel) {
    bVar8 = *(char *)(*(long *)(__imageMatrix + (long)(param_1 + -1) * 8) + (long)param_2) ==
            _imagePixel;
  }
  return bVar1 + bVar2 + bVar3 + bVar4 + bVar5 + bVar6 + bVar7 + bVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _zhangSuenTest1(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = _getBlackNeighbours(param_1,param_2);
  bVar1 = false;
  if ((1 < iVar2) && (bVar1 = false, iVar2 < 7)) {
    iVar2 = _getBWTransitions(param_1,param_2);
    bVar1 = false;
    if (((iVar2 == 1) &&
        (((*(char *)(*(long *)(__imageMatrix + (long)(param_1 + -1) * 8) + (long)param_2) ==
           _blankPixel ||
          (*(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + 1)) ==
           _blankPixel)) ||
         (bVar1 = false,
         *(char *)(*(long *)(__imageMatrix + (long)(param_1 + 1) * 8) + (long)param_2) ==
         _blankPixel)))) &&
       ((bVar1 = true,
        *(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + 1)) != _blankPixel
        && (bVar1 = true,
           *(char *)(*(long *)(__imageMatrix + (long)(param_1 + 1) * 8) + (long)param_2) !=
           _blankPixel)))) {
      bVar1 = *(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + -1)) ==
              _blankPixel;
    }
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _zhangSuenTest2(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = _getBlackNeighbours(param_1,param_2);
  bVar1 = false;
  if ((1 < iVar2) && (bVar1 = false, iVar2 < 7)) {
    iVar2 = _getBWTransitions(param_1,param_2);
    bVar1 = false;
    if (((iVar2 == 1) &&
        (((*(char *)(*(long *)(__imageMatrix + (long)(param_1 + -1) * 8) + (long)param_2) ==
           _blankPixel ||
          (*(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + 1)) ==
           _blankPixel)) ||
         (bVar1 = false,
         *(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + -1)) ==
         _blankPixel)))) &&
       ((bVar1 = true,
        *(char *)(*(long *)(__imageMatrix + (long)(param_1 + -1) * 8) + (long)param_2) !=
        _blankPixel &&
        (bVar1 = true,
        *(char *)(*(long *)(__imageMatrix + (long)(param_1 + 1) * 8) + (long)param_2) != _blankPixel
        )))) {
      bVar1 = *(char *)(*(long *)(__imageMatrix + (long)param_1 * 8) + (long)(param_2 + 1)) ==
              _blankPixel;
    }
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

int _zhangSuen(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FILE *pFVar5;
  void *pvVar6;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  pFVar5 = _fopen(param_1,"r");
  _fscanf(pFVar5,"%d%d");
  _fscanf(pFVar5,"%d%d");
  if (_blankPixel < '\n') {
    _blankPixel = _blankPixel + '0';
  }
  if (_imagePixel < '\n') {
    _imagePixel = _imagePixel + '0';
  }
  _printf("\nPrinting original image :\n");
  __imageMatrix = _malloc((long)local_40 << 3);
  for (local_34 = 0; local_34 < local_40; local_34 = local_34 + 1) {
    pvVar6 = _malloc((long)(local_44 + 1));
    *(void **)((long)__imageMatrix + (long)local_34 * 8) = pvVar6;
    _fscanf(pFVar5,"%s\n");
    _printf("\n%s");
  }
  _fclose(pFVar5);
  iVar4 = local_40 + -2;
  iVar2 = local_44 + -2;
  do {
    pvVar6 = _malloc((long)(iVar4 * iVar2) << 3);
    local_3c = 0;
    for (local_34 = 1; local_34 <= iVar4; local_34 = local_34 + 1) {
      for (local_38 = 1; local_38 <= iVar2; local_38 = local_38 + 1) {
        if ((*(char *)(*(long *)((long)__imageMatrix + (long)local_34 * 8) + (long)local_38) ==
             _imagePixel) && (iVar3 = _zhangSuenTest1(local_34,local_38), iVar3 == 1)) {
          *(int *)((long)pvVar6 + (long)local_3c * 8) = local_34;
          *(int *)((long)pvVar6 + (long)local_3c * 8 + 4) = local_38;
          local_3c = local_3c + 1;
        }
      }
    }
    bVar1 = 0 < local_3c;
    for (local_34 = 0; local_34 < local_3c; local_34 = local_34 + 1) {
      *(char *)(*(long *)((long)__imageMatrix +
                         (long)*(int *)((long)pvVar6 + (long)local_34 * 8) * 8) +
               (long)*(int *)((long)pvVar6 + (long)local_34 * 8 + 4)) = _blankPixel;
    }
    _free(pvVar6);
    pvVar6 = _malloc((long)(iVar4 * iVar2) << 3);
    local_3c = 0;
    for (local_34 = 1; local_34 <= iVar4; local_34 = local_34 + 1) {
      for (local_38 = 1; local_38 <= iVar2; local_38 = local_38 + 1) {
        if ((*(char *)(*(long *)((long)__imageMatrix + (long)local_34 * 8) + (long)local_38) ==
             _imagePixel) && (iVar3 = _zhangSuenTest2(local_34,local_38), iVar3 == 1)) {
          *(int *)((long)pvVar6 + (long)local_3c * 8) = local_34;
          *(int *)((long)pvVar6 + (long)local_3c * 8 + 4) = local_38;
          local_3c = local_3c + 1;
        }
      }
    }
    for (local_34 = 0; local_34 < local_3c; local_34 = local_34 + 1) {
      *(char *)(*(long *)((long)__imageMatrix +
                         (long)*(int *)((long)pvVar6 + (long)local_34 * 8) * 8) +
               (long)*(int *)((long)pvVar6 + (long)local_34 * 8 + 4)) = _blankPixel;
    }
    _free(pvVar6);
  } while (bVar1 || 0 < local_3c);
  pFVar5 = _fopen(param_2,"w");
  _printf("\n\n\nPrinting image after applying Zhang Suen Thinning Algorithm : \n\n\n");
  for (local_34 = 0; local_34 < local_40; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < local_44; local_38 = local_38 + 1) {
      _printf("%c");
      _fprintf(pFVar5,"%c");
    }
    _printf("\n");
    _fprintf(pFVar5,"\n");
  }
  _fclose(pFVar5);
  iVar4 = _printf("\nImage also written to : %s");
  return iVar4;
}



undefined8 entry(void)

{
  undefined auStack_f0 [100];
  undefined auStack_8c [100];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _printf("Enter full path of input image file : ");
  _scanf("%s");
  _printf("Enter full path of output image file : ");
  _scanf("%s");
  _zhangSuen(auStack_8c,auStack_f0);
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

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004018)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004048)((int)param_1);
  return iVar1;
}


