#include <iostream>
#import <IOKit/ps/IOPowerSources.h>
#import <IOKit/ps/IOPSKeys.h>

int main() {
    CFTypeRef info = IOPSCopyPowerSourcesInfo();
    if (!info) {
        std::cout << "Unable to get power sources info." << std::endl;
        return 1;
    }

    CFArrayRef list = IOPSCopyPowerSourcesList(info);
    if (!list || CFArrayGetCount(list) == 0) {
        std::cout << "No power sources found." << std::endl;
        if (list) CFRelease(list);
        CFRelease(info);
        return 1;
    }

    bool foundBattery = false;
    bool isCharging = false;

    for (CFIndex i = 0; i < CFArrayGetCount(list); ++i) {
        CFDictionaryRef battery = IOPSGetPowerSourceDescription(info, CFArrayGetValueAtIndex(list, i));
        if (!battery) continue;

        CFStringRef type = (CFStringRef)CFDictionaryGetValue(battery, CFSTR(kIOPSTransportTypeKey));
        if (type && CFStringCompare(type, CFSTR("Internal"), 0) == kCFCompareEqualTo) {
            foundBattery = true;
            CFBooleanRef charging = (CFBooleanRef)CFDictionaryGetValue(battery, CFSTR(kIOPSIsChargingKey));
            if (charging == kCFBooleanTrue) {
                isCharging = true;
                break;
            }
        }
    }

    if (!foundBattery) {
        std::cout << "No internal battery found." << std::endl;
    } else if (isCharging) {
        std::cout << "Charging cable is connected." << std::endl;
    } else {
        std::cout << "Charging cable is NOT connected." << std::endl;
    }

    CFRelease(list);
    CFRelease(info);
    return 0;
}