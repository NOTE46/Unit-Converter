# Unit Converter in C

## 📌 Project Overview
This is a **console-based unit converter** written in C.  
It allows conversion between different units of **temperature, currency, length, weight, and time**.  
The program is menu-driven, validates user input, and prevents invalid entries.  

---

##  Features
- **Temperature Converter**   
  - Celsius ↔ Fahrenheit ↔ Kelvin  

- **Currency Converter**   
  - Rupee ↔ Dollar *(hardcoded: 1 USD = 84 INR)*  

- **Length/Distance Converter**   
  - Kilometer, Meter, Centimeter, Miles, Inches, Feet  

- **Weight Converter**  
  - Kilogram ↔ Pounds  
  - Grams ↔ Ounces  

- **Time Converter**   
  - Seconds ↔ Minutes ↔ Hours  

- **Error Handling**  
  - Detects invalid keys  
  - Keeps asking until valid input is entered  

---

##  Tech Stack
- **Language**: C  
- **Compiler**: GCC / MinGW / Any standard C compiler  
- **Platform**: Console application (Linux, Windows, macOS)  

---

##  How to Run
1. Clone or download the project folder.  
2. Open terminal/command prompt in the folder.  
3. Compile using:  
   ```bash
   gcc converter.c -o converter

---
##  Example Usage
   ```bash
Operation and their keys:
Temperature Converter:1
Currency Converter:2
Length/Distance Converter:3
Weight Converter:4
Time Converter:5
ENTER OPERATION TO CONVERT: 1
