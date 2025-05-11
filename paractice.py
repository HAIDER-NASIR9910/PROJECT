class Student:
    school="SST PUBLIC SCHOOL RASHIDABAD"
    def __init__(self,name,id):
        self.name=name
        self.id=id
    def print(self):
        print(self.name)
        print()
        print(self.id)
    
class Teacher(Student):
    def __init__(self, name, id,course):
        super().__init__(name, id)
        self.course=course

    def print(self):
        print(self.name)
        print(self.id)
        print(self.course)

S=Student("HAIDER NASIR",14163)
S.print()
print()
s2=Teacher("HAIDER",14163,"PFAI")
s2.print()