import socket
import threading
import tkinter as tk
from tkinter import simpledialog, scrolledtext, messagebox

HOST = '127.0.0.1'
PORT = 55555

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect((HOST, PORT))

nickname = ''

def receive():
    while True:
        try:
            msg = client.recv(1024).decode('utf-8')
            if msg == 'NICK':
                client.send(nickname.encode('utf-8'))
            else:
                text_area.config(state='normal')
                text_area.insert('end', msg + '\n')
                text_area.config(state='disabled')
                text_area.see('end')
        except:
            messagebox.showerror("Error", "Connection lost.")
            break

def write():
    msg = f"{nickname}: {input_area.get()}"
    client.send(msg.encode('utf-8'))
    input_area.delete(0, 'end')

# GUI
window = tk.Tk()
window.title("Chat App")

text_area = scrolledtext.ScrolledText(window)
text_area.pack(padx=20, pady=5)
text_area.config(state='disabled')

input_area = tk.Entry(window, width=50)
input_area.pack(padx=20, pady=5)

send_button = tk.Button(window, text="Send", command=write)
send_button.pack()

# Get nickname
nickname = simpledialog.askstring("Nickname", "Enter your nickname:", parent=window)

# Start receive thread
receive_thread = threading.Thread(target=receive)
receive_thread.start()

window.mainloop()
