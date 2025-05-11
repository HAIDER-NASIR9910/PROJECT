def multiply(x,y):
    return x*y
x=int((input("ENTER THE X")))
Y=int((input("ENTER THE Y")))
result=multiply(x,Y )
print(result)
i=0
while i<=10:
    print(i)
    i+=1
list=[1,2,3]
t=tuple(list)
print(t)
for i in range(len(list)):
    print(list[i])

for e in t:
    print(e)

s=set()
for i in range(2,10):
    if i%2==0:
        s.add(i)
print(s)

s.remove(6)
print(s)

dict={"HAIDER":99,"ATTA":91,"ABDULLAH":92}
for key,value in dict.items():
    print(key,value)

class student:
    def __init__(self,name,grade):
        self.name=name
        self.grade=grade
    
    def print(self):
        print("NAME",self.name)
        print("GRADE",self.grade)

st1=student("HAIDER","A")
st1.print()
