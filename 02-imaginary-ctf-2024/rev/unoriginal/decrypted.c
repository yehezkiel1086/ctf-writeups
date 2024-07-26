undefined8 main(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int i;
  byte flag_in [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  printf("Enter your flag here: ");
  gets((char *)flag_in);
  for (i = 0; i < 0x30; i = i + 1) {
    flag_in[i] = flag_in[i] ^ 5;
  }
  iVar1 = strcmp((char *)flag_in,"lfqc~opvqZdkjqm`wZcidbZfm`fn`wZd6130a0`0``761gdx");
  if (iVar1 == 0) {
    puts("Correct!");
  }
  else {
    puts("Incorrect.");
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}
