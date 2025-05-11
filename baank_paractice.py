class bank:
    def __init__(self):
        pass
    def __init__(self,balance,accno):
        self.balance=balance
        self.accno=accno
    
    def withdrawn(self,amount):
        self.balance=self.balance-amount
        print("AMOUNT YOU WANT TO WITHDRWAN IS")
        return amount
    
    def deposit(self,amount):
        self.balance=self.balance+amount
        print("TOTAL BLANCE AFTTER ADDING IS")
        return self.balance
    
    def print(self):
        print("total balance is",self.balance)
        print("ACCOUNT NUMBER IS",self.accno)
b=bank(20000,123)
amount_of_withdrawal=b.withdrawn(1000)
print(amount_of_withdrawal)
b.print()
b.deposit(2000)
b.print()
del b
#print(b)   its deleted so it will thrwo that it isnt found 