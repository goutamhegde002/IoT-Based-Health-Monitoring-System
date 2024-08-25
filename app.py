from flask import Flask, render_template, request
import bluetooth

app = Flask(__name__)

# Set up Bluetooth connection
bt_socket = bluetooth.BluetoothSocket(bluetooth.RFCOMM)
bt_socket.connect(("00:00:00:00:00:00", 1))  # Replace with your device's MAC address

@app.route('/')
def index():
    data = bt_socket.recv(1024).decode('utf-8')
    return render_template('index.html', data=data)

if __name__ == '__main__':
    app.run(debug=True, host='0.0.0.0')
