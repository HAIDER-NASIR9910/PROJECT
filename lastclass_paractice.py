class student:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def get_name(self):
        return self.name
    def get_age(self):
        return self.age
    def print(self):
        print("NAME IS",self.name)
        print("AGE IS",self.age)

class fee(student):
    def __init__(self,name,age,status):
        super().__init__(name,age)
        self.status=status
    
    def print(self):
        print("NAME IS",self.name)
        print("AGE IS",self.age)
        print("STATUS IS",self.status)

fee1=fee("HAIDER",19,"PAID")
fee1.print()                          #inheritnace & encapsulation done


class bank_account:
    def __init__(self,name,acc_no):
        self.name=name
        self.acc_no=acc_no
        self.__password=True
    
    def print(self):
        print("NAME IS",self.name)
        print("ACCOUNT NO IS",self.acc_no)
        print("PASSWORD IS",self.__password)

b=bank_account("HAIDER",123)
b.print()

#class car:                                #abstratction __
    #def start(self):
        #self.__engine=True
        #self.__accelator=True
        #self.__move1=True
    #def stop(self):
       #self.__engine=False
        #self.__break_=True
        #self.__move2=False
    #def print(self):
        #print("moved",self.__move)
#car1=car()
#car1.print()


class Animal:
    def sound(self):                         #run time poly_morphsim or method overloading
        print("Generic animal sound")

class Lion(Animal):
    def sound(self):
        super().sound()
        print("ROAR")

class Dog(Lion):
    def sound(self):
        super().sound()
        print("BARK")

class Bird(Dog):
    def sound(self):
        super().sound()
        print("CHIRPING")

b = Bird()
b.sound()





