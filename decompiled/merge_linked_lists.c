#include "merge_linked_lists.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _merge(void)

{
  long lVar1;
  long local_20;
  long local_10;
  long local_8;
  
  local_8 = __head1;
  local_20 = 0;
  local_10 = __head2;
  while (local_8 != 0 && local_10 != 0) {
    lVar1 = *(long *)(local_8 + 8);
    *(long *)(local_8 + 8) = local_10;
    if (lVar1 != 0) {
      local_20 = *(long *)(local_10 + 8);
      *(long *)(local_10 + 8) = lVar1;
    }
    local_8 = lVar1;
    local_10 = local_20;
  }
  return;
}



int _printlist(long param_1)

{
  int iVar1;
  long local_18;
  
  _printf("%d");
  for (local_18 = *(long *)(param_1 + 8); local_18 != 0; local_18 = *(long *)(local_18 + 8)) {
    _printf("->%d");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

undefined4 entry(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined4 *)_malloc(0x10);
  puVar2 = (undefined4 *)_malloc(0x10);
  puVar3 = (undefined4 *)_malloc(0x10);
  puVar4 = (undefined4 *)_malloc(0x10);
  puVar5 = (undefined4 *)_malloc(0x10);
  puVar6 = (undefined4 *)_malloc(0x10);
  puVar7 = (undefined4 *)_malloc(0x10);
  __head1 = puVar1;
  __head2 = puVar2;
  *puVar1 = 1;
  *(undefined4 **)(puVar1 + 2) = puVar3;
  *puVar2 = 2;
  *(undefined4 **)(puVar2 + 2) = puVar4;
  *puVar3 = 3;
  *(undefined4 **)(puVar3 + 2) = puVar5;
  *puVar4 = 4;
  *(undefined4 **)(puVar4 + 2) = puVar6;
  *puVar5 = 5;
  *(undefined4 **)(puVar5 + 2) = puVar7;
  *puVar6 = 6;
  *(undefined8 *)(puVar6 + 2) = 0;
  *puVar7 = 7;
  *(undefined8 *)(puVar7 + 2) = 0;
  _printf("Linked List 1: ");
  _printlist(__head1);
  _printf("\nLinked List 2: ");
  _printlist(__head2);
  _merge();
  _printf("\nMerged Linked List: ");
  _printlist(__head1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


