# Method 1: Hardware and Multisim Design for Digital Security Safe (DSS)
## Overview
Method 1 presents the design and testing of a Finite State Machine (FSM) for a Digital Security Safe (DSS) using Multisim and a physical breadboard implementation. This project integrates digital logic principles into a practical application, demonstrating the transition from simulation to real-world execution.

## Multisim Implementation
Schematic Files: [Multisim_Schematics.ms14](Implementation_1/Project1.ms14)
Description: The FSM for the DSS was conceptualized and tested in Multisim. This included developing a schematic that accurately represents the State Machine IO and the State Machine Logic, ensuring that the design is functional and efficient.

## Breadboard Implementation
Description: To validate the Multisim design, the FSM was physically assembled on a breadboard. This step was crucial for demonstrating the practical viability of the simulated design.

## Components Used
* NAND gates (4011BD, CD4023BD, CD4012BD, CD4068BD)
* Quad D-type flip-flops (CD40175BD)
* Resistors, LEDs, function generator for clock signal
* SPST switches for inputs

## Circuit Description
The breadboard implementation followed the Multisim schematic closely, with an emphasis on organizing the circuit in a logical and manageable layout.
The circuit included arrangements for the clock signal, input switches, and LED outputs, mirroring the setup in the Multisim design.

## Challenges Encountered
While the specific details of challenges are not distinctly remembered, typical issues in such projects include aligning the physical circuit with the simulated design, troubleshooting unexpected behaviors, and optimizing the use of available components.

## Testing and Results
Testing Procedure: The FSM's functionality was tested by providing various input combinations and observing the corresponding LED outputs, both in Multisim and on the breadboard.
Results: The testing confirmed that the physical implementation successfully mirrored the simulated design, with all states of the FSM being correctly represented and transitioned according to the input.

## Conclusion
* Learnings: This project reinforced the importance of thorough simulation before physical implementation and provided valuable experience in translating theoretical designs into practical applications.
* Future Improvements: Potential improvements might include refining the circuit layout for efficiency or exploring alternative components for enhanced performance.
