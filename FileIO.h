#ifndef FILEIO_H
#define FILEIO_H

#include <string>
#include "Cart.h"

// Định dạng file TXT: mỗi dòng  id|tên|giá|số lượng
namespace FileIO {

    // Trả về false nếu không mở được file.
    bool saveCart(const Cart& cart, const std::string& path);

    // Trả về false nếu không mở được file.
    // badLines: số dòng sai định dạng đã bị bỏ qua.
    bool loadCart(Cart& cart, const std::string& path, int& badLines);

}

#endif // FILEIO_H
