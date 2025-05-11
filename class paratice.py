class bank:
    bank_name="HBL"                               #inheritance
    def __init__(self,balance,acc_no):
        self.balance=balance
        self.acc_no=acc_no
    def deposit(self,amount):
        self.balance=self.balance-amount
        return amount
    def withdrawn(self,amount):
        self.balance=amount+self.balance
    def print(self):
        print("TOTAL AMOUNT",self.balance)
    
class student(bank):
    def __init__(self, balance, acc_no,age):
        super().__init__(balance, acc_no)
        self.age=age

class owner(bank):
    def __init__(self,balance,acc_no,name):
        super().__init__(balance,acc_no)
        self.name=name
o=owner(20000,123,"HAIDER")
o.withdrawn(100)
o.print()
o.deposit(200)
o.print()

class complex:                                 #polymorhsim
    def __init__(self,real,imaginary):
        self.real=real
        self.imaginary=imaginary
    def __add__(self,c2):
        new_real=self.real+c2.real
        new_imaginary=self.imaginary+c2.imaginary
        return complex(new_real,new_imaginary)
    def print(self):
        print("[",self.real,"i",",",self.imaginary,"j","]")

c=complex(2,3)
c2=complex(3,4)
c3=complex(0,0)
c3=c+c2
c3.print()


class num:                            #method overloading
    def __int__(self,num1,num2):
        self.num1=num1
        self.num2=num2 
    def __init__(self):
        self.num1=0
        self.num2=0
    def getnum1(self,num1):
        return self.num2
    def getnum2(self,num2):
        return self.num2
    
    
class animal:         #static binding
    @staticmethod
    def sound1():
        print("hello from parent class")

class bird(animal):
    @staticmethod
    def sound2():
        print("hello from bird class")

class dog(bird):
    @staticmethod
    def sound3():
        print("HELLO FROM DOG CLASS")

d=dog()
dog.sound2()
b=bird()
b.sound1()
a=animal()
a.sound1()



