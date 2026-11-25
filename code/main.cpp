#include <windows.h>
#include <iostream>
#include "vec3.h"

int main() {
  Vec3 a = Vec3(1, 2, 3);
  Vec3 b = Vec3(2, 3, 5);
  std::cout << "a: " << a << "\n";
  std::cout << "b: " << b << "\n";
  std::cout << "a + b: " << a + b << "\n";
  std::cout << "a - b: " << a - b << "\n";
  std::cout << "a * b: " << a + b << "\n";
  std::cout << "a.scalMult(b): " << a.scalMult(b) << "\n";
  std::cout << "a.vecMult(b): " << a.vecMult(b) << "\n";
  std::cout << "a length: " << a.length() << "\n";
  std::cout << "a normalized: " << a.normalize() << "\n";
  return 0;
}