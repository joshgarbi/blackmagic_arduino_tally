//main driver for windows/mac running atem control software
// WARNING: some errors might occur due to lack of default arduino IDE libraries

// --   dited: Josh Garbi  --
// --   Date: 4/20/23      --

// Notes: Review SDK dev Kit for additional libraries/packages/APIs

#include "<enter_file_path>\Blackmagic ATEM Switchers SDK 9.0.1\Mac OS X\include\BMDSwitcherAPI.idl"
#include "<enter_file_path>/Blackmagic ATEM Switchers SDK 9.0.1/Windows/include/BMDSwitcherAPI.h"
#include "usb.h"
#include <SPI.h>
#include <Wire.h>

int main{
    IBMDSwitcherDiscovery* switcherDiscovery = CreateBMDSwitcherDiscoveryInstance();
}