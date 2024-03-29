# Digital Security Safe (DSS) Design Implementations
## Overview
This repository showcases diverse methodologies for implementing a 'Digital Security Safe' (DSS), highlighting different approaches across four distinct implementations, including hardware solutions, software simulations, microcontroller integrations, and CPLD designs. Each method's specific details, such as breadboard constructions and hardware interfacing, are detailed in their respective README files within each project folder.

## Table of Contents
* [Installation](#installation)
* [Usage](#usage)
* [Implementations and File Descriptions](#implementations-and-file-descriptions)
* [Contributing](#contributing)
* [License](#license)

## Installation
* Clone this repository to your local machine.
* Each folder in the repository contains separate files and instructions specific to each implementation method.

## Usage
Navigate to the specific project folder for detailed instructions on running and testing each implementation.

## Implementations and File Descriptions
### [Implementation 1](Implementation_1): Hardware and Multisim Design
* Description: A Finite State Machine (FSM) designed and tested using Multisim, along with a physical breadboard implementation for the DSS.
* Files:
  - [Multisim_Schematics.ms14](Implementation_1/Project1.ms14): Multisim schematic files for FSM.
  - [README_Method1.md](Implementation_1/README_Method1.md): Contains detailed construction notes on the breadboard setup.

### [Implementation 2](Implementation_2): LabVIEW Simulation
* Description: LabVIEW-based software simulation of the DSS. This includes two separate implementations: one interfacing with the MyDAQ and the other using direct breadboard interaction.
* Files:
  - [DSSwithFPO.vi](Implementation_2/DSSwithFPO.vi): Main LabVIEW VI for breadboard interaction.
  - [DSSwithMyDAQ.vi](Implementation_2/DSSwithMyDAQ.vi): LabVIEW VI designed for MyDAQ interfacing.
  - [Controls](Implementation_2/Controls): Folder containing all control elements.
  - [subVIs](Implementation_2/subVI): Folder containing all subVI files.
  - [README_Method2.md](Implementation_2/README_Method2.md): Contains detailed instructions and explanations for both VIs.

### [Implementation 3](Implementation_3): Microcontroller Integration (dsPIC33EP64MC502)
* Description: Implementation using the dsPIC33EP64MC502 microcontroller, involving programming and interfacing with an LCD display.
* Files:
  - [EE200_LCD.c](Implementation_3/EE200_LCD.c): Main C code for the LCD interface.
  - [EE200_LCD.h](Implementation_3/EE200_LCD.h): Header file for the LCD interface functions.
  - [LED_Dimmer.c](Implementation_3/LED_Dimmer.c): C code for the LED dimmer control.
  - [Makefile](Implementation_3/Makefile): Makefile for compiling the project.
  - [Circuit_Diagram.pdf](Implementation_3/Circuit_diagram.jpg): Hand-drawn circuit diagram detailing the microcontroller connections.
  - [README_Method3.md](Implementation_3/README_Method3.md): Contains detailed instructions and explanations

### [Implementation 4](Implementation_4): CPLD-Based Design (Atmel ATF16V8C)
* Description: A CPLD-based approach for the DSS, utilizing the Atmel ATF16V8C, involving detailed digital design and logic synthesis.
* Files:
  - [PROJ4.pld](Implementation_4/PROJ4.PLD): Source code for the CPLD implementation.
  - [README_Method4.md](Implementation_4/README_Method4.md): Instructions for deploying and testing the CPLD design.

## Contributing
I encourage contributions! Please fork the repository and submit a pull request with your changes. For substantial changes, open an issue first to discuss your ideas.

## License
No licenses.
