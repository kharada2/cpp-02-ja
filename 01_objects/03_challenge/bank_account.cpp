// コードを入力してください

#include "bank_account.h"

#include <iostream>
#include <string>

BankAccount::BankAccount(float balance) : balance(balance) {
  if (balance < 0) {
    std::cerr << "Negative balance!"
              << "\n";
  }
};

void BankAccount::deposit(float in) {
  if (in < 0) {
    std::cout << "Negative deposit!" << std::endl;
  } else {
    this->balance += in;
    std::cout << this->balance << std::endl;
  }
};

void BankAccount::withdraw(float out) {
  if (out < 0) {
    std::cout << "Negative withdraw!" << std::endl;
  } else {
    if (this->balance - out < 0) {
      std::cout << "Insufficient balance!" << std::endl;
    } else {
      this->balance -= out;
      std::cout << this->balance << std::endl;
    }
  }
};

float BankAccount::get_balance() { return this->balance; }