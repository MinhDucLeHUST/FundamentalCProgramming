```python
Author: du.pham
Edited: duc5.le
```

# 2. String

**Định nghĩa**

- **String** là một tập hợp các kí tự được kết thúc bằng kí tự null '\0'.
- Sự khác nhau giữa mảng kí tự và chuối trong C là chuỗi trong C được kết thúc bằng kí tự '\0'.

**Example**

```c
#include <stdio.h>

int main()
{

    // array declaration and initialization
    char arr[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char arr1[] = "Hello world";
	printf("%s\n", arr);
    printf("%s", arr1);
    return 0;
}
```

**Output**

```
hello
Hello world
```

**Một số cách khai báo String trong C**

```c
#include <stdio.h>

int main()
{

    //Sử dụng khai báo như mảng thông thường;
    char arr[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char arr1[] = "Hello world";
    //Sử dụng con trỏ;
    char *myString = "Pham Van Du";
    const char *myString1 = "Pham Van Du";
	printf("%s\n", arr);
    printf("%s\n", arr1);
    printf("%s\n", myString);
    printf("%s\n", myString1);
    return 0;
}
```

**Output**

```
hello
Hello world
Pham Van Du
Pham Van Du
```

## Sự khác biệt về kiểu khai báo trong string

**Khai báo theo dạng mảng thông thường**

- Khi ta khai báo string theo dạng mảng thông thường, lúc này dữ liệu của ta sẽ được lưu trữ trên RAM, do đó mà chúng ta có thể thay đổi được string hoặc thay đổi 1 kí tự trong string.

**Example**

```c
#include <stdio.h>

int main()
{

    //Sử dụng khai báo như mảng thông thường;
    char arr[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char arr1[] = "Hello world";
    arr[0] = 'H';
    arr1[0] = 'h';
	printf("%s\n", arr);
    printf("%s\n", arr1);
    return 0;
}
```

**Output**

```
Hello
hello world
```

**Khai báo dạng con trỏ**

Khi ta khai báo string theo dạng con trỏ, lúc này dữ liệu của ta sẽ được lưu trữ trên ROM, do đó mà chúng ta không thể thay đổi 1 kí tự trong string.

```c
#include <stdio.h>

int main()
{
    //Sử dụng con trỏ;
    char *myString = "Pham Van Du";
    const char *myString1 = "Pham Van Du";
    printf("%s\n", myString);
    printf("%s\n", myString1);

    myString[0] = 'E';
    myString1[0] = 'D';
    return 0;
}
```

**Ouput**

```c
main.c: In function 'main':
main.c:10:18: error: assignment of read-only location '*myString1'
     myString1[0] = 'D';
                  ^
```
