# EcoLight Maestro – Time & Intensity Adaptive Street Light Automation

## Overview
EcoLight Maestro is an embedded systems project that automates street light control using a combination of real-time clock (RTC) scheduling and ambient light intensity sensing. The system intelligently switches street lights ON or OFF based on predefined time intervals and real-world lighting conditions, improving energy efficiency and reducing manual control.

## Objective
- Automatically control street lights based on time schedules
- Adapt lighting behavior using ambient light intensity
- Provide user interaction for configuring real-time clock parameters

## System Description
The system is built using the LPC2148 ARM7 microcontroller. It continuously reads the current time from the on-chip RTC and measures ambient light intensity using an LDR connected through the ADC.

- Active Time Window: 18:00 (6 PM) to 06:00 (6 AM)
- If ambient light intensity is below a predefined threshold, street light LEDs are turned ON
- If ambient light intensity is sufficient, LEDs remain OFF
- Outside the active time window, the system only displays real-time information

An interrupt-driven menu system allows the user to edit RTC parameters such as hours, minutes, seconds, date, month, and year using a keypad. All inputs are validated before updating the RTC.

## Key Features
- Real-time clock (RTC) based scheduling
- Ambient light sensing using LDR and ADC
- Interrupt-driven user menu for RTC configuration
- Input validation for date and time values
- LCD-based display interface
- Energy-efficient street light automation

## Hardware Requirements
- LPC2148 ARM7 Microcontroller
- LCD Display
- Keypad
- LEDs (Street Light Simulation)
- LDR (Light Dependent Resistor)
- Buzzer

## Software Requirements
- Embedded C
- Keil µVision (Keil C Compiler)
- Flash Magic

## Project Workflow
1. Initialize peripherals (LCD, LEDs, Keypad, RTC, ADC, External Interrupt)
2. Read and display real-time clock information
3. Check if current time lies within the active time window
4. Measure ambient light intensity using ADC
5. Control LEDs based on light intensity threshold
6. Handle user interrupt for RTC configuration
7. Validate user inputs and update RTC registers
8. Resume normal system operation

## Applications
- Smart street lighting systems
- Energy-efficient public infrastructure
- Embedded automation solutions
- Smart city applications

## Learning Outcomes
- Hands-on experience with LPC2148 ARM7 microcontroller
- RTC, ADC, and external interrupt interfacing
- Embedded C programming for real-time systems
- Hardware–software integration
- Menu-driven embedded UI design

## Tools & Technologies
- Microcontroller: LPC2148 (ARM7)
- Programming Language: Embedded C
- IDE: Keil µVision
- Programmer Tool: Flash Magic

## Project Status
Completed and tested on LPC2148 development board.

## Author
Diddi Naga Prudhvi
