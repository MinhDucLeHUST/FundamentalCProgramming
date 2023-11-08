# DAY 1: COMPILE PROCESS, VARIABLES, TYPES
## SESSION 1: COMPILE PROCESS
### 1. Compile là gì
    - Tiến trình biên dịch trong C liên quan đến việc chuyển đổi mã nguồn do lập trình viên viết ra thành mã máy và kiểm tra cú pháp của mã nguồn để xác định xem có bất kì lỗi hay warning nào trong chương trình của chúng ta hay không. Tiến trình này sẽ phải thông qua một vài bước để có thể tạo ra được một tệp tin thực thi (.exe) cái mà máy tính của chúng ta có thể hiểu được.
### 2. Các bước trong quá trình biên dịch
    - Tiến trình biên dịch trong ngôn ngữ C sẽ trải qua 4 bước như sau:
        + Tiền xử lý (Preprocessing)
        + Biên dịch (Compiling)
        + Ngôn ngữ máy (Assembling)
        + Liên kết (Linking)
### 3. Tìm hiểu về các bước trong quá trình biên dịch
**a) Preprocessing**

    - Đây là bước đầu tiên trong quá trình biên dịch
    - Nó liên quan đến việc xử lý mã nguồn bởi bộ tiền xử lý
    - Mục đích chính của quá trình tiền xử lý là chuẩn bị mã nguồn cho việc biên dịch
    - Quá trình tiền xử lý cũng sẽ trải qua một vài bước:
        + Xóa các comment trong mã nguồn
        + Xử lý macro
**b) Compiling**

    - Ở giai đoạn này, sẽ sử dụng phần mềm biên dịch để chuyển đổi file (.i) thành file assembly (.s) cái mà sẽ chứa các tập lệnh trong ngôn ngữ máy.
    - Mã nguồn máy (assembly code) là một ngôn ngữ được sử dụng để viết các tập lệnh mức thấp (thường sử dụng trong lập trình vi điều khiển). Toàn bộ các chương trình mã nguồn sẽ kiểm tra và báo cáo khi có bất kì lỗi hoặc cảnh báo trong mã nguồn lên cửa sổ terminal.
**c) Assembling**
    
    - Assembler được sử dụng để chuyển đổi mã nguồn assembly(.s) thành mã máy(dạng nhị phân hoặc hexa).
    - File được sinh ra sẽ có tên giống như tên file asslembly trước khi được chuyển đổi được biết đến là object file với đuôi .obj trong DOS hoặc .o trong UNIX OS.

**d) Linking**

    - Tất cả các chương trình được viết trong C thì đều sử dụng các hàm thư viện. Các thư viện này đã được tiền biên dịch, và các mã nguồn của thư viện đều đã được lưu trong file .lib hoặc .a. Do đó mà công việc chính trong quá trình này là kết hợp tất các các mã nguồn của các file thư viện với chương trình của chúng ta. Đầu ra của quá trình này sẽ là một file thực thi (.exe). 
## SESSION 2: VARIABLES
```
Mỗi biến trong ngôn ngữ lập trình C thì đều là các kiểu dữ liệu có liên quan đến nhau. Nó chỉ định được kiểu dữ liệu mà biến đó có thể lưu trữ như: số nguyên, kí tự, số thập phân,... Mỗi kiểu dữ liệu sẽ yêu cầu số lượng bộ nhớ nhất định và phạm vi lưu trữ của các kiểu dữ liệu đó phụ thuộc vào bộ nhớ của nó.
```
Các kiểu dữ liệu trong ngôn ngữ C được trình bày trong bảng dưới đây:
|      Types        | Description|
|-------------------|------------|
|Kiểu dữ liệu nguyên thủy| Bao gồm các kiểu dữ liệu cơ bản như int, char, float, double,...|
|Kiểu dữ liệu người dùng tự định nghĩa|Được người dùng tự định nghĩa|
|Kiểu gốc|Kiểu dữ liệu bắt nguồn từ kiểu nguyên thủy hoặc được xây dựng dựa trên cơ sở đó|

Các kiểu dữ liệu khác nhau thì sẽ có phạm vi lưu trữ khác nhau. Bảng dưới đây sẽ mô tả điều đó:
|      Data types        | Size(bytes) |         Range         | Format Specifier | 
|------------------------|-------------|-----------------------|-------------------------|
|short int|2|-32768 to 32768 | %hd|
|unsigned short int |2|-32768 to 32768 | %hu |
|unsigned int|4|0 to 65,535  |%u|
|int |4|0 to 4,294,967,295  | %d |
|long int |4|-2,147,483,648 to 2,147,483,647  | %hd|
|unsigned long int |4|-2,147,483,648 to 2,147,483,647  | %lu |
|long long int |8|0 to 4,294,967,295 | %lld |
|unsigned long long int|8|-(2^63) to (2^63)-1 | %llu |
|signed char|1|0 to 18,446,744,073,709,551,615 | %c |
|unsigned char|1|-128 to 127  | %c |
|float |4|0 to 255  | %f |
|double |8|1.2E-38 to 3.4E+38 | %lf |
|long double |16|1.7E-308 to 1.7E+308 | %Lf |

