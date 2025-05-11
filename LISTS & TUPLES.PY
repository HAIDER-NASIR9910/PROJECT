list=["machine learning","NN","NLP","CV","RL"]
print(list[2])
list[3]="dl"
print(list)
list.append("ROBATICS")
print(list)
accarucy_score=[0.85,0.98,0.78,0.88,0.91,0.82]
average=sum(accarucy_score)/len(accarucy_score)
print(average)
MAXI=max(accarucy_score)
MINI=min(accarucy_score)
        
print("MINMUM NUMBE IN THE LIST IS :",MINI)
print("MAXIMUM NUMBER IN THE LIST IS",MAXI)
accarucy_score.remove(MINI)
print(accarucy_score)



ai_models={"DECISION TREE":"SUPREVISED LEARNING",
           "K-MEANS":"UNSUPREVISIED LEARNING",
           "NEURAL NEWTORKS":"DEEP LEARNING"}
print(type(ai_models["K-MEANS"]))
ai_models["SVM"]="SUPREVISED LEARNING"
print(ai_models)
ai_models["NEURAL NEWTORKS"]="SUPREVISEDLEARNING/UNSUPREVISEDLEARNING"
print(ai_models)

hyperparams={"learning_rates":0.001,
             "batch_size":32,
             "cpochos":50,
             "dropout_rates":0.2}
for key in hyperparams:
    if key=="batch_size":
        print(True)
        break
    else:
        print(False)
print()


for key,value in hyperparams.items():
    print(key,value)

hyperparams["cpochos"]=100
print(hyperparams)
hyperparams.pop("dropout_rates")
print(hyperparams)
hyperparams["optimizer"]="adam"
print(hyperparams)

data_sample=["cat","dog","bird","cat","dog"]
print(data_sample.count("cat"))
guess=10
while True:
    num=int(input("ENTER THE NUMBER"))
    if num==guess:
        print("FIND")
        break
    elif num>guess:
        print("ENTER LESS NUMBER")
    elif num<guess:
        print("ENTER LITTLE BIT GRATER NUMBER")
guess=11
print("YOU ONLY HAVE THREE TRIES")
for i in range(0,3):
    num=int(input("ENTER THE NUMBER"))
    if num==guess:
        print("FIND")
        break
    elif num>guess:
        print("ENTER LESS NUMBER")
    elif num<guess:
        print("ENTER LITTLE BIT GRATER NUMBER")


set={1,2,2,3,3,1,4}
set2={4,5,6,7}
print(set)
set3=set.intersection(set2)
print(set3)
set4=set.union(set2)
print(set4)
set5=set.difference(set2)
print(set5)
list.insert(1,"haider")
print(list)
