class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def speak(self):
        print("Dog barks")

class Cat(Animal):
    def speak(self):
        print("Cat meows")

# Polymorphism in action:
animals = [Dog(), Cat(), Animal()]

for animal in animals:
    animal.speak()



class Calculator:
    def add(self, a, b=0, c=0):
        return a + b + c

calc = Calculator()
print(calc.add(2))       # 2
print(calc.add(2, 3))    # 5
print(calc.add(2, 3, 4)) # 9
