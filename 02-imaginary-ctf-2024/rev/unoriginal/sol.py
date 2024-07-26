enc_flag = "lfqc~opvqZdkjqm`wZcidbZfm`fn`wZd6130a0`0``761gdx"

flag = []

for x in enc_flag:
    flag.append(chr(ord(x) ^ 5))
    
print("".join(flag))