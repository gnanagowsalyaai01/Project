from tkinter import *
import mysql.connector

mark=Tk()
mark.title("Student Marklist")
mark.geometry("800x600+300+60")
mark.config(bg="sky blue")

def myDBconnection():
  list=mysql.connector.connect(
  host="192.168.1.240",
  user="AIBATCH01",
  password="AI@123",
  database="k_kowsalya"
  )

  return list


def insertvalues():
  a=(inputa.get())
  b=(inputb.get())
  c=(inputc.get())
  d=(inputd.get())
  e=(inpute.get())
  f=(inputf.get())
    
  

  l_entry=myDBconnection()
  result=l_entry.cursor()
    
  statement="insert into studlist (NAME,TAMIL,ENGLISH,MATHS,SCIENCE,SOCIALSCIENCE) values(%s,%s,%s,%s,%s,%s);"
  valuepass=(a,b,c,d,e,f)
  result.execute(statement,valuepass)
  l_entry.commit()

  print(result.rowcount," row inserted")


def updatevalues():
  a=(inputa.get())
  b=(inputb.get())
  c=(inputc.get())
  d=(inputd.get())
  e=(inpute.get())
  f=(inputf.get())
    
  

  l_entry=myDBconnection()
  result=l_entry.cursor()
    
  statement ="update studlist set ENGLISH = (%s) where NAME = (%s);"
  valuepass=(c,a)
  result.execute(statement,valuepass)
  l_entry.commit()

  print(result.rowcount," row updated")


def deletevalues():
  a=(inputa.get())
  b=(inputb.get())
  c=(inputc.get())
  d=(inputd.get())
  e=(inpute.get())
  f=(inputf.get())
    
  

  l_entry=myDBconnection()
  result=l_entry.cursor()
    
  statement = "delete from studlist where NAME = (%s)"
  valuepass=(a,)
  result.execute(statement,valuepass)
  l_entry.commit()

  print(result.rowcount," row deleted")

 


 

labmsg=Label(mark,text="Name",bg="black",fg="white")
labmsg.grid(row=1,column=20,padx=10, pady=30)

inputa=Entry(mark,width=20)
inputa.grid(row=1,column=25,padx=10, pady=30)


labmsg=Label(mark,text="Tamil",bg="black",fg="white")
labmsg.grid(row=2,column=20,padx=10, pady=30)

inputb=Entry(mark,width=10)
inputb.grid(row=2,column=25)

labmsg=Label(mark,text="English",bg="black",fg="white")
labmsg.grid(row=3,column=20,padx=10, pady=30)

inputc=Entry(mark,width=10)
inputc.grid(row=3,column=25)

labmsg=Label(mark,text="Maths",bg="black",fg="white")
labmsg.grid(row=4,column=20,padx=10, pady=30)

inputd=Entry(mark,width=10)
inputd.grid(row=4,column=25,padx=10,pady=30)

labmsg=Label(mark,text="Science",bg="black",fg="white")
labmsg.grid(row=5,column=20,padx=10, pady=30)

inpute=Entry(mark,width=10)
inpute.grid(row=5,column=25,padx=10,pady=30)

labmsg=Label(mark,text="Social science",bg="black",fg="white")
labmsg.grid(row=6,column=20,padx=10, pady=30)


inputf=Entry(mark,width=10)
inputf.grid(row=6,column=25,padx=10,pady=30)

btnins=Button(mark,text="Insert", command=insertvalues)
btnins.grid(row=20, column=30)

btnup=Button(mark,text="Update", command=updatevalues)
btnup.grid(row=20, column=40)

btndel=Button(mark,text="Delete",command=deletevalues)
btndel.grid(row=20,column=50)



mark.mainloop()