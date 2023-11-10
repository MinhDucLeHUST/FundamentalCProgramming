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

![](./Image/practice_1.png)
**Source**

```c
#include "stdio.h"

int main() {
    int x = 1, y = 2, z = 3;
    int *p = &x;
    int *q = &y;
    int *r = &z;

    printf("value x = %d, value y = %d, value z = %d\n", x, y, z);
    printf("value p = 0x%x, value q = 0x%x, value r = 0x%x\n", p, q, r);
    printf("value *p = %d, value *q = %d, value *r = %d\n", *p, *q, *r);
    // Swap value for step 3
    z = x;  // z = 1
    x = y;  // x = 2
    y = z;  // y = 1
    // Show result again
    printf("value x = %d, value y = %d, value z = %d\n", x, y, z);
    printf("value p = 0x%x, value q = 0x%x, value r = 0x%x\n", p, q, r);
    printf("value *p = %d, value *q = %d, value *r = %d\n", *p, *q, *r);
    /*
        Chúng ta chỉ thay đổi giá trị của các biến chứ không thay đổi địa chỉ của chúng
        Vì thế mà p,q,r không thay đổi về mặt địa chỉ mà chúng trỏ tới
    */
    return 0;
}
```

**Output**

```
value x = 1, value y = 2, value z = 3
value p = 0x61ff10, value q = 0x61ff0c, value r = 0x61ff08
value *p = 1, value *q = 2, value *r = 3
value x = 2, value y = 1, value z = 1
value p = 0x61ff10, value q = 0x61ff0c, value r = 0x61ff08
value *p = 2, value *q = 1, value *r = 1
```

## Q5.4

**Topic**

```
Introduce int variables x, y, z and int* pointer variables p, q, r.
Set x, y, z to three distinct values. Set p, q, r to the addresses of x, y, z respectively.
    1. Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
    2. Print the message: Swapping pointers.
    3. Execute the swap code: r = p; p = q; q = r;
    4. Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
Draw diagrams to explain the results
```

**Source**

```c
#include "stdio.h"

int main() {
    int x = 1, y = 2, z = 3;
    int *p = &x;
    int *q = &y;
    int *r = &z;

    printf("value x = %d, value y = %d, value z = %d\n", x, y, z);
    printf("value p = 0x%x, value q = 0x%x, value r = 0x%x\n", p, q, r);
    printf("value *p = %d, value *q = %d, value *r = %d\n", *p, *q, *r);
    // result: value p = 0x61ff10, value q = 0x61ff0c, value r = 0x61ff08
    printf("Swapping pointers!\n");
    // Swap value for step 3
    r = p;  // r = 0x61ff10
    p = q;  // p = 0x61ff0c
    q = r;  // q = 0x61ff10
    // Show result again
    printf("value x = %d, value y = %d, value z = %d\n", x, y, z);
    printf("value p = 0x%x, value q = 0x%x, value r = 0x%x\n", p, q, r);
    printf("value *p = %d, value *q = %d, value *r = %d\n", *p, *q, *r);
    return 0;
}
```

**Output**

```
value x = 1, value y = 2, value z = 3
value p = 0x61ff10, value q = 0x61ff0c, value r = 0x61ff08
value *p = 1, value *q = 2, value *r = 3
Swapping pointers!
value x = 1, value y = 2, value z = 3
value p = 0x61ff0c, value q = 0x61ff10, value r = 0x61ff10
value *p = 2, value *q = 1, value *r = 1
```

## Q5.5

**Topic**
Draw diagrams to explain the results:

```c
#include "stdio.h"

int main() {
    int a[4] = {4, 5, 12, 9};
    int *p = a;  // con trỏ p sẽ trỏ đến địa chỉ của index đầu tiên của mảng a, tức là a[0]
    /*
        a và &a là địa chỉ của mảng a, địa chỉ của phần tử đầu tiên của mảng
        *a là giá trị của phần tử đầu tiên của mảng

    */
    printf("a = 0x%x, *a = 0x%x, &a = 0x%x\n", a, *a, &a);
    /*
        p: địa chỉ mà con trỏ p trỏ tới
        *p: giá trị tại địa chỉ trỏ tới
        &p: địa chỉ riêng của con trỏ
    */
    printf("p = 0x%x, *p = 0x%x, &p = 0x%x\n", p, *p, &p);
    printf("(a+1) = 0x%x, *(a+1) = 0x%x, *a+1 = 0x%x, &a+1 = 0x%x\n", (a + 1), *(a + 1), *a + 1, &a + 1);
    printf("(p+1) = 0x%x, *(p+1) = 0x%x, *p+1 = 0x%x, &p + 1 = 0x%x\n", (p + 1), *(p + 1), *p + 1, &p + 2);
    return 0;
}
```

**Output**

```
a = 0x61ff10, *a = 0x4, &a = 0x61ff10
p = 0x61ff10, *p = 0x4, &p = 0x61ff0c
(a+1) = 0x61ff14, *(a+1) = 0x5, *a+1 = 0x5, &a+1 = 0x61ff20
(p+1) = 0x61ff14, *(p+1) = 0x5, *p+1 = 0x5, &p + 1 = 0x61ff14
```

**Explain**

![](./Image/practice_2.png)

## Q5.6

**Topic**

- Detect and solve problems of following program:
  ```
  void main() {
      int a[4] = {1, 2, 3, 4};
      int *p = a;
      int *p2 = new int;
      delete p;
      delete a;
      delete p2;
  }
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
