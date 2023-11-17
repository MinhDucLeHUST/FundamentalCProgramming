# MỤC LỤC

[1. Variadic Function](#variadic_function)

- [1.1. Khái niệm](#khai_niem_var_func)
- [1.2. Thực hành](#thuc_hanh_var_func)

[2. Variadic Macro](#variadic_macro)

- [2.1. Khái niệm](#khai_niem_var_macro)
- [2.2. Thực hành](#thuc_hanh_var_macro)

# <a id = "variadic_function"></a>1. Variadic Function

## <a id = "khai_niem_var_func"></a>1.1. Khái niệm

- Variadic function là hàm có thể đa dạng hóa tham số truyền vào mà không bị cố định số lượng tham số truyền vào.
- Muốn sử dụng được _Variadic function_ cần phải **#include "stdarg.h"**
- Một số phương thức hay được sử dụng:
  | Methods | Description |
  | --------- | ----------- |
  | va_start | Bắt đầu quá trình lấy các tham số trong list tham số truyền vào |
  | va_arg | Đại diện cho các đối số được thêm vào **...**|
  | va_copy | Copy arg này sang arg khác nếu ko muốn va_start arg đấy |
  | va_end | Kết thúc quá trình lấy các tham số trong list tham số truyền vào |
  | va-list | Chứa các thông tin liên quan đến va_start, va_arg, va_end |
- Syntax
  `<type> function_name (<type> variable_name, ...);`

## <a id = "thuc_hanh_var_func"></a>1.2. Thực hành

- **Ví dụ 1**

  ```c
  #include "stdarg.h"
  #include "stdio.h"

  int calSum(int numberElements, ...) {
      int sum = 0;
      // Định nghĩa 1 con trỏ, trỏ tới argument list
      va_list pointerArg;
      va_start(pointerArg, numberElements);
      for (int i = 0; i < numberElements; i++) {
        //va_arg để lấy các tham số truyền vào, thêm kiểu dữ liệu của tham số muốn lấy ra
        sum = sum + va_arg(pointerArg, int);
      }
      va_end(pointerArg);
      return sum;
  }

  int main() {
      printf("Using Variadic function: %d", calSum(5, 1, 2, 3, 4, 5));
      /*Truyền số lượng tham số lớn hơn numberElemets*/
      // printf("Using Variadic function: %d", calSum(5, 1, 2, 3, 4, 6, 7, 8, 9, 10));
  }
  ```

- Khi truyền số lượng tham số nhiều hơn _numberElements_ thì số lượng tham số cũng chỉ được gọi đúng bằng _numberElements_.
- Khi truyền số lượng tham số ít hơn _numberElements_, chương trình sẽ lấy hết tham số truyền vào.
- **Ví dụ 2:** sử dụng thêm va_copy

  ```c
  #include "stdarg.h"
  #include "stdio.h"

  int calSum(int numberElements, ...) {
      int sum = 0;
      // Định nghĩa 1 con trỏ, trỏ tới argument list
      va_list pointerArg1, pointerArg2;
      va_start(pointerArg1, numberElements);
      va_copy(pointerArg2, pointerArg1);
      for (int i = 0; i < numberElements; i++) {
          sum = sum + va_arg(pointerArg1, int);
      }
      printf("[pointerArg1]_sum = %d\n", sum);
      // va_start(pointerArg2, numberElements);
      sum = 0;
      for (int i = 0; i < numberElements + 3; i++) {
          sum = sum + va_arg(pointerArg2, int);
      }
      printf("[pointerArg2]_sum = %d\n", sum);
      va_end(pointerArg1);
      va_end(pointerArg2);
      return sum;
  }

  int main() {
      calSum(4, 1, 2, 3, 4, 6, 7, 8);
  }
  ```

# <a id = "variadic_macro"></a>2. Variadic Macro

## <a id = "khai_niem_var_macro"> </a>2.1. Khái niệm

- Variadic macro giống như 1 macro có thể chứa được các tham số truyền vào 1 cách đa dạng.
- Thành phần quan trọng nhất của **Variadic macro** là keyword **VA_ARGS**
  **Ví dụ**

  ```c
  #include "stdarg.h"
  #include "stdio.h"

  #define LOG(...) printf(__VA_ARGS__)

  int main() {
      LOG("Hello Minh Duc\n");
      int age = 23;
      LOG("Duc is %d years old\n", age);
      LOG("His point is %d + %d = %d", age, 2, age + 2);
  }
  ```

- **...** được dùng để chỉ ra rằng đó là tham số không bắt buộc. Tất cả các tham số sẽ được truyền tới keyword **VA_ARGS**

## <a id = "thuc_hanh_var_macro"> </a>2.2. Thực hành

- **Ví dụ 1:**
  **Source**

  ```c
  #include <stdio.h>
  #include "stdarg.h"
  #define SUM(...) sum(__VA_ARGS__)

  int sum(int count, ...) {
      int total = 0;
      va_list args;
      va_start(args, count);
      for (int i = 0; i < count; i++) {
          total += va_arg(args, int);
      }
      va_end(args);
      return total;
  }

  int main() {
      printf("Sum: %d\n", SUM(3, 1, 2, 3));
      printf("Sum: %d\n", SUM(5, 1, 2, 3, 4, 5));
      return 0;
  }

  ```

  **Output**

  ```c
  Sum: 6
  Sum: 15
  ```

- **Ví dụ 2:**
  **Source**

  ```c
  #include <stdio.h>
  #include "stdarg.h"


  #define PRINT_VARIABLE_ARGS(...) printVariableArgs(__VA_ARGS__)

  void printVariableArgs(const char* format, ...) {
      va_list args;
      va_start(args, format);
      vprintf(format, args);
      va_end(args);
  }

  int main() {
      PRINT_VARIABLE_ARGS("Hello, %s! You are %d years old.\n", "Đức", 25);
      PRINT_VARIABLE_ARGS("Your KPI is: %f\n", 9.31);
      return 0;
  }
  ```

  **Output**

  ```c
  Hello, Đức! You are 25 years old.
  Your KPI is: 9.310000
  ```
