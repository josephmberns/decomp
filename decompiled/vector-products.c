#include "vector-products.h"



undefined4
_dotProduct(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,float param_5,
           undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd(param_1,param_4,param_2 * param_5);
  uVar1 = NEON_fmadd(param_3,param_6,uVar1);
  return uVar1;
}



undefined4
_crossProduct(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fnmsub(param_2,param_6,param_3 * param_5);
  NEON_fnmsub(param_3,param_4,param_1 * param_6);
  NEON_fnmsub(param_1,param_5,param_2 * param_4);
  return uVar1;
}



void _scalarTripleProduct
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 param_9;
  undefined4 uStack0000000000000004;
  undefined4 param_10;
  
  uVar1 = _crossProduct(param_4,param_5,param_6,param_9,uStack0000000000000004,param_10);
  _dotProduct(param_1,param_2,param_3,uVar1,param_5,param_6);
  return;
}



undefined4
_vectorTripleProduct
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 param_9;
  undefined4 uStack0000000000000004;
  undefined4 param_10;
  
  uVar1 = _crossProduct(param_4,param_5,param_6,param_9,uStack0000000000000004,param_10);
  uVar1 = _crossProduct(param_1,param_2,param_3,uVar1,param_5,param_6);
  return uVar1;
}



int _printVector(void)

{
  int iVar1;
  
  iVar1 = _printf("( %f, %f, %f)");
  return iVar1;
}



undefined4 entry(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = _printf("\n a = ");
  _printVector(_a,DAT_100008004,DAT_100008008,iVar1);
  iVar1 = _printf("\n b = ");
  _printVector(_b,DAT_100008010,DAT_100008014,iVar1);
  iVar1 = _printf("\n c = ");
  _printVector(_c,DAT_10000801c,DAT_100008020,iVar1);
  _dotProduct(_a,DAT_100008004,DAT_100008008,_b,DAT_100008010,DAT_100008014);
  _printf("\n a . b = %f");
  iVar1 = _printf("\n a x b = ");
  uVar3 = DAT_100008004;
  uVar4 = DAT_100008008;
  uVar2 = _crossProduct(_a,DAT_100008004,DAT_100008008,_b,DAT_100008010,DAT_100008014,iVar1);
  _printVector(uVar2,uVar3,uVar4);
  _scalarTripleProduct(_a,DAT_100008004,DAT_100008008,_b,DAT_100008010,DAT_100008014);
  _printf("\n a . (b x c) = %f");
  iVar1 = _printf("\n a x (b x c) = ");
  uVar3 = DAT_100008004;
  uVar4 = DAT_100008008;
  uVar2 = _vectorTripleProduct(_a,DAT_100008004,DAT_100008008,_b,DAT_100008010,DAT_100008014,iVar1);
  _printVector(uVar2,uVar3,uVar4);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


