#include "cistercian-numerals.h"



void _initN(void)

{
  int local_8;
  int local_4;
  
  for (local_4 = 0; local_4 < 0xf; local_4 = local_4 + 1) {
    for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
      (&_canvas)[(long)local_8 + (long)local_4 * 0xf] = 0x20;
    }
    *(undefined *)((long)local_4 * 0xf + 0x100008005) = 0x78;
  }
  return;
}



void _horizontal(ulong param_1,ulong param_2,long param_3)

{
  ulong local_20;
  
  for (local_20 = param_1; local_20 <= param_2; local_20 = local_20 + 1) {
    (&_canvas)[local_20 + param_3 * 0xf] = 0x78;
  }
  return;
}



void _vertical(ulong param_1,ulong param_2,long param_3)

{
  ulong local_20;
  
  for (local_20 = param_1; local_20 <= param_2; local_20 = local_20 + 1) {
    (&_canvas)[param_3 + local_20 * 0xf] = 0x78;
  }
  return;
}



void _diagd(ulong param_1,ulong param_2,long param_3)

{
  ulong local_20;
  
  for (local_20 = param_1; local_20 <= param_2; local_20 = local_20 + 1) {
    (&_canvas)[param_3 * 0xf + local_20 * 0x10 + param_1 * -0xf] = 0x78;
  }
  return;
}



void _diagu(ulong param_1,ulong param_2,long param_3)

{
  ulong local_20;
  
  for (local_20 = param_1; local_20 <= param_2; local_20 = local_20 + 1) {
    (&_canvas)[param_3 * 0xf + local_20 * -0xe + param_1 * 0xf] = 0x78;
  }
  return;
}



void _drawOnes(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    _horizontal(6,10,0);
    break;
  case 2:
    _horizontal(6,10,4);
    break;
  case 3:
    _diagd(6,10,0);
    break;
  case 4:
    _diagu(6,10,4);
    break;
  case 5:
    _drawOnes(1);
    _drawOnes(4);
    break;
  case 6:
    _vertical(0,4,10);
    break;
  case 7:
    _drawOnes(1);
    _drawOnes(6);
    break;
  case 8:
    _drawOnes(2);
    _drawOnes(6);
    break;
  case 9:
    _drawOnes(1);
    _drawOnes(8);
  }
  return;
}



void _drawTens(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    _horizontal(0,4);
    break;
  case 2:
    _horizontal(0,4);
    break;
  case 3:
    _diagu(0,4);
    break;
  case 4:
    _diagd(0,4);
    break;
  case 5:
    _drawTens(1);
    _drawTens(4);
    break;
  case 6:
    _vertical(0,4);
    break;
  case 7:
    _drawTens(1);
    _drawTens(6);
    break;
  case 8:
    _drawTens(2);
    _drawTens(6);
    break;
  case 9:
    _drawTens(1);
    _drawTens(8);
  }
  return;
}



void _drawHundreds(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    _horizontal(6,10,0xe);
    break;
  case 2:
    _horizontal(6,10);
    break;
  case 3:
    _diagu(6,10,0xe);
    break;
  case 4:
    _diagd(6,10);
    break;
  case 5:
    _drawHundreds(1);
    _drawHundreds(4);
    break;
  case 6:
    _vertical(10,0xe);
    break;
  case 7:
    _drawHundreds(1);
    _drawHundreds(6);
    break;
  case 8:
    _drawHundreds(2);
    _drawHundreds(6);
    break;
  case 9:
    _drawHundreds(1);
    _drawHundreds(8);
  }
  return;
}



void _drawThousands(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    _horizontal(0,4,0xe);
    break;
  case 2:
    _horizontal(0,4,10);
    break;
  case 3:
    _diagd(0,4,10);
    break;
  case 4:
    _diagu(0,4,0xe);
    break;
  case 5:
    _drawThousands(1);
    _drawThousands(4);
    break;
  case 6:
    _vertical(10,0xe,0);
    break;
  case 7:
    _drawThousands(1);
    _drawThousands(6);
    break;
  case 8:
    _drawThousands(2);
    _drawThousands(6);
    break;
  case 9:
    _drawThousands(1);
    _drawThousands(8);
  }
  return;
}



void _draw(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_1 % 1000) / 100;
  iVar3 = (param_1 % 1000) % 100;
  iVar2 = iVar3 / 10;
  iVar3 = iVar3 % 10;
  if (0 < param_1 / 1000) {
    _drawThousands(param_1 / 1000);
  }
  if (0 < iVar1) {
    _drawHundreds(iVar1);
  }
  if (0 < iVar2) {
    _drawTens(iVar2);
  }
  if (0 < iVar3) {
    _drawOnes(iVar3);
  }
  return;
}



ssize_t _write(int param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  FILE *pFVar2;
  int local_1c;
  FILE *pFVar3;
  
  pFVar2 = (FILE *)(ulong)(uint)param_1;
  pFVar3 = pFVar2;
  for (local_1c = 0; local_1c < 0xf; local_1c = local_1c + 1) {
    _fprintf(pFVar2,"%-.*s");
    uVar1 = _putc(10,pFVar2);
    pFVar3 = (FILE *)(ulong)uVar1;
  }
  return (ssize_t)pFVar3;
}



int _test(undefined4 param_1,undefined8 param_2,size_t param_3)

{
  int iVar1;
  void *extraout_x1;
  
  iVar1 = _printf("%d:\n");
  _initN(iVar1);
  _draw(param_1);
  _write((int)*(undefined8 *)PTR____stdoutp_100004000,extraout_x1,param_3);
  iVar1 = _printf("\n\n");
  return iVar1;
}



undefined4 entry(void)

{
  _test();
  _test(1);
  _test(0x14);
  _test(300);
  _test(4000);
  _test(0x15b3);
  _test(0x1a85);
  _test(9999);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putc(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putc_100004018)(param_1);
  return iVar1;
}


