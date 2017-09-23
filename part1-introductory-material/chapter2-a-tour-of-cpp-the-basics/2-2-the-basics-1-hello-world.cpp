// Let's skip "Hello World"
// #include <iostream>
//
// int main() {
//   std::cout << "Hello, world\n";
// }

#include <iostream>
using namespace std;

double square(double x) {
  return x*x;
}

void print_square(double x) {
  cout << "the square of " << x << " is " << square(x) << "\n";
}

int main() {
  print_square(1.234);  // print: the square of 1.234 is 1.52276
}
