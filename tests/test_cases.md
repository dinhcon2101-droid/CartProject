# Bảng test case

| STT | Chức năng | Dữ liệu vào | Kết quả mong đợi | Kết quả thực tế | Đạt | Người test |
|-----|-----------|-------------|------------------|-----------------|-----|------------|
| 1 | Xem | Giỏ rỗng | Báo "Gio hang trong" | | | TV2 |
| 2 | Sửa | Giỏ rỗng | Báo không tìm thấy | | | TV3 |
| 3 | Xóa | Giỏ rỗng | Báo không tìm thấy, không crash | | | TV4 |
| 4 | Tạo đơn | Giỏ rỗng | Báo không tạo được đơn | | | TV5 |
| 5 | Thêm | 1 phần tử | head = tail = node mới | | | TV3 |
| 6 | Thêm | ID trùng | Cộng dồn số lượng, giữ tên/giá cũ | | | TV3 |
| 7 | Xóa | Node đầu | head chuyển sang node kế, prev = null | | | TV4 |
| 8 | Xóa | Node cuối | tail chuyển về node trước, next = null | | | TV4 |
| 9 | Xóa | Node giữa | Nối lại prev/next đúng | | | TV4 |
| 10 | Xóa | Node duy nhất | head = tail = null | | | TV4 |
| 11 | Xóa | ID không tồn tại | Báo lỗi, giỏ giữ nguyên | | | TV4 |
| 12 | Thêm | Giá = 0 / âm | Từ chối | | | TV1 |
| 13 | Thêm | Nhập chữ vào ô số | Yêu cầu nhập lại | | | TV1 |
| 14 | Thêm | Số quá lớn (tràn int) | Yêu cầu nhập lại | | | TV1 |
| 15 | Tạo đơn | Giỏ 3 mặt hàng | Giỏ rỗng, đơn giữ đủ 3 mặt hàng | | | TV5 |
| 16 | Đọc file | File không tồn tại | Báo lỗi, giỏ rỗng | | | TV5 |
| 17 | Đọc file | `bad_format.txt` | Bỏ qua dòng sai, nạp dòng đúng | | | TV5 |
| 18 | Bộ nhớ | Chạy `make asan` | Không báo rò rỉ | | | TV4 |

# Bảng đo hiệu năng

| n | Thêm (ms) | Tìm (ms) | Xóa (ms) | Nhận xét so với lý thuyết |
|---|-----------|----------|----------|---------------------------|
| 1.000 | | | | |
| 10.000 | | | | |
| 100.000 | | | | |
