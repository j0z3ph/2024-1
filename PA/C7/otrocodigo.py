import tkinter as tk
from tkinter import ttk
from PIL import Image, ImageTk

ventana = tk.Tk()
ventana.wm_title("Buenos dias")
imagen = ImageTk.PhotoImage(Image.open('img.jpeg'))
piolin = ttk.Label(master=ventana, image=imagen)
piolin.pack()

ventana.mainloop()