**Example**
```c
#include <stdio.h>
 
int main()
{
    // Integer value with positive data.
    int a = 9;
 
    // integer value with negative data.
    int b = -9;
 
    // U or u is Used for Unsigned int in C.
    int c = 89U;
    
    char ch = 'd';
    // L or l is used for long int in C.
    long int d = 99998L;
    
    float f = 1.34;

    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned int data: %u\n",c);
    printf("Character value with an char data: %c\n",ch);
    printf("Float value with an float data: %f\n",f);
    printf("Integer value with an long int data: %ld", d);
 
    return 0;
}
```
## SESSION 3: GLOBAL, LOCAL, STATIC VARIABLES
### 1. GLOBAL VARIABLE
**Định nghĩa**
```
Là một biến được định nghĩa bên ngoài phạm vi của tất cả các hàm trong một chương trình.
Biến global có phạm vi toàn cục nên nó có thể được truy cập và thay đổi trong tất cả các hàm trong chương trình
```
**Example**
```c
#include <stdio.h>

int var = 10; // global variable
int main(){
    printf("Global Variable have value = %d", var);
    return 0;
}
```
**Note**
```
Khi bạn khai báo một biến global, thì vị trí của biến global sẽ được lưu trên vùng data segment
```
### 2. LOCAL VARIABLE
**Định nghĩa**
```
Là biến được định nghĩa trong một hàm hoặc trong một khối code. Phạm vi hoạt động của biến local giới hạn trong khối code mà tại đó nó được khai báo.
```
**Example**
```c
#include <stdio.h>

int main(){
    int var = 10; // local variable
    printf("Global Variable have value = %d", var);
    return 0;
}
```
**Note**
```
Khi bạn khai báo một biến local, thì vị trí của biến global sẽ được lưu trên vùng stack
```
### 3. STATIC VARIABLE
**Định nghĩa**
```
Biến static là biến mà chỉ được khởi tạo một lần và sẽ được lưu trữ giá trị cho các lần gọi tiếp theo.
```
**Example**
```c
#include <stdio.h>
 
// function with static variable
int fun()
{
    static int count = 0;
    count++;
    return count;
}
 
int main()
{
    printf("%d ", fun());
    printf("%d ", fun());
    return 0;
}
```
**Output**
```
1 2
```
**Note**
```
Khi bạn khai báo một biến static, biến này sẽ được lưu trữ tại vùng data segment
```
## SESSION 4: KEY WORD WITH VARIABLE

### 1. 'const'
```
Từ khóa 'const' có thể được áp dụng trong việc khai báo biến với mục đích để đảm bảo giá trị của nó sẽ không bị thay đổi.

Example:
const int var = 100;

Với việc khai báo biến var có kiểu dữ liệu là int cùng với từ khóa là const thì khi bạn muốn thay đổi giá trị var thì trình biên dịch sẽ báo lỗi.
```
**Example**
```c
#include <stdio.h>

int main()
{
    const int var = 100;
 
    // Compilation error: assignment of read-only variable
    // 'var'
    var = 200;
 
    return 0;
}
```
**Output**
```
main.c: In function 'main':
main.c:35:9: error: assignment of read-only variable 'var'
     var = 200;
         ^
```

**Note**
```
Khi bạn muốn thay đổi giá trị của biến const, chúng ta không thể thay đổi trực tiếp giá trị đó, mà phải thực hiện thông qua một con trỏ lưu địa chỉ của biến const cần thay đổi
```
**Example**
```c
#include <stdio.h>
 
int main()
{
    const int var = 100;
 
    // Compilation error: assignment of read-only variable
    // 'var'
    const int var = 100;
    int *p = (int *)&var;
    *p = 300;
    printf("%d %d", *p, var);
    return 0;
}
```
**Output**
```
300 300
```
### 2. 'Extern'
```
Từ khóa 'extern' được áp dụng cho biến và các hàm trong C. Nó có chức năng giúp mở rộng phạm vi hoạt động của biến hoặc hàm .
```
**Syntax**
```
extern data_type variable_name;
```
**Example**
```c
#include <stdio.h> 
  
extern int a;
  
int main()  
{   
    printf("%d", a); 
   
   return 0; 
}
```
**Tính chất của biến extern**
```
Khi sử dụng từ khóa extern, bạn muốn sử dụng lại một biến hoặc một hàm đã được khai báo và định nghĩa ở một file nào đó, biến extern hoặc hàm sẽ không được cấp phát một vùng nhớ mới.
```

