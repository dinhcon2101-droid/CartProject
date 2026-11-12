#include <iostream>
#include "Cart.h"
#include "Order.h"
#include "FileIO.h"
#include "Utils.h"

// =====================================================================
// TV6 — Menu chính và tích hợp
// =====================================================================

static const std::string CART_FILE = "cart.txt";

void showMenu() {
    std::cout << "\n===== QUAN LY GIO HANG =====\n"
              << "1. Them mat hang\n"
              << "2. Xem gio hang\n"
              << "3. Sua mat hang\n"
              << "4. Xoa mat hang\n"
              << "5. Tao don hang\n"
              << "6. Lich su don hang\n"
              << "0. Thoat\n";
}

void handleAdd(Cart& cart) {
    // TODO (TV6): đọc ID, tên, giá, số lượng bằng Utils rồi gọi cart.addItem
    (void)cart;
}

void handleView(Cart& cart) {
    // TODO (TV6): giỏ rỗng thì báo; ngược lại hỏi xem xuôi/ngược
    cart.display();
}

void handleUpdate(Cart& cart) {
    // TODO (TV6): đọc ID, các trường mới (bỏ trống = giữ nguyên) rồi gọi cart.updateItem
    (void)cart;
}

void handleRemove(Cart& cart) {
    // TODO (TV6): đọc ID rồi gọi cart.removeItem, báo kết quả
    (void)cart;
}

void handleCreateOrder(Cart& cart, OrderHistory& history) {
    // TODO (TV6): xác nhận rồi gọi history.createOrder(cart)
    (void)cart; (void)history;
}

int main() {
    Cart cart;
    OrderHistory history;

    int badLines = 0;
    FileIO::loadCart(cart, CART_FILE, badLines);

    while (true) {
        showMenu();
        int choice = Utils::readInt("Chon: ", 0, 6);
        switch (choice) {
            case 1: handleAdd(cart); break;
            case 2: handleView(cart); break;
            case 3: handleUpdate(cart); break;
            case 4: handleRemove(cart); break;
            case 5: handleCreateOrder(cart, history); break;
            case 6: history.displayAll(); break;
            case 0:
                FileIO::saveCart(cart, CART_FILE);
                std::cout << "Tam biet!\n";
                return 0;
        }
    }
}
