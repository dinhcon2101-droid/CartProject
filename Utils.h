#ifndef UTILS_H
#define UTILS_H

#include <string>

// Nhập liệu an toàn, kiểm tra hợp lệ, định dạng hiển thị (TV1)
namespace Utils {

    // Đọc cả dòng, lặp lại cho đến khi nhập đúng số nguyên trong [minVal, maxVal].
    int readInt(const std::string& prompt, int minVal, int maxVal);

    // Đọc số thực > 0 (có giới hạn trên để tránh số quá lớn).
    double readPositiveDouble(const std::string& prompt);

    // Đọc một dòng; allowEmpty = true dùng cho chức năng sửa (bỏ trống = giữ nguyên).
    std::string readLine(const std::string& prompt, bool allowEmpty = false);

    // Kiểm tra hợp lệ: ID > 0, giá > 0, số lượng >= 1, tên không rỗng.
    bool isValidId(int id);
    bool isValidPrice(double price);
    bool isValidQuantity(int quantity);
    bool isValidName(const std::string& name);
    bool isValidItem(int id, const std::string& name, double price, int quantity);

    // Định dạng tiền: 1250000 -> "1.250.000"
    std::string formatMoney(double amount);

    void printTableHeader();
    void printRow(int stt, int id, const std::string& name, double price, int quantity);
    void printLine();
}

#endif // UTILS_H
