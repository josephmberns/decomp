#include "tree-traversal.h"



undefined4 * _tree(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_malloc(0x18);
  *puVar1 = param_1;
  *(undefined8 *)(puVar1 + 2) = param_2;
  *(undefined8 *)(puVar1 + 4) = param_3;
  return puVar1;
}



void _destroy_tree(void *param_1)

{
  if (*(long *)((long)param_1 + 8) != 0) {
    _destroy_tree(*(undefined8 *)((long)param_1 + 8));
  }
  if (*(long *)((long)param_1 + 0x10) != 0) {
    _destroy_tree(*(undefined8 *)((long)param_1 + 0x10));
  }
  _free(param_1);
  return;
}



void _preorder(undefined4 *param_1,code *param_2)

{
  (*param_2)(*param_1);
  if (*(long *)(param_1 + 2) != 0) {
    _preorder(*(undefined8 *)(param_1 + 2),param_2);
  }
  if (*(long *)(param_1 + 4) != 0) {
    _preorder(*(undefined8 *)(param_1 + 4),param_2);
  }
  return;
}



void _inorder(undefined4 *param_1,code *param_2)

{
  if (*(long *)(param_1 + 2) != 0) {
    _inorder(*(undefined8 *)(param_1 + 2),param_2);
  }
  (*param_2)(*param_1);
  if (*(long *)(param_1 + 4) != 0) {
    _inorder(*(undefined8 *)(param_1 + 4),param_2);
  }
  return;
}



void _postorder(undefined4 *param_1,code *param_2)

{
  if (*(long *)(param_1 + 2) != 0) {
    _postorder(*(undefined8 *)(param_1 + 2),param_2);
  }
  if (*(long *)(param_1 + 4) != 0) {
    _postorder(*(undefined8 *)(param_1 + 4),param_2);
  }
  (*param_2)(*param_1);
  return;
}



void _enqueue(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x10);
  puVar1[1] = param_2;
  *puVar1 = 0;
  if (param_1[1] == 0) {
    *param_1 = puVar1;
  }
  else {
    *(undefined8 **)param_1[1] = puVar1;
  }
  param_1[1] = puVar1;
  return;
}



undefined8 _dequeue(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*param_1 + 8);
  lVar2 = *(long *)*param_1;
  _free((void *)*param_1);
  *param_1 = lVar2;
  if (*param_1 == 0) {
    param_1[1] = 0;
  }
  return uVar1;
}



bool _queue_empty(long *param_1)

{
  return *param_1 == 0;
}



void _levelorder(undefined8 param_1,code *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _enqueue(&local_30,param_1);
  while (iVar1 = _queue_empty(&local_30), iVar1 == 0) {
    puVar2 = (undefined4 *)_dequeue(&local_30);
    (*local_20)(*puVar2);
    if (*(long *)(puVar2 + 2) != 0) {
      _enqueue(&local_30,*(undefined8 *)(puVar2 + 2));
    }
    if (*(long *)(puVar2 + 4) != 0) {
      _enqueue(&local_30,*(undefined8 *)(puVar2 + 4));
    }
  }
  return;
}



int _print(void)

{
  int iVar1;
  
  iVar1 = _printf("%d ");
  return iVar1;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _tree(7,0);
  uVar1 = _tree(4,uVar1,0);
  uVar2 = _tree(5,0);
  uVar1 = _tree(2,uVar1,uVar2);
  uVar2 = _tree(8,0);
  uVar3 = _tree(9,0);
  uVar2 = _tree(6,uVar2,uVar3);
  uVar2 = _tree(3,uVar2,0);
  uVar1 = _tree(1,uVar1,uVar2);
  _printf("preorder:    ");
  _preorder(uVar1);
  _printf("\n");
  _printf("inorder:     ");
  _inorder(uVar1,_print);
  _printf("\n");
  _printf("postorder:   ");
  _postorder(uVar1,_print);
  _printf("\n");
  _printf("level-order: ");
  _levelorder(uVar1,_print);
  _printf("\n");
  _destroy_tree(uVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


