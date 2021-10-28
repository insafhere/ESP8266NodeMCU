# ESP8266NodeMCU

What is NodeMCU?

NodeMCU is an open source IoT platform. It includes firmware which runs on the ESP8266 Wi-Fi SoC from Espressif Systems, and hardware which is based on the ESP-12 module. The term "NodeMCU" by default refers to the firmware rather than the development kits. The firmware uses the Lua scripting language.

To be able to use the ESP8266 NodeMCU, will have to do these steps:

Open Your Arduino IDE, then open preference from the file menu, then copy this link http://arduino.esp8266.com/stable/package_esp8266com_index.json to additional board manager URLs
Open board manager from tools -> board -> board manager.and search from "nodemcu". Then select the latest version from the dropdown menu and click install and restart the Arduino IDE.

**What is the problem?**

ESP8266 NodeMCU is well-known for its WIFI capabilities, but, there is only 1 analog input pin. Hence, typical circuit connection would not enable us to collect more than 1 analog input reading. However, there are 2 ways to get over this. One is to either get a multiplexer and or the simpler solution is to create a circuit that mimicks a multiplexer. In this repository, i will show you the code and circuit connection to mimick a multiplexer.

Overall for my circuit setup, there are 4 photoresistors in the circuit to collect analog input data. 220ohm resistors used to connect the photoresistors to GND. The number of photoresistors could be scaled up to the number of GPIO pins available in the NodeMCU.

**Below is the image of the setup:**

<img src="https://user-images.githubusercontent.com/84378807/139074780-ce2ab4a7-d1ba-452f-b3b2-348deca67bbd.jpg" width=50% height=50%>

**Here is how the data would look like on Serial Monitor:**

<img src="https://user-images.githubusercontent.com/84378807/139074382-e1fb980e-bebb-4cf8-8c97-e940fa59990b.png" width=50% height=50%>

**NodeMCU GPIO Pins**

<img src="https://user-images.githubusercontent.com/84378807/138916812-6ccfff58-1db8-4f80-8389-28262be5e41c.png" width=50% height=50%>

**Arduino Resistors**

<img src="https://user-images.githubusercontent.com/84378807/139075330-ff25e6ae-01ed-441e-b21e-01304a01189a.png" width=50% height=50%>

**Reference:**
https://www.youtube.com/watch?v=QW0YcxN3pao&ab_channel=cabuu

