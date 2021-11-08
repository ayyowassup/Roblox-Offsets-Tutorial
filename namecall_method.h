// [STRING]: "__namecall"
// OFFSET 1: 0x90
// OFFSET 2: 0x18
// USAGE:
// const char* method = *(const char**)(*(DWORD*)(Table + 0x90) + 0x18);

// Decompiled using Ghidra 10.0.4
void FUN_022b710c(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  if ((((*(ulong *)(param_1 + 0x48) < *(ulong *)(param_1 + 0x28)) &&
       (lVar2 = **(long **)(*(ulong *)(param_1 + 0x28) + 8), lVar2 != 0)) &&
      (*(char *)(lVar2 + 0xb) != '\0')) && (__s1 = *(char **)(lVar2 + 0x30), __s1 != (char *)0x0)) {
    iVar1 = strcmp(__s1,"__namecall");
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x90) == 0) 
        goto ERROR;
      __s1 = (char *)(*(long *)(param_1 + 0x90) + 0x18); // Offset 1 & 2
    }
                    /* WARNING: Subroutine does not return */
    FUN_022b71a8(param_1,&DAT_02fc3372,param_2,__s1,param_3);
  }
ERROR:
                    /* WARNING: Subroutine does not return */
  FUN_022b71a8(param_1,"invalid argument #%d (%s)",param_2,param_3);
}

