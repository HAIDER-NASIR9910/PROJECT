class car:
    def __init__(self,start,stop):
        self.start=start
        self.stop=stop
    
    def start(self):
        print("YOUR CAR IS STARTED",self.start)

    def stop(self):
        print("YOUR CAR IS STOP",self.stop)



class Toyota(car):
    def __init__(self,name,start,stop): 
        super().__init__(start,stop)
        self.name=name

    def print(self):
        print(self.start)
        print(self.stop)
        print(self.name)

    
t=Toyota("COROLLA",True,False)
t.print()