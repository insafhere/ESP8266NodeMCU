# ESP8266NodeMCU

ESP8266 NodeMCU is well-known for its WIFI capabilities, but, there is only 1 analog input pin. Hence, typical circuit connection would not enable us to collect more than 1 analog input reading. However, there are 2 ways to get over this. One is to either get a multiplexer and or the simpler solution is to create a circuit that mimicks a multiplexer. In this repository, i will show you the code and circuit connection to mimick a multiplexer.

Overall for my circuit setup, there is 3 photoresistors connected to collect analogo input data. The number of photoresistors could be scaled up to the number of GPIO pins available in the NodeMCU.

**Below is the image of the setup:**

<img src="https://user-images.githubusercontent.com/84378807/138914127-3511a3a0-d95c-4273-901d-c235b2828d43.png" width=50% height=50%>

**Here is how the data would look like on Serial Monitor:**

<img src="https://user-images.githubusercontent.com/84378807/138913482-5b8ad41b-29b2-4802-8e35-ad00921c85e8.png" width=50% height=50%>

**NodeMCU GPIO Pins**

<img src="https://user-images.githubusercontent.com/84378807/138916812-6ccfff58-1db8-4f80-8389-28262be5e41c.png" width=50% height=50%>

**Reference:**
https://www.youtube.com/watch?v=QW0YcxN3pao&ab_channel=cabuu


