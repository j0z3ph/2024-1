import tkinter as tk
from tkinter import ttk



ventana = tk.Tk()
ventana.wm_title('Hola GUIs')
ventana.wm_minsize(300,200)
#ttk.Style().configure("E1.TLabel", foreground="red")
etiqueta = tk.Label(ventana,text="Hola a Todes", foreground="brown")
etiqueta.pack()
#boton = tk.Button(ventana, text="Presioname")
#boton.pack()
#etiqueta2 = ttk.Label(master=ventana, text="Otro texto", style="E1.TLabel")
#etiqueta2.pack()


ventana.mainloop()