#include <iostream>
#include <new>

int main() {
  int* num_ptr = nullptr;
  try {
    num_ptr = new int;
  } catch (std::bad_alloc& ba) {
    std::cerr << "Cannot allocate memory (" << ba.what() << ")\n";
    return 1;
  }

  std::cout << "Address of num_ptr: " << num_ptr << '\n';
  *num_ptr = 42;
  std::cout << "Value of num_ptr: " << *num_ptr << '\n';

  delete num_ptr;

  return 0;
}
