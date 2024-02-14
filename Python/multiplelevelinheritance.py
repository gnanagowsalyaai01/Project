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
    

class exam():
    def __init__(self):
        print("Exam details")
    def quarterly(self):
        print("Quarterly Examinations")
    def halfyearly(self):
        print("Halfyearly Examinations")
    def annual(self):
        print("Annual Examinations")

class student(subject,exam) :
    def __init__(self):
        print("This is Kowsi")
        super().tamil()
        super().english()
        super().maths()
        super().computerscience()
        super().physics()
        super().chemistry()
        super().quarterly()
        super().halfyearly()
        super().annual()


class study(student):
    pass
  
a=study()