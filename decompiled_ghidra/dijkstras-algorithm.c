#include "dijkstras-algorithm.h"



void _add_vertex(long *param_1,int param_2)

{
  void *pvVar1;
  int local_28;
  int local_24;
  
  if (*(int *)((long)param_1 + 0xc) < param_2 + 1) {
    if (param_2 + *(int *)((long)param_1 + 0xc) * -2 < 0 ==
        SBORROW4(param_2,*(int *)((long)param_1 + 0xc) * 2)) {
      local_28 = param_2 + 4;
    }
    else {
      local_28 = *(int *)((long)param_1 + 0xc) << 1;
    }
    pvVar1 = _realloc((void *)*param_1,(long)local_28 << 3);
    *param_1 = (long)pvVar1;
    for (local_24 = *(int *)((long)param_1 + 0xc); local_24 < local_28; local_24 = local_24 + 1) {
      *(undefined8 *)(*param_1 + (long)local_24 * 8) = 0;
    }
    *(int *)((long)param_1 + 0xc) = local_28;
  }
  if (*(long *)(*param_1 + (long)param_2 * 8) == 0) {
    pvVar1 = _calloc(1,0x20);
    *(void **)(*param_1 + (long)param_2 * 8) = pvVar1;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  }
  return;
}



void _add_edge(long *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  long *plVar4;
  int local_3c;
  
  _add_vertex(param_1,param_2 + -0x61);
  _add_vertex(param_1,param_3 + -0x61);
  plVar4 = *(long **)(*param_1 + (long)(param_2 + -0x61) * 8);
  if (*(int *)((long)plVar4 + 0xc) <= *(int *)(plVar4 + 1)) {
    if (*(int *)((long)plVar4 + 0xc) == 0) {
      local_3c = 4;
    }
    else {
      local_3c = *(int *)((long)plVar4 + 0xc) << 1;
    }
    *(int *)((long)plVar4 + 0xc) = local_3c;
    pvVar2 = _realloc((void *)*plVar4,(long)*(int *)((long)plVar4 + 0xc) << 3);
    *plVar4 = (long)pvVar2;
  }
  piVar3 = (int *)_calloc(1,8);
  *piVar3 = param_3 + -0x61;
  piVar3[1] = param_4;
  iVar1 = *(int *)(plVar4 + 1);
  *(int *)(plVar4 + 1) = iVar1 + 1;
  *(int **)(*plVar4 + (long)iVar1 * 8) = piVar3;
  return;
}



undefined8 * _create_heap(int param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)_calloc(1,0x20);
  pvVar2 = _calloc((long)(param_1 + 1),4);
  *puVar1 = pvVar2;
  pvVar2 = _calloc((long)(param_1 + 1),4);
  puVar1[1] = pvVar2;
  pvVar2 = _calloc((long)param_1,4);
  puVar1[2] = pvVar2;
  return puVar1;
}



void _push_heap(long *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_18;
  
  if (*(int *)(param_1[2] + (long)param_2 * 4) == 0) {
    iVar1 = *(int *)(param_1 + 3) + 1;
    *(int *)(param_1 + 3) = iVar1;
  }
  else {
    iVar1 = *(int *)(param_1[2] + (long)param_2 * 4);
  }
  while ((local_18 = iVar1 / 2, 1 < iVar1 && (param_3 <= *(int *)(param_1[1] + (long)local_18 * 4)))
        ) {
    *(undefined4 *)(*param_1 + (long)iVar1 * 4) = *(undefined4 *)(*param_1 + (long)local_18 * 4);
    *(undefined4 *)(param_1[1] + (long)iVar1 * 4) = *(undefined4 *)(param_1[1] + (long)local_18 * 4)
    ;
    *(int *)(param_1[2] + (long)*(int *)(*param_1 + (long)iVar1 * 4) * 4) = iVar1;
    iVar1 = local_18;
  }
  *(int *)(*param_1 + (long)iVar1 * 4) = param_2;
  *(int *)(param_1[1] + (long)iVar1 * 4) = param_3;
  *(int *)(param_1[2] + (long)param_2 * 4) = iVar1;
  return;
}



int _min(long param_1,int param_2,int param_3,int param_4)

{
  undefined4 local_18;
  
  local_18 = param_2;
  if ((param_3 <= *(int *)(param_1 + 0x18)) &&
     (*(int *)(*(long *)(param_1 + 8) + (long)param_3 * 4) <
      *(int *)(*(long *)(param_1 + 8) + (long)param_2 * 4))) {
    local_18 = param_3;
  }
  if ((param_4 <= *(int *)(param_1 + 0x18)) &&
     (*(int *)(*(long *)(param_1 + 8) + (long)param_4 * 4) <
      *(int *)(*(long *)(param_1 + 8) + (long)local_18 * 4))) {
    local_18 = param_4;
  }
  return local_18;
}



