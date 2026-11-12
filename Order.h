#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "Cart.h"

// Đơn hàng giữ BẢN SAO SÂU của giỏ tại thời điểm tạo đơn.
struct Order {
    int orderId;
    std::string date;
    Cart items;
    double total;
};

// Lịch sử đơn hàng (TV5)
class OrderHistory {
private:
    std::vector<Order> orders;
    int nextId;

public:
    OrderHistory();

    // Sao chép sâu cart vào đơn mới, tính tổng, rồi làm rỗng cart.
    // Trả về false nếu giỏ rỗng.
    bool createOrder(Cart& cart);

    void displayAll() const;
    int size() const;
    const std::vector<Order>& getOrders() const;
};

std::string currentDate();   // định dạng dd/mm/yyyy HH:MM

#endif // ORDER_H
