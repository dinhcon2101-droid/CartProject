#include "Order.h"
#include <ctime>
#include <iostream>

// =====================================================================
// TV5 — Đơn hàng và lịch sử đơn
// =====================================================================

OrderHistory::OrderHistory() : nextId(1) {}

bool OrderHistory::createOrder(Cart& cart) {
    // TODO (TV5):
    //  1. Giỏ rỗng -> return false
    //  2. Order o; o.items = cart;   (operator= sao chép sâu)
    //  3. o.orderId = nextId++; o.date = currentDate(); o.total = cart.total();
    //  4. orders.push_back(o); cart.clear();
    (void)cart;
    return false;
}

void OrderHistory::displayAll() const {
    // TODO (TV5): in từng đơn: mã đơn, ngày, bảng mặt hàng, tổng tiền
    std::cout << "(Chua cai dat lich su don)\n";
}

int OrderHistory::size() const { return static_cast<int>(orders.size()); }

const std::vector<Order>& OrderHistory::getOrders() const { return orders; }

std::string currentDate() {
    std::time_t now = std::time(nullptr);
    char buf[32];
    std::strftime(buf, sizeof(buf), "%d/%m/%Y %H:%M", std::localtime(&now));
    return buf;
}
