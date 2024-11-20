#include "rendezvous-1.h"



undefined4 _enter_rendezvous(pthread_mutex_t *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  _pthread_mutex_lock(param_1);
  *(int *)(param_1[3].__opaque + 0x10) = *(int *)(param_1[3].__opaque + 0x10) + 1;
  _pthread_cond_signal((pthread_cond_t *)(param_1 + 1));
  while (*(int *)(param_1[3].__opaque + 0x14) == 0) {
    _pthread_cond_wait((pthread_cond_t *)(param_1[1].__opaque + 0x28),param_1);
  }
  uVar1 = (**(code **)(param_1[3].__opaque + 8))(param_2);
  param_1[3].__opaque[0x18] = '\x01';
  param_1[3].__opaque[0x19] = '\0';
  param_1[3].__opaque[0x1a] = '\0';
  param_1[3].__opaque[0x1b] = '\0';
  _pthread_cond_signal((pthread_cond_t *)(param_1[2].__opaque + 0x18));
  *(int *)(param_1[3].__opaque + 0x10) = *(int *)(param_1[3].__opaque + 0x10) + -1;
  param_1[3].__opaque[0x14] = '\0';
  param_1[3].__opaque[0x15] = '\0';
  param_1[3].__opaque[0x16] = '\0';
  param_1[3].__opaque[0x17] = '\0';
  _pthread_mutex_unlock(param_1);
  return uVar1;
}



int _accept_rendezvous(pthread_mutex_t *param_1)

{
  int iVar1;
  
  _pthread_mutex_lock(param_1);
  param_1[3].__opaque[0x14] = '\x01';
  param_1[3].__opaque[0x15] = '\0';
  param_1[3].__opaque[0x16] = '\0';
  param_1[3].__opaque[0x17] = '\0';
  while (*(int *)(param_1[3].__opaque + 0x10) == 0) {
    _pthread_cond_wait((pthread_cond_t *)(param_1 + 1),param_1);
  }
  _pthread_cond_signal((pthread_cond_t *)(param_1[1].__opaque + 0x28));
  while (*(int *)(param_1[3].__opaque + 0x18) == 0) {
    _pthread_cond_wait((pthread_cond_t *)(param_1[2].__opaque + 0x18),param_1);
  }
  param_1[3].__opaque[0x18] = '\0';
  param_1[3].__opaque[0x19] = '\0';
  param_1[3].__opaque[0x1a] = '\0';
  param_1[3].__opaque[0x1b] = '\0';
  param_1[3].__opaque[0x14] = '\0';
  param_1[3].__opaque[0x15] = '\0';
  param_1[3].__opaque[0x16] = '\0';
  param_1[3].__opaque[0x17] = '\0';
  iVar1 = _pthread_mutex_unlock(param_1);
  return iVar1;
}



void _print_line(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = param_1;
  local_28 = param_2;
  local_20 = param_2;
  local_18 = param_1;
  _enter_rendezvous(param_1,&local_30);
  return;
}



undefined4 _accept_print(long *param_1)

{
  long lVar1;
  char *local_38;
  undefined4 local_14;
  
  lVar1 = *param_1;
  local_38 = (char *)param_1[1];
  if (*(int *)(lVar1 + 0xf4) == 0) {
    if (*(long *)(lVar1 + 0xe8) == 0) {
      local_14 = 0xffffffff;
    }
    else {
      local_14 = _print_line(*(undefined8 *)(lVar1 + 0xe8),local_38);
    }
  }
  else {
    _printf("%d: ");
    while (*local_38 != '\0') {
      _putchar((int)*local_38);
      local_38 = local_38 + 1;
    }
    _putchar(10);
    *(int *)(lVar1 + 0xf4) = *(int *)(lVar1 + 0xf4) + -1;
    local_14 = 1;
  }
  return local_14;
}



void _printer_thread(undefined8 param_1)

{
  do {
    _accept_rendezvous(param_1);
  } while( true );
}



undefined8 _poem_thread(long param_1)

{
  int iVar1;
  uint local_24;
  
  local_24 = 0;
  while( true ) {
    if (*(char **)(param_1 + 8 + (ulong)local_24 * 8) == "") {
      return 0;
    }
    iVar1 = _print_line(&_main_printer,*(undefined8 *)(param_1 + 8 + (ulong)local_24 * 8));
    if (iVar1 < 0) break;
    local_24 = local_24 + 1;
  }
  _printf("      %s out of ink!\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



undefined8 entry(void)

{
  int iVar1;
  pthread_t local_38;
  pthread_t local_30;
  pthread_t local_28;
  pthread_t local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _pthread_create(&local_38,(pthread_attr_t *)0x0,(void **)_poem_thread,&_humpty_dumpty);
  _pthread_create(&local_30,(pthread_attr_t *)0x0,(void **)_poem_thread,&_mother_goose);
  _pthread_create(&local_28,(pthread_attr_t *)0x0,(void **)_printer_thread,&_main_printer);
  _pthread_create(&local_20,(pthread_attr_t *)0x0,(void **)_printer_thread,&_backup_printer);
  _pthread_join(local_38,(void **)0x0);
  _pthread_join(local_30,(void **)0x0);
  _pthread_cancel(local_28);
  iVar1 = _pthread_cancel(local_20);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003da8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003db4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_cancel(pthread_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_cancel_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_cond_signal(pthread_cond_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_cond_signal_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_cond_wait(pthread_cond_t *param_1,pthread_mutex_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_cond_wait_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_create_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_join(pthread_t param_1,void **param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dfc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_join_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_lock_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pthread_mutex_unlock_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004058)(param_1);
  return iVar1;
}


