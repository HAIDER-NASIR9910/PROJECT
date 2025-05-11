list=["haider","atta","umer","ali"]
print(list[::])
print(list[0:3:2])
list[0]="HAIDER NASIR"
list.remove("ali")
list.append("abcd")
list.sort()
list.insert(1,"nothing")
list1=[1,2,3,4,5]
merge=[list,list1]
print(merge)
print(merge[1][4])
list.sort(reverse=True)
print(list)
for e in list:
    print(e)
list=[1,2,3,4]
print(max(list))
print(min(list))

tuple=(1,2,3,4,5)
for e in tuple:
    print(e)

dict={"NAME":"haider","AGE":19}
for value,key in dict.items():
    print(value,key)

set1={1,2,3,(2,4,5)}
set2={4,5,6}
for e in set1:
    print(e)
