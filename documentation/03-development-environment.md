
# Development Environment Setup

## 1. Introduction

This section describes the hardware, software, programming tools, and operating systems required for the USB Device Detection and Driver Development Lab.

The project uses C++ as its primary programming language and covers development across Linux and Windows platforms.

## 2. Operating Systems

### 2.1 Linux

Parrot OS is used as the primary Linux development and testing environment.

It provides access to Linux system interfaces, USB utilities, and development tools.

### 2.2 Windows

Microsoft Windows is included as a second development and testing platform.

Windows provides tools such as Device Manager, USBView, WinUSB, and Windows Driver Frameworks for USB device management and driver development.

## 3. Programming Language

C++ is the primary programming language used throughout this project.

It is suitable for developing system utilities, hardware communication applications, and userspace USB programs.

## 4. Development Tools

The following tools are used:

| Tool | Purpose |
|---|---|
| GCC/G++ | Compiling C++ programs on Linux |
| Nano | Editing source code and documentation |
| Git | Version control |
| GitHub | Hosting and sharing the project |
| lsusb | Inspecting USB devices on Linux |
| Device Manager | Inspecting hardware on Windows |
| USBView | Examining USB device information on Windows |
| libusb | Userspace USB communication library |

## 5. Linux USB Interfaces

Linux provides several interfaces for interacting with USB devices.

These include:

- /sys/bus/usb/devices/ for USB device information.
- /dev/ for device files.
- libusb for userspace USB communication.
- Linux kernel USB APIs for kernel-level driver development.

## 6. Windows USB Interfaces

Windows provides several technologies for USB development.

These include:

- WinUSB for userspace USB communication.
- Windows Driver Frameworks (WDF) for driver development.
- Windows Device Manager for hardware inspection.
- Windows Driver Kit (WDK) for building and testing Windows drivers.

## 7. Development Approach

Development will follow these stages:

1. Prepare the development environment.
2. Inspect connected USB devices.
3. Develop a C++ USB detection application.
4. Compile and test the application.
5. Explore USB communication.
6. Examine Linux and Windows driver architectures.
7. Perform controlled driver development experiments.
8. Document results and publish the completed project.

## 8. Conclusion

A properly configured development environment is essential for successful USB programming and device driver development.

The combination of C++, Linux, Windows, and appropriate USB development tools provides the foundation for the practical activities in this project.


## 9. Verified Development Environment

The following tools and interfaces were checked on the Parrot OS development machine.

| Component | Detected Version / Status |
|---|---|
| G++ Compiler | 14.2.0-19 |
| USB Utilities | 018 |
| Git | 2.47.3 |
| libusb | 1.0.28 |
| Linux USB sysfs | Available |

### Verification Results

- G++ successfully displayed its compiler version.
- lsusb successfully displayed its utility version.
- Git successfully displayed its installed version.
- The Linux USB sysfs directory was accessible.
- pkg-config successfully detected libusb version 1.0.28.

These results confirm that the primary Linux development environment has the necessary tools for the initial USB programming exercises.

Windows development tools will be verified separately when the Windows environment is prepared.
