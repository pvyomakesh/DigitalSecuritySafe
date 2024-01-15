# Implementation 3: Microcontroller-Based Design for Digital Security Safe (DSS)
## Overview
Implementation 3 showcases the implementation of the DSS using the dsPIC33EP64MC502 microcontroller. This project demonstrates the intricate process of microcontroller programming, interfacing with an LCD display, and managing input/output operations through hardware components.

## Microcontroller Implementation
### Core Files:
* [EE200_LCD.c](Implementation_3/EE200_LCD.c): Main C source code for handling the LCD interface.
* [EE200_LCD.h](Implementation_3/EE200_LCD.h): Header file associated with the LCD interface functions.
* [LED_Dimmer.c](Implementation_3/LED_Dimmer.c): Source code for controlling LED dimming features.
### Supporting File:
* [Makefile](Implementation_3/Makefile): Used for compiling the project, ensuring all components are correctly assembled and linked.
## Circuit Design
* Circuit Diagram: [Circuit_Diagram.pdf](Implementation_3/Circuit_diagram.jpg) offers a hand-drawn diagram illustrating the microcontroller's connections with input switches, output LEDs, and the LCD.
* Components: Includes switches for inputs (RES, K1, K2), LEDs to indicate different modes (Unlock, Processing, Lock), and a resistor network for stable operation.
## Functionality
The implementation involves programming the dsPIC33EP64MC502 to perform specific operations based on input signals, with output states displayed on the LCD and indicated through LEDs.
The design intricately combines software logic with hardware components, ensuring a seamless interaction between the microcontroller and the user interface.

## Challenges and Solutions
* Input Debouncing: Implementing debouncing logic in software to ensure stable switch readings.
* LCD Integration: Overcoming initial hurdles in interfacing the LCD with the microcontroller, particularly in handling data and control signals effectively.
* State Management: Ensuring the microcontroller accurately follows the FSM for different input combinations.

## Testing and Validation
* Testing Steps: The system was rigorously tested by manually triggering inputs and observing the corresponding outputs on LEDs and the LCD.
* Results: The microcontroller successfully managed state transitions and outputs, with the LCD displaying the current state accurately, and the LEDs reflecting the DSS's operational modes.

## Conclusion
* Learnings: This project highlighted the practical aspects of microcontroller programming, especially in handling real-time inputs and outputs, and the importance of integrating software with hardware effectively.
* Future Improvements: Future iterations could explore enhanced power management, more sophisticated user interfaces, or integration with wireless modules for remote operation.
