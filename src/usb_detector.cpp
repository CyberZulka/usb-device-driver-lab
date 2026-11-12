
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

// Function to read USB device information
string readFile(const fs::path& filePath) {
    ifstream file(filePath);
    string value;

    if (file.is_open()) {
        getline(file, value);
    }

    return value.empty() ? "Unknown" : value;
}

int main() {

    string usbPath = "/sys/bus/usb/devices/";

    cout << "====================================\n";
    cout << "     CYBER ZULKA USB DETECTOR\n";
    cout << "====================================\n\n";

    int deviceCount = 0;

    try {
        for (const auto& entry : fs::directory_iterator(usbPath)) {

            fs::path device = entry.path();

            string vendor = readFile(device / "idVendor");

            if (vendor == "Unknown") {
                continue;
            }

            string product = readFile(device / "idProduct");
            string manufacturer = readFile(device / "manufacturer");
            string deviceName = readFile(device / "product");

            cout << "USB Device: " << ++deviceCount << "\n";
            cout << "Directory: " << device.filename().string() << "\n";
            cout << "Vendor ID: " << vendor << "\n";
            cout << "Product ID: " << product << "\n";
            cout << "Manufacturer: " << manufacturer << "\n";
            cout << "Device Name: " << deviceName << "\n";

            cout << "------------------------------------\n";
        }
    }
    catch (const fs::filesystem_error& error) {
        cerr << "Error: " << error.what() << "\n";
        return 1;
    }

    cout << "\nTotal USB devices detected: " << deviceCount << "\n";

    return 0;
}
