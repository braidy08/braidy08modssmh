#include "SBZAccelByteDSV2.h"

USBZAccelByteDSV2::USBZAccelByteDSV2() {
    this->MaxServerLoginAttempts = 3;
    this->PollPlayerCountInterval = 5.00f;
    this->BridgeURL = TEXT("ywaqi7bkyb.execute-api.eu-central-1.amazonaws.com/Stage/eg_local_ds");
}


