// コードを入力してください

class BankAccount {
 public:
  BankAccount(float balance);
  void deposit(float in);
  void withdraw(float out);
  float get_balance();

 private:
  float balance;
};
