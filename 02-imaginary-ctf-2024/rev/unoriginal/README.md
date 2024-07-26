# Unoriginal

## Solution

note: the decrypted form is in decrypted.c

from analyzing using ghidra, we could determine that the flag is the following: lfqc~opvqZdkjqm`wZcidbZfm`fn`wZd6130a0`0``761gdx

but the flag is still encrypted, we have to decrypt it by xor ing the encrypted flag with 5 bc the flag is encrypted by 5

use the sol.py to get the flag

FLAG: `ictf{just_another_flag_checker_a3465d5e5ee234ba}`