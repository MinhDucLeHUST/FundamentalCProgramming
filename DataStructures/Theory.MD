# Mục lục

[1. Struct](#struct)
[2. Enum](#enum)
[3. Union](#union)
[4. Bit field](#bit_fields)

# <a id = "struct"></a> 1. Struct

- Struct là 1 kiểu dữ liệu tự định nghĩa bao gồm nhiều thành phần có thể thuộc nhiều kiểu dữ liệu khác nhau.
  ![Minh họa](./ExamplePictures/struct_1.png)
- Kích thước của struct bằng bội của phần tử có kích thước lớn nhất trong struct đó.
  **Ví dụ 1**

  ```
  struct info{
    int age;
    char name[10];
  }
  ```

Ở **Ví dụ 1** trên, int là kiểu dữ liệu 4 bytes (lớn nhất trong struct info) nên kích thước là bội của 4.
Vì kiểu struct sẽ cấp phát theo từng block, mỗi block có kích thước = 4 bytes, vì thế nó sẽ cấp phát 4 byte cho 'age', tiếp theo là 4 byte cho 'char' (vì ở block đầu tiên 'age' đã chiếm hết 4 byte) => nên kích thước của struct này là 8 bytes.
Nếu khai báo kiểu 'char' trước thì kích thước struct vẫn vậy.

```
struct info{
  char name[10];
  int age;
}
```

![Mô tả Union](./ExamplePictures/struct_4.png)

**Ví dụ 2**

```c
struct info{
  char id;
  int age;
  double gpa;
}
```

![Mô tả Union](./ExamplePictures/struct_3.png)

- Khi sử dụng struct ta thường gặp phải trường hợp **Phân mảnh bộ nhớ**

Để khắc phục vấn đề này, ta sử dụng _#pragma pack(n)_, từ khóa này giúp trình biên dịch hiểu rằng cấp phát cho các phần tử trong struct theo từng _n bytes_
**Ví dụ 3**
Nếu ko sử dụng từ khóa _#pragma pack(n)_ thì struct sẽ tốn nhiều dung lượng hơn.

```c
struct info{
  char a;
  int b;
  char c;
}
```

![Mô tả Union](./ExamplePictures/struct_6.png)

```c
#pragma pack(1)
struct info{
  char a;
  int b;
  char c;
}
#pragma pack() //end pragma
```

![Mô tả Union](./ExamplePictures/struct_5.png)

# <a id = "enum"></a> 2. Enum

Enum là 1 kiểu dữ liệu người dùng tự định nghĩa, được sử dụng để gán tên cho các hằng số. Tác dụng của chúng giúp lập trình viên không nhầm lẫn và dễ kiểu soát khi làm việc với nhiều hằng số.

- Có 2 kiểu khai báo cho Enum:
  ![Kiểu khai báo](./ExamplePictures/enum_1.png)
- Nếu không gán giá trị cho các hằng số trong enum thì nó mặc định bắt đầu từ giá trị 0
- Nếu đã gán 1 giá trị bất kỳ trong enum, các giá trị sau thì cộng thêm 1 đơn vị nhưng các giá trị đứng trước sẽ được gán giá trị theo index đầu tiên (được gán = 0 nếu chưa đc gán giá trị nào).
- **Ví dụ**

  ```c
  #include "stdio.h"
  #include "string.h"

  typedef enum { mon,
                tue,
                wed = 3,
                thus,
                fri,
                sat,
                sun } week_t;

  int main() {
      week_t isToday;
      isToday = thus;
      printf("Value = %d\n", isToday);
  }
  ```

# <a id = "union"></a> 3. Union

Union là 1 kiểu dữ liệu trong C, cho phép lưu trữ các biến có các kiểu dữ liệu khác nhau trong cùng một vùng nhớ. Có thể định nghĩa Union với rất nhiều tham số, nhưng chỉ 1 thành phần chứa giá trị tại 1 thời điểm.

- Union sẽ cùng lưu trữ giá trị của các biến tại cùng một ô nhớ
  ![Mô tả Union](./ExamplePictures/union_3.png)
- Có 2 kiểu khai báo đối với Union (giống với struct)
  ![Kiểu khai báo](./ExamplePictures/union_1.png)
- Kích thước của Union chính bằng kích thước kiểu dữ liệu có kích thước lớn nhất.
  ![Kích thước trong Union](./ExamplePictures/union_2.png)
- Từ đó, dễ dàng thấy được sự khác biệt giữa _struct_ và _union_
  ![Kích thước trong Union](./ExamplePictures/union_4.png)
- **Ví dụ**
  **Source**

  ```c
  #include "stdbool.h"
  #include "stdio.h"
  #include "string.h"

  typedef union {
      char name[20];
      int age;
      float kpi;
  } employee;

  int main() {
      employee coder;
      coder.kpi = 8.5;
      strcpy(coder.name, "Le Minh Duc");
      coder.age = 23;
      printf("coder.age = %d\n", coder.age);
      printf("coder.kpi = %f\n", coder.kpi);
      printf("coder.name = %s", coder.name);
      return 0;
  }
  ```

  **Output**

  ```c
  coder.age = 23
  coder.kpi = 0.000000
  coder.name = ↨
  ```

# <a id = "bit_fields"></a> 4. Bit fields

**Bit fields** là 1 kỹ thuật nhằm tối ưu bộ nhớ trong struct, trong 1 số trường hợp khi ta sử dụng kiểu dữ liệu có phạm vi lớn nhưng thực tế kích thước nhỏ hơn hoặc bao giờ đạt đến những giá trị lớn đó.
**Ví dụ**: khi khai báo 1 biến có kiểu 'bool' (chỉ có 2 giá trị true & false) tuy nhiên lại sử dụng mất 1 byte (8 bit) cho kiểu dữ liệu này, trong khi chỉ cần sử dụng 1 bit (0 hoặc 1) để biểu diễn giá trị cho kiểu dữ liệu 'bool', từ đấy nhận thấy chúng ta lãng phí 7 bit.

**Cách thức cấp phát:** Bit fields sẽ cấp phát lần lượt, nó sẽ tìm kiểu dữ liệu có kích thước lớn nhất trong 1 'data structure' (ví dụ: int 4 bytes).
Nếu có nhiều kiểu dữ liệu thì mỗi kiểu dữ liệu sẽ được cấp phát 1 lần với kích thước của kiểu dữ liệu lớn nhất.

- **Ví dụ 1:** cách cấp phát trong Bit fields

  ![](./ExamplePictures/bit_field_1.png)

- **Ví dụ 2**
  **Source**

  ```c
  #include "stdbool.h"
  #include "stdio.h"

  /*
      Khi sử dụng bit field với kiểu "bool", chỉ cần sử dụng 1 bit để lưu trữ giá trị boolean.
  */

  struct time_using_bitField {
      bool isRaiseHand : 1;
      char keyWord : 1;
      unsigned int hours : 5;  // unsigned int: 4 bytes
      // unsigned int minutes : 6;
      // unsigned int seconds : 6;
  };

  struct time {
      unsigned int hours;  // unsigned int: 4 bytes
      unsigned int minutes;
      unsigned int seconds;
  };

  int main() {
      // struct time_using_bitField time_t = {
      //     .hours = 8,
      //     .minutes = 3,
      //     .seconds = 5};
      // printf("Time: %d : %d : %d\n", time_t.hours, time_t.minutes, time_t.seconds);
      printf("Size of struct time: %ld bytes\n", sizeof(struct time));
      printf("Size of struct time: %ld bytes\n", sizeof(struct time_using_bitField));
  }
  ```

  **Output**

  ```c
  Size of struct time: 12 bytes
  Size of struct time: 8 bytes
  ```
