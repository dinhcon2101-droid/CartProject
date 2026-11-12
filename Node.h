#ifndef NODE_H
#define NODE_H

#include <string>

// Một mặt hàng trong giỏ = một node của danh sách liên kết đôi.
struct Node {
    int id;
    std::string name;
    double price;
    int quantity;
    Node* prev;
    Node* next;

    Node(int id, const std::string& name, double price, int quantity)
        : id(id), name(name), price(price), quantity(quantity),
          prev(nullptr), next(nullptr) {}

    double subtotal() const { return price * quantity; }
};

#endif // NODE_H
