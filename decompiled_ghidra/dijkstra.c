#include "dijkstra.h"



int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void FUN_00101070(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = puts(__s);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  qsort(__base,__nmemb,__size,__compar);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = printf(__format);
  return iVar1;
}



void __isoc99_scanf(void)

{
  __isoc99_scanf();
  return;
}



void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00101103)
// WARNING: Removing unreachable block (ram,0x0010110f)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00101144)
// WARNING: Removing unreachable block (ram,0x00101150)

void register_tm_clones(void)

{
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  FUN_00101070(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



void frame_dummy(void)

{
  register_tm_clones();
  return;
}



void enqueue(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = (long)qp;
  qp = qp + 1;
  *(undefined4 *)(q + lVar1 * 4) = param_1;
  return;
}



int cf(int *param_1,int *param_2)

{
  return *param_2 - *param_1;
}



undefined4 dequeue(void)

{
  qsort(q,(long)qp,4,cf);
  qp = qp + -1;
  return *(undefined4 *)(q + (long)qp * 4);
}



bool queue_has_something(void)

{
  return 0 < qp;
}



void dijkstra(int param_1)

{
  int iVar1;
  long lVar2;
  int local_10;
  
  *(undefined4 *)(dist + (long)param_1 * 4) = 0;
  for (local_10 = 0; local_10 < V; local_10 = local_10 + 1) {
    if (local_10 != param_1) {
      *(undefined4 *)(dist + (long)local_10 * 4) = 999;
    }
    enqueue(local_10);
  }
  while (iVar1 = queue_has_something(), iVar1 != 0) {
    iVar1 = dequeue();
    lVar2 = (long)vp;
    vp = vp + 1;
    *(int *)(visited + lVar2 * 4) = iVar1;
    for (local_10 = 0; local_10 < V; local_10 = local_10 + 1) {
      if ((*(int *)(mat + ((long)iVar1 * 0x14 + (long)local_10) * 4) != 0) &&
         (*(int *)(mat + ((long)iVar1 * 0x14 + (long)local_10) * 4) +
          *(int *)(dist + (long)iVar1 * 4) < *(int *)(dist + (long)local_10 * 4))) {
        *(int *)(dist + (long)local_10 * 4) =
             *(int *)(dist + (long)iVar1 * 4) +
             *(int *)(mat + ((long)iVar1 * 0x14 + (long)local_10) * 4);
      }
    }
  }
  return;
}



undefined8 main(void)

{
  uint local_10;
  int local_c;
  
  printf("Enter the number of vertices: ");
  __isoc99_scanf(&DAT_00102027,&V);
  printf("Enter the adj matrix: ");
  for (local_10 = 0; (int)local_10 < V; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < V; local_c = local_c + 1) {
      __isoc99_scanf(&DAT_00102027,mat + ((long)(int)local_10 * 0x14 + (long)local_c) * 4);
    }
  }
  dijkstra(0);
  puts("\nNode\tDist");
  for (local_10 = 0; (int)local_10 < V; local_10 = local_10 + 1) {
    printf("%d\t%d\n",(ulong)local_10,(ulong)*(uint *)(dist + (long)(int)local_10 * 4));
  }
  return 0;
}



void _fini(void)

{
  return;
}


