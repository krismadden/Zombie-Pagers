# 1. Zombie-Pagers
Zombie Pagers Workshop for No School Nevers. <a href="https://docs.google.com/presentation/d/1Ye8_0CPXw5tz4qalvi-M3NbH0rnVmPnoX25OQPT_XRs/edit?usp=sharing">Presentation link</a>.

#### Materials
* Ardunio & cord
* OLED Screen
* Radio Transmitter
* Breadboard
* Male Wires
* Button(s)
* Laptop

#### Software
* Arduino IDE (<a href="https://www.arduino.cc/en/Main/Software">Download Arduino here</a>.)


## Wiring

### Transmitter
<img src = "https://i2.wp.com/randomnerdtutorials.com/wp-content/uploads/2018/07/433-mhz-arduino-transmitter_bb.png?raw=true" >

### Reciever 
<img src="https://i0.wp.com/randomnerdtutorials.com/wp-content/uploads/2019/02/433-mhz-arduino_bb.png?raw=true">

### OLED
<img src="https://i1.wp.com/randomnerdtutorials.com/wp-content/uploads/2019/05/oled-display-arduino.png?raw=true">

### Button
<img src="https://www.arduino.cc/en/uploads/Tutorial/button.png">


## Programming

Find the code in the folders.


### Download Libraries
1. Download RadioHead Library from here: (<a href="http://www.airspayce.com/mikem/arduino/RadioHead/" target="_blank">download link is the first on this website</a>) or (<a href="http://www.airspayce.com/mikem/arduino/RadioHead/RadioHead-1.91.zip">direct download link</a>) 
2. In the Arduino IDE click <b>Sketch</b> > <b>Include Library</b> > <b>Add .ZIP Library...</b>
<img src="https://github.com/krismadden/Zombie-Pagers/blob/master/images/Screenshot%202019-07-01%2022.29.06.png?raw=true">
3. Select the RadioHead-1.91.zip from your Downloads folder (or wherever else you saved it)
<br>4. Close and reopen the Arduino IDE.

### Programming // Write Code

### Programming // Upload To Arduino
1. Make sure you have the correct board type selected (ie arduino uno).
<b>Tools</b> >  <b>Board</b> > <b>Arduino/Genuine Uno</b>
2. Make sure you have the correct port selected. (Note: the port name refers to the USB port and not the Arduino).
<b>Tools</b> >  <b>Port</b> > (something like)<b>COM2</b> (For PC or) <b>/dev/ttyusbmodemmfa132</b> (For Mac)
3. Verify the code
4. Upload the code

Note if both arduinos are connected to the same laptop upload the transmitter code first, then the receiver code. This will allow you to open the serial port for the receiver.  

To open the serial monitor press the magnifying class in the top right. Make sure the baudrate in the bottom right corner of the serial port matches that you wrote in the code, 9600. 
<img src="http://www.sharetechnote.com/image/Arduino_Serial_02.png">

## Troubleshooting 

((Solutions to common problems will be updated here)).
