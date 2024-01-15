#Digital Security Safe (DSS) Design Implementations
##Overview
This repository showcases diverse methodologies for implementing a 'Digital Security Safe' (DSS), highlighting different approaches across four distinct implementations, including hardware solutions, software simulations, microcontroller integrations, and CPLD designs. Each method's specific details, such as breadboard constructions and hardware interfacing, are detailed in their respective README files within each project folder.

##Table of Contents
*Installation
*Usage
*Implementations and File Descriptions
*Contributing
*License

##Installation
Clone this repository to your local machine using:
Each folder in the repository contains separate files and instructions specific to each implementation method.

##Usage
Navigate to the specific project folder for detailed instructions on running and testing each implementation.

##Implementations and File Descriptions
###Implementation 1: Hardware and Multisim Design
*Description: A Finite State Machine (FSM) designed and tested using Multisim, along with a physical breadboard implementation for the DSS.
*Files:
-Multisim_Schematics.ms14: Multisim schematic files for FSM.
Detailed construction notes on the breadboard setup are available in the -README_Method1.md.

###Implementation 2: LabVIEW Simulation
*Description: LabVIEW-based software simulation of the DSS. This includes two separate implementations: one interfacing with the MyDAQ and the other using direct breadboard interaction.
*Files:
-DSSwithFPO.vi: Main LabVIEW VI for breadboard interaction.
-DSSwithMyDAQ.vi: LabVIEW VI designed for MyDAQ interfacing.
-Controls/: Folder containing all control elements.
-subVIs/: Folder containing all subVI files.
-README_Method2.md: Contains detailed instructions and explanations for both VIs.

###Implementation 3: Microcontroller Integration (dsPIC33EP64MC502)
*Description: Implementation using the dsPIC33EP64MC502 microcontroller, involving programming and interfacing with an LCD display.
*Files:
-EE200_LCD.c: Main C code for the LCD interface.
-EE200_LCD.h: Header file for the LCD interface functions.
-LED_Dimmer.c: C code for the LED dimmer control.
-Circuit_Diagram.pdf: Hand-drawn circuit diagram detailing the microcontroller connections.
-README_Method3.md: Contains detailed instructions and explanations

###Implementation 4: CPLD-Based Design (Atmel ATF16V8C)
*Description: A CPLD-based approach for the DSS, utilizing the Atmel ATF16V8C, involving detailed digital design and logic synthesis.
*Files:
-PROJ4.pld: Source code for the CPLD implementation.
-README_Method4.md: Instructions for deploying and testing the CPLD design.

##Contributing
I encourage contributions! Please fork the repository and submit a pull request with your changes. For substantial changes, open an issue first to discuss your ideas.

##License
No licenses.