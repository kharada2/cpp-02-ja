#include "phone_book.hpp"

PhoneBook::PhoneBook(){};

void PhoneBook::addContact(const std::string& name, const std::string& phoneNumber) { book[name] = phoneNumber; }

void PhoneBook::displayBookList() {
  // 電話帳が空の場合は確認
  if (book.size() == 0) {
    std::cerr << "Adress book is empty." << std::endl;
  }
  // キーが文字列型なのでアルファベット順に出力できる
  for (const auto& i : book) {
    std::cout << i.first << ": " << i.second << '\n';
  }
}

void PhoneBook::deleteByName(const std::string& name) {
  auto target = book.find(name);

  if (target == book.end()) {
    std::cerr << name << " is not found in the address book." << std::endl;
  } else {
    book.erase(target);
    std::cout << "Contact '" << name << "' deleted successfully." << std::endl;
  }
}

std::string PhoneBook::GetPhoneByName(const std::string& name) {
  auto result = book.find(name);
  // mapは一致するキーがないときはend()を返す。参照すると書いてある。

  if (result == book.end()) {
    std::cerr << name << " is not found in the address book." << std::endl;
    return "";  // 空の文字列を返すか、適切なエラー処理を行う
  }

  return result->second;
}