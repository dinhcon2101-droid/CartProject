CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
SRCS     = main.cpp Cart.cpp Order.cpp FileIO.cpp Utils.cpp
TARGET   = cart

all: $(TARGET)

$(TARGET): $(SRCS) *.h
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Kiểm tra rò rỉ bộ nhớ
asan: $(SRCS) *.h
	$(CXX) $(CXXFLAGS) -fsanitize=address $(SRCS) -o $(TARGET)_asan

clean:
	rm -f $(TARGET) $(TARGET)_asan $(TARGET).exe

.PHONY: all asan clean
