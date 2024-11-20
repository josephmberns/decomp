#include "delegates.h"



undefined8 * _NewDelegate(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(8);
  *puVar1 = param_1;
  return puVar1;
}



undefined8 _DelegateThing(long *param_1,undefined4 param_2)

{
  undefined8 local_28;
  
  if (*param_1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = (*(code *)*param_1)(param_2);
  }
  return local_28;
}



char * _defaultResponse(void)

{
  return "default implementation";
}



undefined4 * _NewDelegator(undefined4 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_malloc(0x18);
  *puVar1 = param_1;
  *(undefined8 *)(puVar1 + 2) = param_2;
  *(undefined ***)(puVar1 + 4) = &PTR__defaultResponse_100008000;
  return puVar1;
}



long _Delegator_Operation(long param_1,undefined4 param_2,long param_3)

{
  long local_30;
  
  if (param_3 == 0) {
    local_30 = _DelegateThing(*(undefined8 *)(param_1 + 0x10),param_2);
  }
  else {
    local_30 = _DelegateThing(param_3,param_2);
    if (local_30 == 0) {
      local_30 = _DelegateThing(*(undefined8 *)(param_1 + 0x10),param_2);
    }
  }
  _printf("%s\n");
  return local_30;
}



char * _thing1(void)

{
  _printf("We\'re in thing1 with value %d\n");
  return "delegate implementation";
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _NewDelegate(_thing1);
  uVar2 = _NewDelegate();
  uVar3 = _NewDelegator(0xe,"A stellar vista, Baby.");
  _Delegator_Operation(uVar3,3,0);
  _printf("Delegator returns %s\n\n");
  _Delegator_Operation(uVar3,3,uVar1);
  _printf("Delegator returns %s\n\n");
  _Delegator_Operation(uVar3,3,uVar2);
  _printf("Delegator returns %s\n\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


