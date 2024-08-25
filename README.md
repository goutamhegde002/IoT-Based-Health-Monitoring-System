# IoT-Based Health Monitoring System

## Description
Develop a wearable device that tracks vital signs like heart rate, temperature, and activity levels, and sends the data to a healthcare provider. The system uses sensors to monitor health metrics and a Bluetooth module to transmit data to a mobile app.

## Project Structure

```
iot-health-monitoring-system/
├── src/
│   ├── health_monitor.ino
├── mobile_app/
│   ├── app.py
│   ├── requirements.txt
└── README.md
```


## Components
- **Microcontroller**: Arduino or compatible board
- **Sensors**: Heart Rate Sensor, Temperature Sensor, Activity Sensor
- **Bluetooth Module**: HC-05 or similar
- **Mobile App**: Flask-based web server

## How to Use

### 1. Microcontroller Setup
1. Open `health_monitor.ino` in the Arduino IDE.
2. Upload the code to your microcontroller.
3. Connect the sensors to the appropriate pins.

### 2. Mobile App Setup
1. Install dependencies using `pip install -r requirements.txt`.
2. Update the Bluetooth MAC address in `app.py` to match your device.
3. Run the Flask app with `python app.py`.

### 3. Accessing the Dashboard
1. Open a web browser and navigate to `http://localhost:5000`.
2. View real-time health data transmitted from the wearable device.

## Deployment
1. Ensure your microcontroller is paired with your Bluetooth module.
2. Deploy the Flask app on a server or local machine to view the data.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.

## Contributing
Contributions are welcome! Please fork this repository and submit a pull request with your improvements.

## Notes
- Ensure the sensors and Bluetooth module are correctly connected.
- Adjust sensor calibration and thresholds based on your requirements.
