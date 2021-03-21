# Arduino_PCF8591_Write_Analog_Value_I2C

Specific value Voltage generator by PCF8591 module for Arduino boards.   

#### How to use it
1. Open the project by __platformio__ (platformio.org)
2. Build and upload the project to your arduino board
3. make connection between your Arduino board and PCF8591 module
4. Input your a specific value in Serial monitor of Arduino IDE between 0.00 <value<5.00 ; for example 0.01 or 3.75
5. You will see the voltage output on the pin __AOUT__ of PCF8591

#### Arduino IDE users

If you want to flash the code to your Arduino board by Arduino IDE, move the code inside /src/main.cpp  to the main code of your Arduino IDE project (.ino) and install the library inside /lib (PCF8591.zip) to your Arduino IDE, then build & upload. 

### Connection
| Arduino board (UNO) | PCF8591 Module   |
|---|---|
| 5V  | VCC   |
| GND  | GND  |
| A4 (SDA)  | SDA |
| A5 (SCL) | SCL| 
 
### More info
See /Resources

### If you need any help or information:
:large_blue_circle:	 Facebook: https://www.facebook.com/walidamriou   
:large_blue_circle:  Twitter: https://twitter.com/walidamriou    
:large_blue_circle:  Linkedin: https://www.linkedin.com/in/walidamriou  
:red_circle: Email:  contact [at] walidamriou [dot] com    

### Copyright CC 2020 Walid Amriou

<a rel="license" href="http://creativecommons.org/licenses/by-nc-nd/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-nd/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-nd/4.0/">Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License</a>.

__You are free to:__
- __Share__ copy and redistribute the material in any medium or format

__Under the following terms:__
- __Attribution__ You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.

- __NonCommercial__ You may not use the material for commercial purposes.

- __NoDerivatives__ If you remix, transform, or build upon the material, you may not distribute the modified material.

- __No additional restrictions__ You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.


the software or Code or Scripts or any files in this source is provided "as is" and the author disclaims all warranties with regard to this files including all implied warranties of merchantability and fitness. in no event shall the author be liable for any special, direct, indirect, or consequential damages or any damages whatsoever resulting from loss of use, data or profits, whether in an action of contract, negligence or other tortious action, arising out of or in connection with the use or performance of this software or code or scripts or any files in this source.
