import tkinter as tk
import tkinter.messagebox as msg

def funcion():
    msg.showinfo("Titulo", "Esto es un mensaje")

ventana = tk.Tk()
ventana.wm_title("Hola")
ventana.wm_minsize(300,300)
tk.Button(master=ventana, text="Pushame", command=funcion).pack()

ventana.mainloop()