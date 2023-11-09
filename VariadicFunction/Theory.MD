# <a id = "variadic_function"></a>Variadic Function

- Variadic function là hàm có thể đa dạng hóa tham số truyền vào mà không bị cố định số lượng tham số truyền vào.
- Muốn sử dụng được _Variadic function_ cần phải **#include stdarg.h**
- Một số phương thức hay được sử dụng:
  | Methods | Description |
  | --------- | ----------- |
  | va_start | Bắt đầu quá trình lấy các tham số trong list tham số truyền vào |
  | va_arg | Đại diện cho các đối số được thêm vào **...**|
  | va_copy | |
  | va_end | Kết thúc quá trình lấy các tham số trong list tham số truyền vào |
  | va-list | Chứa các thông tin liên quan đến va_start, va_arg, va_end |

- Syntax

`<type> function_name (<type> variable_name, ...);`

# <a id = "variadic_macro"></a> Variadic Macro
