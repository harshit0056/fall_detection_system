# Fall and Walk Detection with Arduino

## Overview

This Arduino project aims to detect falls and walks using accelerometer data. The project involves collecting a dataset for falls and walks, performing decision tree analysis to extract parameters, and configuring an Arduino Nano to detect falls and walks in real-time.

## Requirements

- Arduino Nano
- Accelerometer sensor
- Computer with Arduino IDE installed
- Dataset for falls and walks

## Project Components

1. **Data Collection**: 
   - We collected a dataset containing accelerometer data for falls and walks. The dataset serves as the basis for training our fall and walk detection algorithm.

2. **Decision Tree Analysis**:
   - We performed decision tree analysis on the collected dataset to extract parameters and features that distinguish between falls and walks.

3. **Arduino Configuration**:
   - We configured the Arduino Nano to interface with the accelerometer sensor and process real-time accelerometer data.
   - Using the parameters extracted from the decision tree analysis, we implemented a fall and walk detection algorithm on the Arduino Nano.

## Getting Started

1. **Clone the Repository**: 
   - Clone this repository to your local machine using the following command:
     ```
     git clone https://github.com/harshit0056/fall_detection_system.git
     ```

2. **Connect Hardware**:
   - Connect the accelerometer sensor to the Arduino Nano according to the circuit diagram provided.

3. **Upload Arduino Sketch**:
   - Open the Arduino IDE on your computer.
   - Load the Arduino sketch provided in the repository.
   - Upload the sketch to your Arduino Nano board.

4. **Testing**:
   - Power on the Arduino Nano.
   - Perform falls and walks within the range of the accelerometer sensor.
   - Observe the output of the Arduino to verify fall and walk detection.

## Contributors

- harshit gupta 
- ayush 
- komal raj
