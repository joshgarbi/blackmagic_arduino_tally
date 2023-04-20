//main driver for windows/mac running atem control software
#include "Switchers X.Y\Win\Include\BMDSwitcherAPI.idl"
#include "Switchers X.Y/macOS/Include/BMDSwitcherAPI.h"

int main{
    IBMDSwitcherDiscovery* switcherDiscovery = CreateBMDSwitcherDiscoveryInstance();
}