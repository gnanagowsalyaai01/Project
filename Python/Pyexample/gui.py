from tkinter import *
app=Tk()
app.title("Arithmatic operators")
app.geometry("500x500+100+500")
app.config(bg="gray")


def clkresult():
    a=13
    b=17
    c=a+b
    lbltitle.config(text=c,fg="blue")

lbltitle=Label(app,text="Arithmatic operations")
lbltitle.grid(row=0,column=1,padx=40,pady=40)


inputbox1=Entry(app,width=30)
inputbox1.grid(row=0,column=2)


lbltitle1=Label(app,text="Arithmatic operations")
lbltitle1.grid(row=1,column=1,padx=40,pady=40)


inputbox2=Entry(app,width=30)
inputbox2.grid(row=1,column=2)

clickme=Button(app, text="addition",  command=clkresult,)
clickme.grid(row=2,column=8,padx=40,pady=40)


app.mainloop()