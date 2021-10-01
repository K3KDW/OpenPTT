# OpenPTT
Open source Push-To-Talk hardware primarily for Amateur Radio.
This is a PTT hardware device only, not a full TNC. I highly recommend Direwolf for all software TNC and PTT functions.

_FOLLOW THESE STEPS IN ORDER:_
1) Download all files in this repository
2) Flash the arduino.ino code onto your Arduino device. Refer the the many tutorials on setting up the Arduino IDE and flashing a device
3) Open the file called "99-openptt.rules" and follow the instructions
4) Run the following command in a linux terminal: sudo usermod -a -G dialout USERNAME (Replace USERNAME with your Linus user name. This lets non-root users utilize the OpenPTT)
5) Open the file called "schematic" and follow the instructions
