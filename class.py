class complex:
    def __init__(self,real,imaginary):
        self.real=real
        self.imaginary=imaginary

    def print(self):
        print("real part is :[",self.real,"i ,",self.imaginary,"J]")
        #print("imaginary part is :", self.imaginary)
    
    def __add__(self,c2):
        new_real=self.real+c2.real
        new_imaginary=self.imaginary+c2.imaginary
        return complex(new_real,new_imaginary)

c1=complex(2,3)
c2=complex(3,4)
c3=complex(0,0)
c3=c1+c2
c3.print()


class Number:
    def __init__(self,num1,num2):
        self.num1=num1
        self.num2=num2
    def __add__(self,n2):
        new_num1=self.num1+n2.num1
        new_num2=self.num2+n2.num2
        return Number(new_num1, new_num2)
    
    def print(self):
        print("NUM1 IS",self.num1)
        print("NUM2 IS",self.num2)

N=Number(1,2)
#print(N.num2)
#print(N.num1)
n2=Number(1,2)
n3=Number(0,0)
n3=N+n2
n3.print()



class animal:
    def __init__(self):
        print("ANIMAL CLASS IS CALLED")
    
    @staticmethod
    def func1():
        print("HELLO FROM PARENT CLASS")

class bird(animal):
    def __init__(self):
        print("BIRD CLASS IS CALLED")
    
    @staticmethod
    def func2():
        print("HELLO FROM CHILD CLASS")


class dog(bird):
    def __init__(self):
        print("BIRD CLASS IS CALLED")
    
    @staticmethod
    def func3():
        print("HELLO FROM CHILD TO CHILD CLASS")

d=dog()
d.func1()
d.func2()
d.func3()

class num:
    __num1=9

n=num()
#num.__num1  cant do this bcz it is private
