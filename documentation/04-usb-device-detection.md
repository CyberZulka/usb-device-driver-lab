
# 04 – USB Device Detection Using C++

## 1. Objective

The objective of this stage was to develop and test a C++ program capable of detecting USB devices connected to a Linux system and retrieving basic device information.

This is the first practical implementation in the USB Device Detection and Driver Development Lab.

## 2. Programming Language and Technologies

- Programming language: C++
- C++ standard: C++17
- Compiler: G++
- Operating system: Parrot OS
- USB information source: Linux USB sysfs
- USB system utilities: lsusb

## 3. Understanding the Implementation

Linux exposes information about connected USB devices through the sysfs virtual filesystem.

Our program reads device information from:

`/sys/bus/usb/devices/`

It uses C++ filesystem functionality to inspect USB entries and input streams to retrieve information such as:

- Vendor ID (VID)
- Product ID (PID)
- Manufacturer
- Product name

The program displays the information in the terminal and reports the total number of USB entries detected.

## 4. Source Code

The implementation is located at:

`src/usb_detector.cpp`

The program uses C++17 filesystem functionality and standard input/output facilities.

## 5. Compilation

The program was compiled using:

`g++ -std=c++17 -Wall -Wextra src/usb_detector.cpp -o usb_detector`

Compilation completed without reported errors or warnings.

## 6. Execution

The detector was executed using:

`./usb_detector`

The program successfully inspected the USB information exposed by Linux.

## 7. Test Results

During the recorded test, the program identified six USB sysfs entries.

| USB entry | Vendor ID | Product ID | Device information |
|---|---|---|---|
| usb1 | 1d6b | 0002 | Linux xHCI Host Controller |
| 1-5 | 1bcf | 2b8f | Integrated Webcam |
| 1-1 | 05ac | 12a8 | Apple iPhone |
| 1-8 | 0cf3 | e006 | Qualcomm Atheros Bluetooth |
| usb2 | 1d6b | 0003 | Linux xHCI Host Controller |
| 1-6 | 0bda | 0129 | USB2.0 Card Reader |

Note: The two Linux Foundation entries represent USB root hubs. Therefore, the six detected entries do not represent six external USB peripherals.

Device availability and displayed information may vary depending on which devices are connected.

## 8. Screenshots and Evidence

The following screenshots document the implementation and testing process.

### Source Code

1. `screenshots/01-usb-detector-source-code.png`
2. `screenshots/02-usb-detector-source-code-test.png`

### Detection and Testing

3. `screenshots/03-usb-detection-output.png`
4. `screenshots/04-usb-detection-test.png`
5. `screenshots/05-usb-detection-additional.png`

## 9. Technical Observations

- Linux provides USB device information through sysfs.
- Vendor IDs and product IDs help identify USB hardware.
- USB root hubs also appear in USB device information.
- Information available for a device depends on what the device and operating system expose.
- A userspace program can inspect USB information without implementing a kernel driver.

## 10. Important Distinction

This implementation is a userspace USB detection utility written in C++.

It is not a Linux kernel USB driver.

Future stages will explore USB communication through libusb and the architecture and development requirements of operating-system-specific drivers.

## 11. Conclusion

The first practical USB detection milestone was successfully completed.

A C++17 program was developed, compiled and executed on Parrot OS. It successfully inspected USB device information and displayed identifiers and descriptive information in the terminal.

This implementation establishes a foundation for the next stages of the project, including USB communication and driver development concepts.
