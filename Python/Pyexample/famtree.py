class grandparents:
    def __init__(self,grandpaname,grandmaname,famname):
        self.grandfathername=grandpaname
        self.grandmothername=grandmaname
        self.familyname=famname
        

    def welcome(self):
        print(self.grandfathername,self.grandmothername, self.familyname)

x=grandparents("Karunanidhi","Dayalu Ammal","DMK")
x.welcome()

class grandparents:
    def __init__(self,grandpaname,grandmaname,famname):
      self.grandfathername=grandpaname
      self.grandmothername=grandmaname
      self.familyname=famname
        

    def welcome(self):
        print(" Welcome to " , self.familyname , " Wishes from " ,self.grandfathername, " and " ,self.grandmothername)


class alagiri(grandparents):
    def __init__(self, grandpaname, grandmaname, famname,paname,maname):
          self.fathername=paname
          self.mothername=maname
          super().__init__(grandpaname, grandmaname, famname)
  

    def thank(self):
        print(" Hai!....Grandpa" ,self.grandfathername ,"and Grandma", self.grandmothername ,"We" , self.fathername, "and" ,self.mothername,  " thank you for warm welcome to our " , self.familyname, "family")

x=alagiri("Karunanidhi","Dayalu ammal", "DMK","Alagiri", "Kanthi Alagiri")
x.welcome()
x.thank()





        