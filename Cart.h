#ifndef CART_H
#define CART_H

#include <optional>
#include <string>
#include "Node.h"

// Giỏ hàng cài đặt bằng danh sách liên kết đôi (có con trỏ head và tail).
// LƯU Ý: chỉ đổi chữ ký hàm trong file này khi đã báo cả nhóm.
class Cart {
private:
    Node* head;
    Node* tail;
    int count;

    void copyFrom(const Cart& other);           // TV6: sao chép sâu

public:
    // ---- Rule of Three (TV6) ----
    Cart();
    Cart(const Cart& other);
    Cart& operator=(const Cart& other);
    ~Cart();

    // ---- Thao tác lõi (TV6) ----
    void insertHead(int id, const std::string& name, double price, int quantity);
    void insertTail(int id, const std::string& name, double price, int quantity);
    Node* find(int id) const;                   // O(n), trả về nullptr nếu không có
    bool isEmpty() const;
    int size() const;
    Node* getHead() const;
    Node* getTail() const;

    // ---- Thêm / sửa (TV3) ----
    // ID trùng: cộng dồn số lượng, giữ tên và giá cũ.
    // Trả về false nếu dữ liệu không hợp lệ.
    bool addItem(int id, const std::string& name, double price, int quantity);
    // Trường nào để trống (std::nullopt) thì giữ nguyên.
    // Trả về false nếu ID không tồn tại hoặc dữ liệu mới không hợp lệ.
    bool updateItem(int id,
                    std::optional<std::string> newName,
                    std::optional<double> newPrice,
                    std::optional<int> newQuantity);

    // ---- Xóa (TV4) ----
    // Xử lý 4 trường hợp: node đầu, node cuối, node giữa, node duy nhất.
    bool removeItem(int id);
    void clear();

    // ---- Hiển thị / tổng tiền (TV2) ----
    void display() const;                       // duyệt xuôi từ head
    void displayReverse() const;                // duyệt ngược từ tail
    double total() const;

    // ---- Nâng cao (TV1/TV2 làm thêm) ----
    void sortByPrice(bool ascending = true);    // merge sort trên DSLK
    void sortByName(bool ascending = true);
};

#endif // CART_H
