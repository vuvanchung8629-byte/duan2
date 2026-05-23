/*
thẻ hr : horizontal rule "taọ đường kẻ ngang"
thẻ br: break "phá vỡ" or "ngắt dòng"

thẻ b (bold) , i (italic) , u (underline)
b : "in đậm"
i : "in nghiêng"
u : "gạch chân"
b = strong but strong nhấn mạnh cho trình duyệt hiểu important
i = em but em nhấn mạnh cho trình duyệt hiểu important


thẻ p : thẻ đoạn văn
lorem : để tự tạo đoạn văn để bình thường là 30 chữ
or lorem5 thì là tạo đoan 5 chữ
lorem*3 : 3 dòng mỗi dòng 30 chữ.

thẻ list :
✅Thẻ ul - unordered list : danh sách không có thứ tự
✅Thẻ ol - ordered list : danh sách có thứ tự
✅Thẻ li - list item: là thẻ con trực tiếp của ul, ol

✅Thẻ a: anchor - gắn kèm liên kết, email, phone

✓ Thuộc tính "target" trong thẻ "a" được sử dụng để chỉ định cách mở liên kết được nhúng trong thẻ đó.

<!-- Một số thuộc tính cơ bản của target -->
<a href="http://tuhoc.cc" target="_self">Mở tại trang hiện tại</a><br>
<a href="http://tuhoc.cc">Mở tại trang hiện tại</a><br>
<a href="http://tuhoc.cc" target="_blank">Mở trong tab mới</a>

✓ Liên kết tới số điện thoại: tel

<a href="tel:012345678">012345678</a><br>
<a href="tel:+8412345678">012345678</a><br>
<a href="tel:012345678">Gọi cho em nhé</a>

Chuyển hướng đến 1 ứng dụng có thể gọi nếu máy đã cài

✓ Liên kết tới số email: mailto

<a href="mailto:tuhoc.cc@gmail.com">tuhoc.cc@gmail.com</a><br>
<a href="mailto:tuhoc.cc@gmail.com">Gửi email cho tôi</a>

Chuyển hướng đến 1 ứng dụng để gửi email
✓ 1 số tham số có thể truyền trước cho : mailto

cc: danh sách email sẽ nhận được bản sao của thư.

bcc: danh sách email ẩn sẽ nhận được bản sao của thư.

subject: chủ đề của thư.

body: nội dung của mail.

?: dấu phân cách giữa phần mailto và tham số.

&: dấu phân cách tham số.
note: dùng dấu & để thêm tham số và dấu "," để ghi tiếp một địa chỉ mail khác

THẺ img : là thẻ tự đóng 
- src (source image file) : thuộc tính này để chỉ dẫn đến hình ảnh
- alt (alternative) thay thế
for example:
    <img src="link hình ảnh"/>
nếu bị lỗi ảnh :
<img src="link hình ảnh" alt="hình ảnh ... dưới dạng chữ đọc do link bị lỗi."
note:
    Thuộc Tính width , height
    vd : width = 20% là sét theo tỉ lệ ban đầu của ảnh
    - nếu ko xét kích thước thì lấy kích thước ban đầu
    - nếu xét 1 thông số như width = "50" thì height cx căn chỉnh 50


*/