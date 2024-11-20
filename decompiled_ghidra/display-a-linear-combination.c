#include "display-a-linear-combination.h"



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  double dVar2;
  void *local_38;
  int local_2c;
  int local_28;
  int local_24;
  
  local_28 = 0;
  local_2c = -1;
  if (param_1 == 1) {
    _printf("Usage : %s <Vector component coefficients seperated by single space>");
  }
  else {
    _printf("Vector for [");
    for (local_24 = 1; local_24 < param_1; local_24 = local_24 + 1) {
      _printf("%s,");
    }
    _printf("\b] -> ");
    local_38 = _malloc((long)(param_1 + -1) << 3);
    for (local_24 = 1; local_24 <= param_1; local_24 = local_24 + 1) {
      dVar2 = _atof(*(char **)(param_2 + (long)local_24 * 8));
      *(double *)((long)local_38 + (long)(local_24 + -1) * 8) = dVar2;
      if (*(double *)((long)local_38 + (long)(local_24 + -1) * 8) == 0.0) {
        local_28 = local_28 + 1;
      }
      if ((*(double *)((long)local_38 + (long)(local_24 + -1) * 8) != 0.0) && (local_2c == -1)) {
        local_2c = local_24 + -1;
      }
    }
    if (local_28 == param_1) {
      _printf("0");
    }
    else {
      for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
        if ((local_24 == local_2c) && (*(double *)((long)local_38 + (long)local_24 * 8) == 1.0)) {
          _printf("e%d ");
        }
        else if ((local_24 == local_2c) &&
                (*(double *)((long)local_38 + (long)local_24 * 8) == -1.0)) {
          _printf("- e%d ");
        }
        else if (((local_24 != local_2c) ||
                 (0.0 <= *(double *)((long)local_38 + (long)local_24 * 8))) ||
                (dVar2 = *(double *)((long)local_38 + (long)local_24 * 8),
                iVar1 = _abs((int)*(double *)((long)local_38 + (long)local_24 * 8)),
                ABS(dVar2) - (double)iVar1 <= 0.0)) {
          if (((local_24 != local_2c) || (0.0 <= *(double *)((long)local_38 + (long)local_24 * 8)))
             || (dVar2 = *(double *)((long)local_38 + (long)local_24 * 8),
                iVar1 = _abs((int)*(double *)((long)local_38 + (long)local_24 * 8)),
                ABS(dVar2) - (double)iVar1 != 0.0)) {
            if (((local_24 != local_2c) || (*(double *)((long)local_38 + (long)local_24 * 8) <= 0.0)
                ) || (dVar2 = *(double *)((long)local_38 + (long)local_24 * 8),
                     iVar1 = _abs((int)*(double *)((long)local_38 + (long)local_24 * 8)),
                     ABS(dVar2) - (double)iVar1 <= 0.0)) {
              if (((local_24 != local_2c) ||
                  (*(double *)((long)local_38 + (long)local_24 * 8) <= 0.0)) ||
                 (dVar2 = *(double *)((long)local_38 + (long)local_24 * 8),
                 iVar1 = _abs((int)*(double *)((long)local_38 + (long)local_24 * 8)),
                 ABS(dVar2) - (double)iVar1 != 0.0)) {
                if ((ABS(*(double *)((long)local_38 + (long)local_24 * 8)) == 1.0) &&
                   (local_24 != 0)) {
                  _printf("%c e%d ");
                }
                else if ((local_24 == 0) ||
                        ((*(double *)((long)local_38 + (long)local_24 * 8) == 0.0 ||
                         (dVar2 = *(double *)((long)local_38 + (long)local_24 * 8),
                         iVar1 = _abs((int)*(double *)((long)local_38 + (long)local_24 * 8)),
                         ABS(dVar2) - (double)iVar1 <= 0.0)))) {
                  if ((local_24 != 0) &&
                     ((*(double *)((long)local_38 + (long)local_24 * 8) != 0.0 &&
                      (dVar2 = *(double *)((long)local_38 + (long)local_24 * 8),
                      iVar1 = _abs((int)*(double *)((long)local_38 + (long)local_24 * 8)),
                      ABS(dVar2) - (double)iVar1 == 0.0)))) {
                    _labs((long)*(double *)((long)local_38 + (long)local_24 * 8));
                    _printf("%c %ld e%d ");
                  }
                }
                else {
                  _printf("%c %lf e%d ");
                }
              }
              else {
                _printf("%ld e%d ");
              }
            }
            else {
              _printf("%lf e%d ");
            }
          }
          else {
            _labs((long)*(double *)((long)local_38 + (long)local_24 * 8));
            _printf("- %ld e%d ");
          }
        }
        else {
          _printf("- %lf e%d ");
        }
      }
    }
  }
  _free(local_38);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004000)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004008)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _labs(long param_1)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__labs_100004018)();
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


