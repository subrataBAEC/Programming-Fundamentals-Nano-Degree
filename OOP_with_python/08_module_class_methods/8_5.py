#8.5 bank
class Bank:
    def __init__(self, balance):
        self.balance=balance
        self.min_withdraw=100
        self.max_withdraw=20000
          
    def get_balance(self):
         return self.balance
         
    def deposit(self, amount):
      self.balance=self.balance+amount
      return "deposit success"
          
    def withdraw(self, amount):
          if amount<self.min_withdraw:
              return "less than min withdraw."
          elif amount>self.max_withdraw:
              return "exceed daily limit"
          elif amount>self.balance:
              return "not enough money"
          else:
              self.balance=self.balance-amount
              return f"sucess,withdraw, take your money: {amount}"
              
my_bank=Bank(15000)              
ans=my_bank.balance
print(ans)

#withdraw
print(my_bank.get_balance())
ans=my_bank.withdraw(50)
print(ans)
ans=my_bank.withdraw(20000)
print(ans)
ans=my_bank.withdraw(5000)
print(ans)
ans=my_bank.withdraw(16000)
print(ans)

#deposit
ans=my_bank.deposit(12000)
print(ans)

ans=my_bank.withdraw(500)
print(ans)

ans=my_bank.get_balance()
print(ans)

