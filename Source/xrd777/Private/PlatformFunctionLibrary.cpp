#include "PlatformFunctionLibrary.h"

EPlatformName UPlatformFunctionLibrary::Platform() {
    return EPlatformName::PN_STEAM;
}

float UPlatformFunctionLibrary::GetFPS() {
    return 0.0f;
}

UPlatformFunctionLibrary::UPlatformFunctionLibrary() {
}

