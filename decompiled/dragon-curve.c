#include "dragon-curve.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _sc_up(void)

{
  long lVar1;
  
  lVar1 = __dx - __dy;
  __dy = __dx + __dy;
  __dx = lVar1;
  __scale = __scale << 1;
  __x = __x << 1;
  __y = __y << 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _h_rgb(long param_1,long param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  pdVar1 = (double *)(*(long *)(__pix + param_2 * 8) + param_1 * 0x18);
  dVar2 = ((double)__clen * 6.0) / (double)__scale;
  dVar3 = (double)_cos(((double)__clen * 201.061929829056) / (double)__scale);
  dVar3 = (1.0 - (dVar3 - 1.0) / 4.0) * 1.0;
  dVar4 = (double)_fmod(dVar2,0x4000000000000000);
  dVar4 = dVar3 * (1.0 - ABS(dVar4 - 1.0));
  switch((int)dVar2) {
  case 0:
    *pdVar1 = *pdVar1 + dVar3;
    pdVar1[1] = pdVar1[1] + dVar4;
    break;
  case 1:
    *pdVar1 = *pdVar1 + dVar4;
    pdVar1[1] = pdVar1[1] + dVar3;
    break;
  case 2:
    pdVar1[1] = pdVar1[1] + dVar3;
    pdVar1[2] = pdVar1[2] + dVar4;
    break;
  case 3:
    pdVar1[1] = pdVar1[1] + dVar4;
    pdVar1[2] = pdVar1[2] + dVar3;
    break;
  case 4:
    *pdVar1 = *pdVar1 + dVar4;
    pdVar1[2] = pdVar1[2] + dVar3;
    break;
  default:
    *pdVar1 = *pdVar1 + dVar3;
    pdVar1[2] = pdVar1[2] + dVar4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _iter_string(char *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *local_18;
  
  local_18 = param_1;
  while (*local_18 != '\0') {
    pcVar1 = local_18 + 1;
    switch(*local_18) {
    case '+':
      lVar3 = -__dx;
      __dx = __dy;
      __dy = lVar3;
      local_18 = pcVar1;
      break;
    default:
      local_18 = pcVar1;
      break;
    case '-':
      lVar3 = __dx;
      __dx = -__dy;
      __dy = lVar3;
      local_18 = pcVar1;
      break;
    case 'F':
      __clen = __clen + 1;
      lVar3 = 0;
      if (__scale != 0) {
        lVar3 = __x / __scale;
      }
      lVar2 = 0;
      if (__scale != 0) {
        lVar2 = __y / __scale;
      }
      _h_rgb(lVar3,lVar2);
      __x = __x + __dx;
      __y = __y + __dy;
      local_18 = pcVar1;
      break;
    case 'X':
      local_18 = pcVar1;
      if (param_2 != 0) {
        _iter_string("X+YF+",param_2 + -1);
      }
      break;
    case 'Y':
      local_18 = pcVar1;
      if (param_2 != 0) {
        _iter_string("-FX-Y",param_2 + -1);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _dragon(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *pvVar5;
  void *pvVar6;
  double local_58;
  long local_28;
  
  lVar1 = param_1 / 3 + 1;
  lVar2 = param_1 + 3;
  lVar3 = param_1 + (lVar1 * 3) / 2 + 2;
  pvVar5 = _malloc(lVar3 * 0x18 * lVar2);
  __pix = _malloc(lVar2 * 8);
  for (local_28 = 0; local_28 < lVar2; local_28 = local_28 + 1) {
    *(void **)((long)__pix + local_28 * 8) = (void *)((long)pvVar5 + lVar3 * local_28 * 0x18);
  }
  ___memset_chk(pvVar5,0,lVar3 * 0x18 * lVar2,0xffffffffffffffff);
  __dy = 0;
  __scale = 1;
  __clen = 0;
  __dx = param_1;
  __x = lVar1;
  __y = lVar1;
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    _sc_up();
  }
  _iter_string("FX",param_2);
  pvVar6 = _malloc(lVar3 * lVar2 * 3);
  local_58 = 0.0;
  local_28 = lVar3 * 3 * lVar2;
  while (local_28 = local_28 + -1, -1 < local_28) {
    if (local_58 < *(double *)((long)pvVar5 + local_28 * 8)) {
      local_58 = *(double *)((long)pvVar5 + local_28 * 8);
    }
  }
  local_28 = lVar2 * 3 * lVar3;
  while (local_28 = local_28 + -1, -1 < local_28) {
    *(char *)((long)pvVar6 + local_28) =
         (char)(int)((*(double *)((long)pvVar5 + local_28 * 8) * 255.0) / local_58);
  }
  _printf("P6\n%ld %ld\n255\n");
  puVar4 = PTR____stdoutp_100004010;
  _fflush(*(FILE **)PTR____stdoutp_100004010);
  _fwrite(pvVar6,lVar2 * lVar3 * 3,1,*(FILE **)puVar4);
  return;
}



undefined8 entry(int param_1,long param_2)

{
  uint local_2c;
  
  if (param_1 < 2) {
    local_2c = 10;
  }
  else {
    local_2c = _atoi(*(char **)(param_2 + 8));
  }
  _fprintf(*(FILE **)PTR____stderrp_100004008,"size: %d depth: %d\n");
  _dragon((long)(1 << (ulong)(local_2c & 0x1f)),local_2c << 1);
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004018)((int)param_1);
  return iVar1;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004028)((int)param_1);
  return iVar1;
}



void _fmod(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fmod_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004040)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004048)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004050)((int)param_1);
  return iVar1;
}


