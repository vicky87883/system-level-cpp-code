#include <iostream>
#import <IOKit/ps/IOPowerSources.h>
#import <IOKit/ps/IOPSKeys.h>

int main() {
    CFTypeRef info = IOPSCopyPowerSourcesInfo();
    CFArrayRef list = IOPSCopyPowerSourcesList(info);

    if (CFArrayGetCount(list) == 0) {
        std::cout << "No power sources found." << std::endl;
        return 1;
    }

    CFDictionaryRef battery = IOPSGetPowerSourceDescription(info, CFArrayGetValueAtIndex(list, 0));
    if (battery == nullptr) {
        std::cout << "Unable to get battery info." << std::endl;
        return 1;
    }

    CFBooleanRef isCharging = (CFBooleanRef)CFDictionaryGetValue(battery, CFSTR(kIOPSIsChargingKey));
    if (isCharging == kCFBooleanTrue) {
        std::cout << "Charging cable is connected." << std::endl;
    } else {
        std::cout << "Charging cable is NOT connected." << std::endl;
    }

    CFRelease(list);
    CFRelease(info);
    return 0;
}