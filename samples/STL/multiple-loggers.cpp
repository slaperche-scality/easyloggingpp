 //
 // This file is part of Easylogging++ samples
 // Very basic sample - log using multiple loggers
 //
 // Revision 1.0
 // @author mkhan3189
 //

// NOTE: This is experimental feature and can be removed in future; but there is also possibility that this
//       may become supported feature for future versions
//
//
// In order for this to work please uncomment following line
// #define _ELPP_MULTI_LOGGER_SUPPORT
//

// You can also uncomment this line and achieve same result using LOG(..) macro
// #define _LOGGER "default", "network"

#include "easylogging++.h"

_INITIALIZE_EASYLOGGINGPP

int main(void) {

    el::Loggers::getLogger("network"); // Register 'network' logger

    CLOG(INFO, "default", "default") << "My first log message that writes with network and default loggers";

    return 0;
}
