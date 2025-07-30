# 👓 Blind Man Glasses - Obstacle Detection System

An assistive wearable device for visually impaired individuals that uses ultrasonic sensors to detect obstacles and alerts the user using a buzzer and vibration motor.

## 📌 Features

- Obstacle detection up to 2 meters
- Real-time feedback using buzzer and vibration
- Wearable design (mounted on glasses or cap)
- Low power, Arduino-based implementation

## 🧰 Hardware Components

- Arduino UNO / Nano
- Ultrasonic Sensor (HC-SR04)
- Buzzer
- Vibration Motor
- Jumper wires
- Battery (9V or Li-ion)
- Breadboard / custom PCB
- Safety glasses or cap (for mounting)

## 💡 How It Works

- The ultrasonic sensor measures the distance in front of the user.
- If an obstacle is detected within a set range (e.g., 100 cm):
  - 🔔 The buzzer beeps.
  - 🔄 The vibration motor vibrates.
- These signals help the user navigate safely.

## 🧠 Circuit Diagram

![Circuit Diagram](images/circuit_diagram.png)

## 💻 Arduino Code

The code is available in [`blind_man_glasses.ino`](blind_man_glasses.ino)

## 📸 Prototype Image

![Prototype](images/prototype_photo.jpg)

## 🎥 Demo Video

[Watch Demo](https://your-youtube-link.com)

## 📋 File Structure

- `blind_man_glasses.ino` - Main Arduino code
- `images/` - Circuit and prototype images
- `demo/` - Optional demo video
- `README.md` - Project documentation

## 🛠️ Future Improvements

- Rechargeable battery integration
- Waterproof casing
- Speech output using speaker or earphones

## 📜 License

This project is licensed under the MIT License.

## 🙋‍♂️ Author

**Keerthivasan Govindaraju**  
GitHub: [Vasandeveloper](https://github.com/Vasandeveloper)  
LinkedIn: [Keerthivasan's LinkedIn](https://www.linkedin.com/in/keerthivasan-govindaraju-364076319)
