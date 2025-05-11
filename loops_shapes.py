for i in range(5):
    for j in range(i+1):
        print("*",end=" ")
    print()

print()

for i in range(5):
    for j in range(i,5):
        print("*",end=" ")
    print()


for i in range(5):
    for j in range(i,5):
        print(" ",end="")
    for k in range(i+1):
        print("*",end="")
    print()

print()

for i in range(5):
    for j in range(i+1):
        print("",end=" ")
    for k in range(i,5):
        print("*",end="")
    print()