#include "Cart.h"
#include "Utils.h"
#include <iostream>

// =====================================================================
// TV6 — Rule of Three và thao tác lõi
// =====================================================================

Cart::Cart() : head(nullptr), tail(nullptr), count(0) {}

Cart::Cart(const Cart& other) : head(nullptr), tail(nullptr), count(0) {
    copyFrom(other);
}

Cart& Cart::operator=(const Cart& other) {
    if (this != &other) {
        clear();
        copyFrom(other);
    }
    return *this;
}

Cart::~Cart() {
    clear();
}

void Cart::copyFrom(const Cart& other) {
    // TODO (TV6): duyệt other từ head, insertTail từng node (sao chép sâu)
    (void)other;
}

void Cart::insertHead(int id, const std::string& name, double price, int quantity) {
    // TODO (TV6): tạo node mới, nối vào trước head; xử lý giỏ rỗng
    (void)id; (void)name; (void)price; (void)quantity;
}

void Cart::insertTail(int id, const std::string& name, double price, int quantity) {
    // TODO (TV6): tạo node mới, nối vào sau tail (O(1)); xử lý giỏ rỗng
    (void)id; (void)name; (void)price; (void)quantity;
}

Node* Cart::find(int id) const {
    // TODO (TV6): duyệt từ head, trả về node có id tương ứng
    (void)id;
    return nullptr;
}

bool Cart::isEmpty() const { return count == 0; }
int Cart::size() const { return count; }
Node* Cart::getHead() const { return head; }
Node* Cart::getTail() const { return tail; }

// =====================================================================
// TV3 — Thêm và sửa
// =====================================================================

bool Cart::addItem(int id, const std::string& name, double price, int quantity) {
    // TODO (TV3):
    //  1. Kiểm tra hợp lệ (dùng Utils::isValidItem)
    //  2. find(id): nếu có thì cộng dồn quantity
    //  3. Chưa có thì insertTail
    (void)id; (void)name; (void)price; (void)quantity;
    return false;
}

bool Cart::updateItem(int id,
                      std::optional<std::string> newName,
                      std::optional<double> newPrice,
                      std::optional<int> newQuantity) {
    // TODO (TV3): tìm theo ID, chỉ cập nhật trường có giá trị và hợp lệ
    (void)id; (void)newName; (void)newPrice; (void)newQuantity;
    return false;
}

// =====================================================================
// TV4 — Xóa
// =====================================================================

bool Cart::removeItem(int id) {
    // TODO (TV4): tìm node rồi nối lại prev/next
    //  - node duy nhất: head = tail = nullptr
    //  - node đầu:      head = head->next; head->prev = nullptr
    //  - node cuối:     tail = tail->prev; tail->next = nullptr
    //  - node giữa:     p->prev->next = p->next; p->next->prev = p->prev
    //  Nhớ delete node và giảm count.
    (void)id;
    return false;
}

void Cart::clear() {
    // TODO (TV4): giải phóng toàn bộ node, đặt head = tail = nullptr, count = 0
}

// =====================================================================
// TV2 — Hiển thị và tổng tiền
// =====================================================================

void Cart::display() const {
    // TODO (TV2): in bảng (dùng Utils::printTableHeader / printRow), duyệt từ head
    std::cout << "(Chua cai dat display)\n";
}

void Cart::displayReverse() const {
    // TODO (TV2): như display nhưng duyệt từ tail qua prev
    std::cout << "(Chua cai dat displayReverse)\n";
}

double Cart::total() const {
    // TODO (TV2): cộng subtotal() của từng node
    return 0.0;
}

// =====================================================================
// Nâng cao — merge sort trên DSLK
// =====================================================================

void Cart::sortByPrice(bool ascending) {
    // TODO: merge sort, sau khi sắp xếp cập nhật lại prev và tail
    (void)ascending;
}

void Cart::sortByName(bool ascending) {
    // TODO: merge sort theo name
    (void)ascending;
}
