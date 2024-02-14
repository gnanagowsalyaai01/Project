class subject():
    def __init__(self):
        print("Subjects for twelfth standard")
    def tamil(self):
        print("Tamil is one of the sub in 12th standard ")
    def english(self):
        print("English is one of the sub in 12th standard ")
    def computerscience(self):
        print("English is one of the sub in 12th standard ")
    def maths(self):
        print("Maths is one of the sub in 12th standard ")
    def physics(self):
        print("Physics is one of the sub in 12th standard ")
    def chemistry(self):
        print("Chemistry is one of the sub in 12th standard ")
    

class exam(subject):
    def __init__(self):
        print("Exam details")
        super().tamil()
        super().english()
        super().maths()
        super().computerscience()
        super().physics()
        super().chemistry()
    def quarterly(self):
        print("Quarterly Examinations")
    def halfyearly(self):
        print("Halfyearly Examinations")
    def annual(self):
        print("Annual Examinations")

class student(subject) :
    def __init__(self):
        print("This is Kowsi")
        super().tamil()
        super().english()
        super().maths()
        super().computerscience()
        super().physics()
        super().chemistry()
    def positiveresult(self):
        print("Congratulations you are pass")
    def negativeresult(self):
        print("Sorry you are fail")
             

  
candidate=student()


