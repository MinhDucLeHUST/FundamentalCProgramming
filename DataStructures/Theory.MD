# Bit fields

    - **Bit fields** là 1 kỹ thuật nhằm tối ưu bộ nhớ trong struct, trong 1 số trường hợp khi ta sử dụng kiểu dữ liệu có phạm vi lớn nhưng thực tế kích thước nhỏ hơn hoặc bao giờ đạt đến những giá trị lớn đó.
    - Ví dụ: khi khai báo 1 biến có kiểu 'bool' (chỉ có 2 giá trị true & false) tuy nhiên lại sử dụng mất 1 byte (8 bit) cho kiểu dữ liệu này, trong khi chỉ cần sử dụng 1 bit (0 hoặc 1) để biểu diễn giá trị cho kiểu dữ liệu 'bool', từ đấy nhận thấy chúng ta lãng phí 7 bit.
    - Cách thức cấp phát: Bit fields sẽ cấp phát lần lượt, nó sẽ tìm kiểu dữ liệu có kích thước lớn nhất trong 1 'data structure' (ví dụ: int 4 bytes), khi các biến được gán với số bit sử dụng tương ứng, nếu nó không vượt quá kích thước đã được cấp phát 1 lần ban đầu (4 bytes) thì kích thước = bytes, nếu kích thước cấp phát vượt kích thước cấp ban đầu, chương trình sẽ cấp phát thêm 4 bytes.
    ![Ví dụ về cách cấp phát trong Bit fields](./ExamplePictures/bit_field_1.png)
