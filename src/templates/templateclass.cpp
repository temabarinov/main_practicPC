#include "common.h"
template <typename T> class table {
private:
  int rows;
  int cols;
  T **data;

public:
  table(int _rows, int _cols) : rows{_rows}, cols{_cols} {
    data = new T *[_cols];
    for (int i = 0; i < _cols; i++) {
      data[i] = new T[_rows];
    }
  }

  T *operator[](int indx) { return data[indx]; }
  const T *operator[](int indx) const { return data[indx]; }
  const int size() {
    int a = this->cols;
    int b = this->rows;
    return a * b;
  }
};

int main(int argc, char **argv) {
  auto test = table<int>(2, 2);
  std::cout << test.size();
  std::cout << "hhh";
}