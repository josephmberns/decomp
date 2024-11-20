#include "word-wrap-2.h"



void _wrap_text(char *param_1,int param_2)

{
  char *local_20;
  char *local_18;
  char *local_8;
  
  local_18 = (char *)0x0;
  local_8 = param_1;
  for (local_20 = param_1; *local_20 != '\0'; local_20 = local_20 + 1) {
    if (*local_20 == '\n') {
      local_8 = local_20 + 1;
    }
    if (*local_20 == ' ') {
      local_18 = local_20;
    }
    if (((long)param_2 < (long)local_20 - (long)local_8) && (local_18 != (char *)0x0)) {
      *local_18 = '\n';
      local_8 = local_18 + 1;
      local_18 = (char *)0x0;
    }
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  char acStack_26c [580];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _puts("--- 80 ---");
  _memcpy(acStack_26c,
          "In olden times when wishing still helped one, there lived a king whose daughters were all beautiful, but the youngest was so beautiful that the sun itself, which has seen so much, was astonished whenever it shone in her face. Close by the king\'s castle lay a great dark forest, and under an old lime-tree in the forest was a well, and when the day was very warm, the king\'s child went out into the forest and sat down by the side of the cool fountain, and when she was bored she took a golden ball, and threw it up on high and caught it, and this ball was her favorite plaything."
          ,0x244);
  _wrap_text(acStack_26c,0x50);
  _puts(acStack_26c);
  _puts("\n--- 72 ---");
  _memcpy(acStack_26c,
          "In olden times when wishing still helped one, there lived a king whose daughters were all beautiful, but the youngest was so beautiful that the sun itself, which has seen so much, was astonished whenever it shone in her face. Close by the king\'s castle lay a great dark forest, and under an old lime-tree in the forest was a well, and when the day was very warm, the king\'s child went out into the forest and sat down by the side of the cool fountain, and when she was bored she took a golden ball, and threw it up on high and caught it, and this ball was her favorite plaything."
          ,0x244);
  _wrap_text(acStack_26c,0x48);
  iVar1 = _puts(acStack_26c);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004018)((int)param_1);
  return iVar1;
}


