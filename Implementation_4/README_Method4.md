# Implementation 4: CPLD Implementation of Digital Security Safe (DSS) using Atmel ATF16V8C
## Overview
Implementation 4 focuses on the implementation of the Finite State Machine (FSM) for the Digital Security Safe (DSS) using the Atmel ATF16V8C Complex Programmable Logic Device (CPLD). This implementation demonstrates a digital design approach where the CPLD is used to create an efficient and compact FSM for the DSS, following the state transition diagram and logic outlined in the initial project specifications.

## CPLD Design and Implementation
* File: [PROJ4.pld](Implementation_4/PROJ4.PLD)
* Description: The design leverages the Atmel ATF16V8C CPLD's capabilities to implement the FSM. The design incorporates the input and output pin assignments and logic required to accurately represent the DSS's operational states.
* Challenges: Adapting the state machine logic to the CPLD's constraints required careful planning, particularly in managing the limited number of I/O pins and ensuring reliable state transitions.
## Circuit Design and Components
* Circuit Components: The implementation includes the CPLD, input switches for user interaction, output LEDs to indicate the DSS's states, and necessary resistors for circuit stability.
* Circuit Functionality: The circuit was designed to handle user inputs through switches, process these inputs via the CPLD, and output the results through LEDs, representing various states of the DSS.
## Testing and Validation
* Testing Steps: Testing involved providing input sequences through the switches and verifying the LED outputs against expected state transitions. This process ensured that the CPLD correctly interpreted and processed the inputs.
* Results: The CPLD effectively managed the state transitions, with LED outputs corresponding accurately to the expected states of the DSS. This confirmed the reliability of the CPLD design in simulating the DSS FSM.
## Conclusion
* Learnings: This project emphasized the importance of detailed planning in digital design, especially when working with hardware having specific constraints like CPLD. It also highlighted the efficiency of using CPLDs in implementing complex logic in a compact form.
* Future Work: Future improvements could explore more sophisticated state machine designs, integration with other digital systems, or optimization of the CPLD programming for additional functionalities.
