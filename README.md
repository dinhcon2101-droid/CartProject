# Quản lý giỏ hàng online — Danh sách liên kết đôi

Đề tài 2 — Học phần Cấu trúc dữ liệu và Giải thuật — Nhóm 6 thành viên.

## Chức năng

1. Thêm mặt hàng (ID trùng thì cộng dồn số lượng)
2. Xem giỏ hàng (xuôi / ngược), thành tiền và tổng cộng
3. Sửa mặt hàng (bỏ trống trường nào thì giữ nguyên)
4. Xóa mặt hàng
5. Tạo đơn hàng (sao chép sâu giỏ, sau đó làm rỗng giỏ)
6. Lịch sử đơn hàng

## Cấu trúc thư mục

```
CartProject/
├── Node.h                  node của DSLK đôi
├── Cart.h / Cart.cpp       DSLK đôi và các thao tác
├── Order.h / Order.cpp     đơn hàng, lịch sử đơn
├── FileIO.h / FileIO.cpp   lưu và đọc file TXT
├── Utils.h / Utils.cpp     nhập liệu an toàn, kiểm tra hợp lệ, định dạng
├── main.cpp                menu chính
├── tests/                  test case, dữ liệu mẫu
└── docs/                   báo cáo
```

## Biên dịch và chạy

```bash
make            # tạo file chạy ./cart
make asan       # bản kiểm tra rò rỉ bộ nhớ (-fsanitize=address)
```

Hoặc biên dịch trực tiếp:

```bash
g++ -std=c++17 -Wall main.cpp Cart.cpp Order.cpp FileIO.cpp Utils.cpp -o cart
```

## Phân công

| TV  | Phần code chính                                   | File            |
|-----|---------------------------------------------------|-----------------|
| TV1 | Nhập liệu an toàn, kiểm tra hợp lệ, định dạng     | Utils           |
| TV2 | display, displayReverse, total                    | Cart.cpp        |
| TV3 | addItem, updateItem                               | Cart.cpp        |
| TV4 | removeItem, clear                                 | Cart.cpp        |
| TV5 | Order (deep copy), FileIO                         | Order, FileIO   |
| TV6 | Cart lõi (Rule of Three, chèn, tìm), main, tích hợp | Cart.cpp, main.cpp |

Mỗi hàm cần cài đặt đều có ghi chú `TODO (TVx)` trong code.

## Quy tắc làm việc với Git

- Mỗi người làm trên nhánh riêng: `feature/tv1-utils`, `feature/tv2-display`, ...
- Commit thường xuyên, message rõ ràng.
- Chỉ đổi chữ ký hàm trong file `.h` khi đã báo cả nhóm.
- Tạo Pull Request vào `main`, review chéo: TV4 ↔ TV6, TV3 ↔ TV5, TV1 ↔ TV2.
