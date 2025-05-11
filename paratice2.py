list=["HAIDER","NASIR","ATTA","UMER"]
for i in range(len(list)):
    print(list[i])

list[1]="NOTHING"
for i in range(len(list)):
    print(list[i])

list.append("five")
#list.remove("NASIR")
for i in range(len(list)):
    print(list[i])