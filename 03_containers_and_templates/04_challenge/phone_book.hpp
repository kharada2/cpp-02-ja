#pragma once

#include <iostream>
#include <map>
#include <string>

class PhoneBook {
 public:
  PhoneBook();
  void addContact(const std::string& name, const std::string& phoneNumber);
  void deleteByName(const std::string& name);
  std::string GetPhoneByName(const std::string& name);
  void displayBookList();

 private:
  std::map<std::string, std::string> book;
};