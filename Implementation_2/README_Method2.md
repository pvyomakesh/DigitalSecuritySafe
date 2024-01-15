# Implementation 2: LabVIEW Software Simulation for Digital Security Safe (DSS)
## Overview
Implementation 2 involves the implementation of the DSS using LabVIEW software. This project includes two distinct versions: one simulating the FSM with front panel operations ([DSSwithFPO.vi](#dss-with-front-panel-0perations-(fpo))), and the other interfacing with MyDAQ hardware ([DSSwithMyDAQ.vi](#dss-with-myDAQ-interface)).

## LabVIEW Implementations
### DSS with Front Panel Operations (FPO)
* File: [DSSwithFPO.vi](Implementation_2/DSSwithFPO.vi)
* Description: This implementation simulates the FSM of the DSS entirely within the LabVIEW environment. It uses a front panel interface to mimic the inputs and outputs typically observed in the hardware version.
* Components: Utilizes custom controls and indicators to replicate the functionality of the physical DSS.
## DSS with MyDAQ Interface
* File: [DSSwithMyDAQ.vi](Implementation_2/DSSwithMyDAQ.vi)
* Description: This version extends the simulation to interface with external hardware, specifically the NI MyDAQ. It demonstrates how the DSS can be controlled and monitored using real-world signals.
* Components: Incorporates DAQmx functions to handle input/output operations with the MyDAQ device.
## Folder Structure
* [Controls](Implementation_2/Controls): Contains custom control elements used in the VIs.
* [subVIs](Implementation_2/subVI): Includes all the subVI files required for the project's functionality.
## Functionality and Usage
Each VI is designed to replicate the operations of the DSS, with [DSSwithFPO.vi](Implementation_2/DSSwithFPO.vi) focusing on internal LabVIEW operations and [DSSwithMyDAQ.vi](Implementation_2/DSSwithMyDAQ.vi) connecting to external hardware.
The user can interact with the VIs through their respective front panels to simulate different states and outputs of the DSS.
## Testing and Validation
Both VIs were tested for accuracy in simulating the DSS's states and transitions.
For [DSSwithMyDAQ.vi](Implementation_2/DSSwithMyDAQ.vi), additional testing involved verifying the interaction between the software and the MyDAQ hardware, ensuring that inputs and outputs were correctly mapped and executed.
## Conclusion
These implementations serve as a testament to the versatility of LabVIEW in simulating and interfacing complex systems like the DSS.
They also demonstrate the practical application of software-based simulations in validating and testing hardware designs before physical implementation.
