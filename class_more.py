class Acc:
    def  __init__(self,balance):
        self.__password__="123"
        self.balance=balance
    def print(self):
        print("BALANCE IS",self.balance)
        #print("PASSWORD IS",self.password__)


c1=Acc(1000)
c1.print()
#print(c1.__password)

feature_set1 = [5.1, 3.5, 1.4, 0.2]   
feature_set2 = [6.2, 2.9, 4.3, 1.3]   
two_d_list=[feature_set1,feature_set2]
new_sample= [5.8, 2.7, 3.9, 1.2] 
two_d_list.append(new_sample)
x=feature_set1[2]
y=feature_set2[2]
z=new_sample[2]
new_list=[x,y,z]
print(two_d_list)
print(new_list)

three_d_list = [two_d_list]  # Now it's 1 × 3 × 4

print("\n3D List:")
print(three_d_list)
