# Question 5: Pointer

## Q5.2

**Topic**

```
Introduce int variables x and y and int* pointer variables p and q.
Set x to 2, y to 8, p to the address of x, and q to the address of y.
Then print the following information:
    1. The address of x and the value of x.
    2. The value of p and the value of *p.
    3. The address of y and the value of y.
    4. The value of q and the value of *q.
    5. The address of p (not its contents!).
    6. The address of q (not its contents!).
Use the Hex function to print all pointer/address values and format the output so it is easy to make comparisons.
```

**Source**

```c
#include "stdio.h"

int main() {
    int x = 2, y = 8;
    int *p = &x;
    int *q = &y;

    printf("address x = %x, address y = %x\n", &x, &y);  // 1
    printf("value p = %x, value *p = %d\n", p, *p);      // 2
    printf("address y = %x, value y = %d\n", q, *q);     // 3
    printf("value q = %x, value *q = %d\n", q, *q);      // 4
    printf("address of p= %x\n", &p);                    // 5
    printf("address of q = %x\n", &q);                   // 6
    /*
        value q hay value p là địa chỉ của y và x được 2 con trỏ này trỏ tới
    */
    return 0;
}
```

**Output**

```
address x = 61ff1c, address y = 61ff18
value p = 61ff1c, value *p = 2
address y = 61ff18, value y = 8
value q = 61ff18, value *q = 8
address of p= 61ff14
address of q = 61ff10
```

## Q5.3

**Topic**

```
Introduce int variables x, y, z and int* pointer variables p, q, r.
Set x, y, z to three distinct values. Set p, q, r to the addresses of x, y, z respectively.
    1. Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
    2. Print the message: Swapping values.
    3. Execute the swap code: z = x; x = y; y = z;
    4. Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
Draw diagrams to explain the results
```

**Source**
**Output**

## Q5.4

**Topic**

```

```

**Source**

```c

```

**Output**

```

```

## Q5.5

**Topic**

```

```

**Source**

```c

```

**Output**

```

```

## Q5.

**Topic**

```

```

**Source**

```c

```

**Output**

```

```

## Q5.

**Topic**

```

```

**Source**

```c

```

**Output**

```

```

## Q5.

**Topic**

```

```

**Source**

```c

```

**Output**

```

```
