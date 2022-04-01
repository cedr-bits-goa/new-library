#include "cp/cp.hpp"


void demo_read() {
  cp::print("Enter a line: ");
  cp::string str = cp::read_line();
  cp::print("You entered: ");
  cp::println(str);

  cp::print("Enter an int: ");
  int val1 = cp::read_int();
  cp::print("You entered: ");
  cp::println(val1);

  cp::print("Enter a double: ");
  double val2 = cp::read_double();
  cp::print("You entered: ");
  cp::println(val2);
  
  cp::print("Enter a bool: ");
  bool val3 = cp::read_bool();
  cp::print("You entered: ");
  cp::println(val3);

  cp::print("Enter a char: ");
  char val4 = cp::read_char();
  cp::print("You entered: ");
  cp::println(val4);
}

void demo_print() {
  cp::print(42);
  cp::print("cp::print works");
  cp::print(true);
  cp::print(false);
}

void demo_println() {
  cp::println(42);
  cp::println("cp::print works");
  cp::println(true);
  cp::println(false);
}

void demo_list() {
  cp::list_int ints = cp::list_int();
  ints.insert_at(0, 42);
  cp::print("List :");
  cp::println(ints.to_string());

  cp::list_int squares = cp::list_int();
  for (int i=0; i < 10; i++)
    squares.insert_at(squares.size(), i * i);

  cp::println(squares.to_string());

  cp::list_int other = cp::list_int();
  for (int i=9; i >= 0; i--)
    other.insert_at(0, i * i);

  cp::println(other.to_string());

  other[0]++;
  cp::println(other.to_string());
}

int main() {
  demo_print();
  demo_println();

  demo_read();

  demo_list();

  cp::println(cp::sqrt(100));
  cp::println(cp::abs(-3));
  cp::println(cp::abs(-cp::PI));
  cp::println(cp::abs(cp::PI));

  cp::println(cp::ceiling(cp::PI));
  cp::println(cp::ceiling(-cp::PI));

  cp::println(cp::floor(cp::PI));
  cp::println(cp::floor(-cp::PI));

 return 0;
}
