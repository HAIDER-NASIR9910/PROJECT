list=[1,2,3,4]
list.append(5)
list.remove(4)
list.insert(2,10)
print(list.index(5))
tuple=tuple(list)
print(tuple)
print(list)
for i in range(len(list)):
    if list[i]==2:
        print("FOUND")

for e in list:
    print(e)

list_of_tuple=[(1,2,3),(4,5,6)]
set=set(list_of_tuple)
print(set)


tuple=(1,2,3,4)
print(tuple.count(2))
for i in tuple:
    print(i)


dict={"NAME":"HAIDER",
      "AGE":19,
      "CLASS":14}
print(dict)
for key,value in dict.items():
    print(key,value)
dict["somthing"]="NOTHING"
print(dict)
dict={"NAME":"HAIDER",
      "AGE":19,
      "CLASS":14,
      "score":{"phy":98,
               "che":99}}
print(dict["score"]["phy"])
dict.pop("NAME")
print(dict)
del dict
print(dict)

set={1,2,3,5,6,5}
set2={1,3,7,8}
print(set)
set.add(7)
print(set)
set3=set|set2
print(set3)
set3.clear()
set3=set&set2
print(set3)
set.discard(3)
set.remove(3)



