```python
Author: du.pham - 08/11/2023
Edited: duc5.le - 16/11/2023
```

# 1. Compile process

## 1.1. Compile là gì

- Tiến trình biên dịch trong C liên quan đến việc chuyển đổi mã nguồn do lập trình viên viết ra thành mã máy và kiểm tra cú pháp của mã nguồn để xác định xem có bất kì lỗi hay warning nào trong chương trình của chúng ta hay không.
- Tiến trình này sẽ phải thông qua một vài bước để có thể tạo ra được một tệp tin thực thi (.exe) cái mà máy tính của chúng ta có thể hiểu được.
  ![](https://scaler.com/topics/images/What-is-a-compilation.webp)

## 1.2. Các bước trong quá trình biên dịch

![](https://miro.medium.com/v2/resize:fit:1400/1*guoif2QI9jfiae1VaSJEDA.png)
Tiến trình biên dịch trong ngôn ngữ C sẽ trải qua 4 bước như sau:

- Tiền xử lý (Preprocessing)
- Biên dịch (Compiling)
- Ngôn ngữ máy (Assembling)
- Liên kết (Linking)

**Preprocessing**

- Đây là bước đầu tiên trong quá trình biên dịch
- Nó liên quan đến việc xử lý mã nguồn bởi bộ tiền xử lý
- Mục đích chính của quá trình tiền xử lý là chuẩn bị mã nguồn cho việc biên dịch
- Quá trình tiền xử lý cũng sẽ trải qua một vài bước:
  - Xóa các comment trong mã nguồn
  - Xử lý macro

**Compiling**

- Ở giai đoạn này, sẽ sử dụng phần mềm biên dịch để chuyển đổi file (.i)
  thành file assembly (.s) cái mà sẽ chứa các tập lệnh trong ngôn ngữ máy.
- Mã nguồn máy (assembly code) là một ngôn ngữ được sử dụng để viết các
  tập lệnh mức thấp (thường sử dụng trong lập trình vi điều khiển).
- Toàn bộ các chương trình mã nguồn sẽ kiểm tra và báo cáo khi có bất kì
  lỗi hoặc cảnh báo trong mã nguồn lên cửa sổ terminal.
  ![](https://joellaity.com/assets/linking.jpeg)
  **Assembling**

- Assembler được sử dụng để chuyển đổi mã nguồn assembly(.s)
  thành mã máy(dạng nhị phân hoặc hexa).
- File được sinh ra sẽ có tên giống như tên file asslembly trước
  khi được chuyển đổi được biết đến là object file với đuôi .obj trong DOS hoặc .o trong UNIX OS.

**Linking**

- Tất cả các chương trình được viết trong C thì đều sử dụng các hàm thư viện. Các thư viện này đã được tiền biên dịch, và các mã nguồn của thư viện đều đã được lưu trong file .lib hoặc .a. Do đó mà công việc chính trong quá trình này là kết hợp tất các các mã nguồn của các file thư viện với chương trình của chúng ta. Đầu ra của quá trình này sẽ là một file thực thi (.exe).

**Ví dụ**

```Makefile
step1:
	gcc -E hello.c -o hello.i
step2:
	gcc -S hello.i -o hello.S
step3:
	gcc -c hello.S -o hello.o
step4:
	gcc -o hello hello.o

all:
	gcc -o hello hello.c
```
