
# Cyber Zulka – USB Device Detection and Driver Development Lab

A practical, hands-on project exploring USB architecture, device detection, USB communication, and operating-system-specific driver development using C++.

## Project Overview

This project explores how computers detect, identify, communicate with, and manage USB devices.

The lab begins with a C++17 USB device detection utility developed and tested on Parrot OS. It will progressively explore USB communication and the principles and frameworks involved in Linux and Windows driver development.

## Project Objectives

- Understand USB architecture and device enumeration.
- Identify connected USB devices.
- Retrieve USB Vendor IDs (VID) and Product IDs (PID).
- Explore USB communication using libusb.
- Understand Linux USB subsystem and kernel driver architecture.
- Study Windows driver development using WDK and WDF.
- Develop practical C++ utilities for USB inspection and testing.
- Document findings and practical experiments.

## Technologies and Tools

| Technology | Purpose |
|---|---|
| C++17 | Primary programming language |
| G++ | C++ compiler |
| Parrot OS | Linux development environment |
| Linux sysfs | USB device information |
| lsusb | USB device inspection |
| libusb | USB communication library |
| Git | Version control |
| Windows WDK/WDF | Future Windows driver development studies |

## Current Implementation

### C++ USB Device Detector

The first practical implementation is a userspace C++ application that inspects USB device information exposed by Linux.

**Source code:**

`src/usb_detector.cpp`

**Compile:**

```bash
g++ -std=c++17 -Wall -Wextra src/usb_detector.cpp -o usb_detector
```

**Execute:**

```bash
./usb_detector
```

The program reads information from:

`/sys/bus/usb/devices/`

It retrieves available information such as:

- Vendor ID
- Product ID
- Manufacturer
- Product name

The initial recorded test identified six USB sysfs entries, including two USB root hubs.

## Project Structure

```text
usb-device-driver-lab/
├── README.md
├── .gitignore
├── usb_detector
├── src/
│   └── usb_detector.cpp
├── tests/
├── screenshots/
│   ├── 01-usb-detector-source-code.png
│   ├── 02-usb-detector-source-code-test.png
│   ├── 03-usb-detection-output.png
│   ├── 04-usb-detection-test.png
│   └── 05-usb-detection-additional.png
└── documentation/
    ├── 01-introduction.md
    ├── 02-usb-architecture.md
    ├── 03-development-environment.md
    ├── 04-usb-device-detection.md
    ├── lab-journal.md
    └── terminal-session.log
```

## Screenshots

The `screenshots/` directory contains evidence of the C++ implementation and USB detection tests.

## Documentation

Detailed project documentation is available in the `documentation/` directory:

1. Introduction
2. USB Architecture
3. Development Environment
4. USB Device Detection
5. Development Lab Journal

## Development Roadmap

- [x] Project initialization
- [x] Development environment setup
- [x] USB architecture research
- [x] C++ USB device detector
- [x] Initial USB detection testing
- [x] Screenshot collection
- [x] Initial technical documentation
- [ ] Improve USB detection functionality
- [ ] Explore USB communication using libusb
- [ ] Develop additional USB testing utilities
- [ ] Study Linux USB kernel driver development
- [ ] Explore Windows driver development
- [ ] Perform cross-platform testing

## Important Technical Note

The current detector is a userspace application, not a kernel driver.

Linux and Windows have different driver architectures and development requirements. This project studies those differences rather than assuming that one driver implementation works identically across both platforms.

## Author

**Cyber Zulka**

Cybersecurity learner and developer documenting practical experiments in systems programming, USB technology, and driver development.

## Project Status

<badge color="success">Initial USB detection milestone completed</badge>

This project is actively being developed.
