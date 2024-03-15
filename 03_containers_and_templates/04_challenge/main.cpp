#include <string>

#include "phone_book.hpp"

int main() {
  PhoneBook phoneBook1;
  //   phoneBook1.
  phoneBook1.addContact("Bob", "090-2222-2222");
  phoneBook1.addContact("Alice", "080-1111-1111");

  std::cout << phoneBook1.GetPhoneByName("Alic") << std::endl;
  std::cout << phoneBook1.GetPhoneByName("Bob") << std::endl;

  phoneBook1.displayBookList();

  phoneBook1.deleteByName("Alice");
  phoneBook1.deleteByName("Bob");

  phoneBook1.displayBookList();
  return 0;
}