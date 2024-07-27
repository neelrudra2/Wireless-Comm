#include <iostream>
#include <ctime>
#include "WirelessModem.h"

int main()
{
    // Seed random number generator for real-time data simulation
    srand(static_cast<unsigned int>(time(nullptr)));

    // Create instances of different modems
    CDMA cdma;
    GSM gsm;
    UMTS umts;
    LTE lte;

    // Configure and use CDMA modem
    cdma.configure("CDMA Parameters");
    cdma.transmit("Hello CDMA");
    std::cout << cdma.receive() << std::endl;

    // Configure and use GSM modem
    gsm.configure("GSM Parameters");
    gsm.transmit("Hello GSM");
    std::cout << gsm.receive() << std::endl;

    // Configure and use UMTS modem
    umts.configure("UMTS Parameters");
    umts.transmit("Hello UMTS");
    std::cout << umts.receive() << std::endl;

    // Configure and use LTE modem
    lte.configure("LTE Parameters");
    lte.transmit("Hello LTE");
    std::cout << lte.receive() << std::endl;

    return 0;
}
