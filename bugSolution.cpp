int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) {
    *ptr = 10; // Dereference only if ptr is not null
  } else {
    std::cerr << "Error: Pointer is null" << std::endl;
    return 1; // Indicate an error
  }
  return 0;
}