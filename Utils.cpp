#include "Utils.h"
#include <iostream>

// =====================================================================
// TV1 — Nhập liệu an toàn, kiểm tra hợp lệ, định dạng
// =====================================================================

namespace Utils {

int readInt(const std::string& prompt, int minVal, int maxVal) {
    // TODO (TV1): std::getline + std::stoi trong try/catch,
    //             lặp lại khi nhập chữ, ngoài khoảng hoặc tràn int
    std::cout << prompt;
    (void)minVal; (void)maxVal;
    return 0;
}

double readPositiveDouble(const std::string& prompt) {
    // TODO (TV1): tương tự readInt, dùng std::stod, yêu cầu > 0
    std::cout << prompt;
    return 0.0;
}

std::string readLine(const std::string& prompt, bool allowEmpty) {
    // TODO (TV1): std::getline, cắt khoảng trắng hai đầu, lặp nếu rỗng mà !allowEmpty
    std::cout << prompt;
    (void)allowEmpty;
    return "";
}

bool isValidId(int id) { (void)id; return false; }                       // TODO (TV1)
bool isValidPrice(double price) { (void)price; return false; }           // TODO (TV1)
bool isValidQuantity(int quantity) { (void)quantity; return false; }     // TODO (TV1)
bool isValidName(const std::string& name) { (void)name; return false; }  // TODO (TV1)

bool isValidItem(int id, const std::string& name, double price, int quantity) {
    return isValidId(id) && isValidName(name) && isValidPrice(price) && isValidQuantity(quantity);
}

std::string formatMoney(double amount) {
    // TODO (TV1): thêm dấu chấm phân cách hàng nghìn
    return std::to_string(static_cast<long long>(amount));
}

void printTableHeader() {
    // TODO (TV1): in tiêu đề cột: STT | ID | Ten hang | Gia | SL | Thanh tien
}

void printRow(int stt, int id, const std::string& name, double price, int quantity) {
    // TODO (TV1): in một dòng căn cột bằng std::setw
    (void)stt; (void)id; (void)name; (void)price; (void)quantity;
}

void printLine() {
    std::cout << std::string(70, '-') << '\n';
}

}