undefined4 _pop_heap(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_20;
  
  uVar1 = *(undefined4 *)(*param_1 + 4);
  local_20 = 1;
  while( true ) {
    iVar2 = _min(param_1,*(undefined4 *)(param_1 + 3),local_20 * 2,local_20 * 2 + 1);
    if (iVar2 == *(int *)(param_1 + 3)) break;
    *(undefined4 *)(*param_1 + (long)local_20 * 4) = *(undefined4 *)(*param_1 + (long)iVar2 * 4);
    *(undefined4 *)(param_1[1] + (long)local_20 * 4) = *(undefined4 *)(param_1[1] + (long)iVar2 * 4)
    ;
    *(int *)(param_1[2] + (long)*(int *)(*param_1 + (long)local_20 * 4) * 4) = local_20;
    local_20 = iVar2;
  }
  *(undefined4 *)(*param_1 + (long)local_20 * 4) =
       *(undefined4 *)(*param_1 + (long)*(int *)(param_1 + 3) * 4);
  *(undefined4 *)(param_1[1] + (long)local_20 * 4) =
       *(undefined4 *)(param_1[1] + (long)*(int *)(param_1 + 3) * 4);
  *(int *)(param_1[2] + (long)*(int *)(*param_1 + (long)local_20 * 4) * 4) = local_20;
  *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
  return uVar1;
}



void _dijkstra(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < *(int *)(param_1 + 1); local_24 = local_24 + 1) {
    lVar2 = *(long *)(*param_1 + (long)local_24 * 8);
    *(undefined4 *)(lVar2 + 0x10) = 0x7fffffff;
    *(undefined4 *)(lVar2 + 0x14) = 0;
    *(undefined4 *)(lVar2 + 0x18) = 0;
  }
  lVar3 = *(long *)(*param_1 + (long)(param_2 + -0x61) * 8);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  lVar2 = _create_heap(*(undefined4 *)(param_1 + 1));
  _push_heap(lVar2,param_2 + -0x61,*(undefined4 *)(lVar3 + 0x10));
  while ((*(int *)(lVar2 + 0x18) != 0 && (iVar1 = _pop_heap(lVar2), iVar1 != param_3 + -0x61))) {
    plVar4 = *(long **)(*param_1 + (long)iVar1 * 8);
    *(undefined4 *)(plVar4 + 3) = 1;
    for (local_28 = 0; local_28 < *(int *)(plVar4 + 1); local_28 = local_28 + 1) {
      piVar5 = *(int **)(*plVar4 + (long)local_28 * 8);
      lVar3 = *(long *)(*param_1 + (long)*piVar5 * 8);
      if ((*(int *)(lVar3 + 0x18) == 0) &&
         (*(int *)(plVar4 + 2) + piVar5[1] <= *(int *)(lVar3 + 0x10))) {
        *(int *)(lVar3 + 0x14) = iVar1;
        *(int *)(lVar3 + 0x10) = *(int *)(plVar4 + 2) + piVar5[1];
        _push_heap(lVar2,*piVar5,*(undefined4 *)(lVar3 + 0x10));
      }
    }
  }
  return;
}



int _print_path(long *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long local_38;
  int local_24;
  int local_20;
  
  lVar3 = *(long *)(*param_1 + (long)(param_2 + -0x61) * 8);
  if (*(int *)(lVar3 + 0x10) == 0x7fffffff) {
    iVar1 = _printf("no path\n");
  }
  else {
    local_20 = 1;
    for (local_38 = lVar3; *(int *)(local_38 + 0x10) != 0;
        local_38 = *(long *)(*param_1 + (long)*(int *)(local_38 + 0x14) * 8)) {
      local_20 = local_20 + 1;
    }
    pvVar2 = _malloc((long)local_20);
    *(char *)((long)pvVar2 + (long)(local_20 + -1)) = (char)(param_2 + -0x61) + 'a';
    local_24 = 0;
    for (local_38 = lVar3; *(int *)(local_38 + 0x10) != 0;
        local_38 = *(long *)(*param_1 + (long)*(int *)(local_38 + 0x14) * 8)) {
      *(char *)((long)pvVar2 + (long)((local_20 - local_24) + -2)) =
           (char)*(undefined4 *)(local_38 + 0x14) + 'a';
      local_24 = local_24 + 1;
    }
    iVar1 = _printf("%d %.*s\n");
  }
  return iVar1;
}



undefined4 entry(void)

{
  void *pvVar1;
  
  pvVar1 = _calloc(1,0x10);
  _add_edge(pvVar1,0x61,0x62,7);
  _add_edge(pvVar1,0x61);
  _add_edge(pvVar1,0x61,0x66,0xe);
  _add_edge(pvVar1,0x62,99,10);
  _add_edge(pvVar1,0x62,100,0xf);
  _add_edge(pvVar1,99,100,0xb);
  _add_edge(pvVar1,99,0x66,2);
  _add_edge(pvVar1,100,0x65,6);
  _add_edge(pvVar1,0x65,0x66,9);
  _dijkstra(pvVar1,0x61,0x65);
  _print_path(pvVar1,0x65);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004018)();
  return pvVar1;
}


