#include <string>
#include <fstream>
#include "phone_book.hpp"

int main() {
    PhoneBook phoneBook1;
    
     // テキスト読み込み
    std::ifstream file("book.txt"); // テキストファイルを開く

    if (!file.is_open()) { // ファイルが正しく開けない場合
        std::cerr << "Error opening file." << std::endl;
        return 1; // エラーコードを返す
    }

    std::string line;
    while (std::getline(file, line)){
      auto pos = line.find(", ");
      if (pos != std::string::npos){
        std::string name = line.substr(0, pos); // 名前を取得
        std::string number = line.substr(pos + 2); // 電話番号を取得（カンマとスペースを除く）
        phoneBook1.addContact(name, number);
      }
    }


  // 動作確認
  std::cout << phoneBook1.GetPhoneByName("Alic") << std::endl;
  std::cout << phoneBook1.GetPhoneByName("Bob") << std::endl;

  phoneBook1.displayBookList();

  phoneBook1.deleteByName("Alice");
  phoneBook1.deleteByName("Bob");

  phoneBook1.displayBookList();
  return 0;
}