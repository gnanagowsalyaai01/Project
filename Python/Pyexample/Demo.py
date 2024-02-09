'''def subtraction():
    a=4-1-1
    print(a)
    if a==3:
      print("A is 3")
      x="Kowsi is good girl"
      for x1 in x:
         print(x1)
      x=x.split(" ")
      for x2 in x:
         print(x2)
    elif a < 6:
      print("A is Lessthan ")
      z="Kowsi is naughty girl"
      for x1 in z:
         print(x1)
      z=z.split(" ")
      for x2 in z:
         print(x2)
    y=input("Enter the value:").split()
    print(y)
subtraction()'''

#while
'''k=0
while k < 5:
    k = k+1
    print(k)'''

import turtle
wn = turtle.Screen()
wn.setup(width=400, height=400)
red = turtle.Turtle()

def curve():
    for i in range(200):
        red.right(1)
        red.forward(1)

def heart():
    red.fillcolor('red')
    red.begin_fill()
    red.left(140)
    red.forward(113)
    curve()
    red.left(120)
    curve()
    red.forward(112)
    red.end_fill()

heart()
red.ht()
turtle.done()