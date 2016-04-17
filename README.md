# Rotary Screw Dispenser 2
New version of the original Rotary Screw Dispenser.

<b>This README as well as the rest of this project is being developped right now so big changes will happen. Related to this README I appreciate any help but above all i would appreciate corrections to my very improvable english and any ideas for the name of the machine and the parts.</b>

## What is the Rotary Screw Dispenser?
The idea behind this project is to create a machine capable of separating a certain amount of nuts or count a large amount of them in a simple and affordable way.

The principles of this project are:
* <b>Modular and adaptable:</b> the machine is being designed with this as a requirement so everyone will be able to adapt it to their needs. The idea is to make this machine useful to the maker who wants a tool to count the nuts he has at home, but also to the small entrepreneur who sells DIY kits and want a lean production line with multiples machines working at the same time.
* <b>Open Source:</b> anyone can download, modify and learn from this project. I will only use free and open source software to create anything related with this project. Right now i'm using FreeCad and the Arduino IDE and I plan to use KiCad and GIMP in the next stages of the development. I make this to support the open source tools and to give everyone who wants to follow this project the ease of reading or modifying any file with free and open programs. 
* <b>Easy to use and affordable:</b> it won't be necessary to have any previous knowledge in coding or engineering to make it work and it is being designed to be as cheap as possible without losing in quality or precision. The idea behind this two points is to ensure that anyone who wants to build the machine is going to be able to make it without having to expend to much money and many hours.
* <b>Modifiable:</b> Related to the first to principles (adaptable and open source) is the idea to make it easy to be modified by the user, this is also reflected in the design as it will have an easy access to the electronics, the servo and the sensor and a direct USB conection to the microprocessor.


## How does it work?
This machine uses the rotation of a servo motor and a simple system of matching holes to separate the nuts one by one making them fall by a tunnel so a sensor can detect them when they pass by.

The structure of the machine consist of three parts:
* <b>The circular piece with the holes:</b> this is the part that goes on top screwed to the axis of the servo. It has eight holes with the diameter of the nuts that the user wants to make them through. When it is screwed it has an inclination of 45 degrees, this way only the nuts that get into the holes are the ones who make it to the top when the piece rotates. This part is the only one who has to be changed when the user wants to change the diameter of the nuts that he wants to separate.
* <b>The servo's piece:</b> the servo is embedded and screwed to this part through the same holes and by the same screws that unit them to the housing. It also have an extra hole that goes on top when the three parts are joined together; this is the hole through which pass all nuts, because of that this hole has to be bigger than the biggest diameter that the machine can work with.
* <b>The housing:</b> the housing is the main part of the machine and is where the electronics, the sensor and the main part of the servo are cointained. It is united to the servo and the servo's piece by screws as said before. It has conectors to feed the machine and to program the microprocessor and a cover behind that can be opened unscrewing four screws to access to the electronics, the sensor and the servo.


## What's new in this second version?


## License
This project is licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License](http://creativecommons.org/licenses/by-sa/4.0/)
