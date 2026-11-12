#include "FileIO.h"
#include <fstream>
#include <sstream>

// =====================================================================
// TV5 — Lưu và đọc file TXT
// =====================================================================

namespace FileIO {

bool saveCart(const Cart& cart, const std::string& path) {
    // TODO (TV5): mở ofstream, duyệt từ cart.getHead(), ghi id|name|price|quantity
    (void)cart; (void)path;
    return false;
}

bool loadCart(Cart& cart, const std::string& path, int& badLines) {
    // TODO (TV5):
    //  - Không mở được file -> return false
    //  - Mỗi dòng tách theo '|', đủ 4 trường và hợp lệ thì cart.addItem(...)
    //  - Dòng sai định dạng -> badLines++ và bỏ qua
    (void)cart; (void)path;
    badLines = 0;
    return false;
}

}
