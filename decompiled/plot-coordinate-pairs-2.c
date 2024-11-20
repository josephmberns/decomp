#include "plot-coordinate-pairs-2.h"



void _minmax(double *param_1,int param_2,double *param_3,double *param_4,int *param_5)

{
  double dVar1;
  double local_48;
  double local_40;
  int local_2c;
  
  *param_4 = 1.0;
  local_48 = *param_1;
  local_40 = local_48;
  for (local_2c = 1; local_2c < param_2; local_2c = local_2c + 1) {
    if (param_1[local_2c] < local_40) {
      local_40 = param_1[local_2c];
    }
    if (local_48 < param_1[local_2c]) {
      local_48 = param_1[local_2c];
    }
  }
  if (local_40 == local_48) {
    local_40 = (double)(long)local_40;
    local_48 = (double)(long)local_48;
    if (local_40 == local_48) {
      local_40 = local_40 + -1.0;
      local_48 = local_48 + 1.0;
    }
  }
  else {
    dVar1 = local_48 - local_40;
    while (*param_4 < dVar1) {
      *param_4 = *param_4 * 10.0;
    }
    while (dVar1 < *param_4) {
      *param_4 = *param_4 / 10.0;
    }
    if (*param_4 <= dVar1 / 2.0) {
      if (dVar1 / 5.0 < *param_4) {
        *param_4 = *param_4 / 2.0;
      }
    }
    else {
      *param_4 = *param_4 / 5.0;
    }
  }
  *param_3 = (double)(long)(local_40 / *param_4) * *param_4;
  *param_5 = (int)((double)(long)(local_48 / *param_4) - (double)(long)(local_40 / *param_4));
  return;
}



undefined8 _plot(long param_1,long param_2,int param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  double dVar4;
  int local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  int local_bc;
  int local_b8;
  int local_b4;
  char *local_b0;
  int local_a4;
  long local_a0;
  long local_98;
  char acStack_8c [100];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_b0 = param_4;
  local_a4 = param_3;
  local_a0 = param_2;
  local_98 = param_1;
  _minmax(param_1,param_3,&local_d8,&local_c8,&local_b4);
  _minmax(local_a0,local_a4,&local_e0,&local_d0,&local_b8);
  _log10(local_c8);
  _log10(local_d0);
  local_f0 = 0;
  for (local_bc = 0; local_bc <= local_b8; local_bc = local_bc + 1) {
    NEON_fmadd((double)(long)local_bc,local_d0,local_e0);
    ___sprintf_chk(acStack_8c,0,100,"%g\n");
    sVar2 = _strlen(acStack_8c);
    if ((ulong)(long)local_f0 < sVar2) {
      sVar2 = _strlen(acStack_8c);
      local_f0 = (int)sVar2;
    }
  }
  dVar4 = (double)(local_f0 * 6);
  _printf(
         "%%!PS-Adobe-3.0\n%%%%BoundingBox: 0 0 400 300\n/TimesRoman findfont %d scalefont setfont\n/rl{rlineto}def /l{lineto}def /s{setrgbcolor}def /rm{rmoveto}def /m{moveto}def /st{stroke}def\n"
         );
  for (local_bc = 0; local_bc <= local_b8; local_bc = local_bc + 1) {
    NEON_fmadd(268.0 / (double)(long)local_b8,(double)(long)local_bc,0x4034000000000000);
    NEON_fmadd((double)(long)local_bc,local_d0,local_e0);
    _printf("0 %g m (%*.*f) show\n");
    if (local_bc != 0) {
      _printf("%g %g m 7 0 rl st\n");
    }
  }
  _printf("%g %g m %g %g l st\n");
  for (local_bc = 0; local_bc <= local_b4; local_bc = local_bc + 1) {
    NEON_fmadd((double)(long)local_bc,local_c8,local_d8);
    ___sprintf_chk(acStack_8c,0,100,"%g");
    _strlen(acStack_8c);
    NEON_fmadd((398.0 - dVar4) / (double)(long)local_b4,(double)(long)local_bc,dVar4);
    _printf("%g %g m (%s) show\n");
    if (local_bc != 0) {
      _printf("%g %g m 0 7 rl st\n");
    }
  }
  _printf("%g %g m %g %g l st\n");
  pcVar3 = _strchr(local_b0,0x72);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = _strchr(local_b0,0x62);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = _strchr(local_b0,0x67);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = _strchr(local_b0,0x6d);
        if (pcVar3 != (char *)0x0) {
          _printf("1 0 1 s\n");
        }
      }
      else {
        _printf("0 1 0 s\n");
      }
    }
    else {
      _printf("0 0 1 s\n");
    }
  }
  else {
    _printf("1 0 0 s\n");
  }
  pcVar3 = _strchr(local_b0,0x6f);
  if (pcVar3 != (char *)0x0) {
    _printf("/o { m 0 3 rm 3 -3 rl -3 -3 rl -3 3 rl closepath st} def .5 setlinewidth\n");
  }
  pcVar3 = _strchr(local_b0,0x2d);
  if (pcVar3 != (char *)0x0) {
    for (local_bc = 0; local_bc < local_a4; local_bc = local_bc + 1) {
      NEON_fmadd((*(double *)(local_98 + (long)local_bc * 8) - local_d8) /
                 (local_c8 * (double)(long)local_b4),398.0 - dVar4,dVar4);
      NEON_fmadd((*(double *)(local_a0 + (long)local_bc * 8) - local_e0) /
                 (local_d0 * (double)(long)local_b8),0x4070c00000000000,0x4034000000000000);
      _printf("%g %g %s ");
    }
    _printf("st\n");
  }
  pcVar3 = _strchr(local_b0,0x6f);
  if (pcVar3 != (char *)0x0) {
    for (local_bc = 0; local_bc < local_a4; local_bc = local_bc + 1) {
      NEON_fmadd((*(double *)(local_98 + (long)local_bc * 8) - local_d8) /
                 (local_c8 * (double)(long)local_b4),398.0 - dVar4,dVar4);
      NEON_fmadd((*(double *)(local_a0 + (long)local_bc * 8) - local_e0) /
                 (local_d0 * (double)(long)local_b8),0x4070c00000000000,0x4034000000000000);
      _printf("%g %g o ");
    }
  }
  iVar1 = _printf("showpage\n%%EOF");
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



undefined8 entry(void)

{
  double dVar1;
  double dVar2;
  int local_18;
  
  for (local_18 = 0; local_18 < 0x28; local_18 = local_18 + 1) {
    *(double *)(&_x + (long)local_18 * 8) = ((double)(long)local_18 / 40.0) * 3.14159 * 6.0;
    dVar1 = (double)_exp(*(double *)(&_x + (long)local_18 * 8) / 10.0);
    dVar2 = (double)_cos(*(undefined8 *)(&_x + (long)local_18 * 8));
    *(double *)(&_y + (long)local_18 * 8) = (dVar1 + dVar2) / 100.0 + -1337.0;
  }
  _plot(&_x,&_y,0x28,"r-o");
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004018)();
  return;
}



void _exp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exp_100004020)();
  return;
}



void _log10(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log10_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d98. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004038)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003da4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004040)();
  return sVar1;
}


