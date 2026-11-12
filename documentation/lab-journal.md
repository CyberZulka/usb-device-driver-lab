
# USB Device Detection and Driver Development Lab
## Development Lab Journal

**Project:** USB Device Detection and Driver Development Lab
**Developer:** Cyber Zulka
**Primary Programming Language:** C++
**Operating System:** Parrot OS
**Project Date:** 12 November 2026

---

## 1. Project Initialization

Created the project directory and established the initial documentation structure.

Project directories include:

- `documentation/`
- `screenshots/`
- `src/`
- `tests/`

Created the initial README and Git ignore configuration.

## 2. Development Environment Setup

Verified the development environment and available tools.

Tools verified:

- G++ compiler
- Git
- USB utilities (`lsusb`)
- libusb
- Linux USB sysfs

The development environment was confirmed operational.

## 3. USB Architecture Research

Studied the fundamental components of USB architecture, including:

- USB host and host controller
- USB hubs
- USB devices
- USB endpoints
- USB transfer types
- Vendor IDs and Product IDs
- USB enumeration

Reviewed how Linux and Windows manage USB devices.

## 4. C++ USB Device Detector Development

Developed a C++17 userspace program named `usb_detector`.

Source file:

`src/usb_detector.cpp`

The program accesses Linux USB information through:

`/sys/bus/usb/devices/`

It retrieves available device information, including:

- Vendor ID
- Product ID
- Manufacturer
- Product name

## 5. Compilation and Testing

Compiled the program using G++:

`g++ -std=c++17 -Wall -Wextra src/usb_detector.cpp -o usb_detector`

Executed the program successfully:

`./usb_detector`

The initial recorded test identified six USB sysfs entries, including two Linux USB root hubs.

The detector displayed the available device identifiers and descriptive information.

## 6. Screenshot Collection

Captured screenshots documenting:

1. C++ USB detector source code.
2. Additional source-code evidence.
3. Initial USB detection output.
4. USB detection testing.
5. Additional detection evidence.

Organized the screenshots inside the project's `screenshots/` directory using consistent filenames.

## 7. Documentation Progress

Completed the following technical documentation:

- `01-introduction.md`
- `02-usb-architecture.md`
- `03-development-environment.md`
- `04-usb-device-detection.md`

Created this journal to maintain a chronological record of the project.

## 8. Current Project Status

**Completed milestones:**

- Project initialization.
- Development environment verification.
- USB architecture documentation.
- C++ userspace USB detection implementation.
- Initial compilation and testing.
- Screenshot collection and organization.
- Initial technical documentation.

**Upcoming milestones:**

- Review and improve the USB detector.
- Explore USB communication using libusb.
- Develop additional USB testing utilities.
- Study Linux kernel USB driver architecture.
- Explore Windows driver development using the Windows Driver Kit (WDK) and Windows Driver Frameworks (WDF).
- Perform further testing and document results.

## 9. Development Notes

The current USB detector is a userspace C++ application. It is not a kernel driver.

Linux kernel driver development and Windows driver development have different platform-specific requirements.

The project will continue to use C++ for its userspace applications while studying the appropriate driver frameworks for each operating system.

---

**Project:** Cyber Zulka USB Device Detection and Driver Development Lab
**Journal Entry:** Initial Development and USB Detection Milestone
