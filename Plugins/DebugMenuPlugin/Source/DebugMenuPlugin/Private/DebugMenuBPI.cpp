#include "DebugMenuBPI.h"

bool UDebugMenuBPI::Exit() {
    return false;
}

bool UDebugMenuBPI::CreateMenu(FDebugMenuEventDelegate Event, FDebugMenuItem& InMenuItem, const FString& MenuName, FDebugMenuItem& OutMenuItem) {
    return false;
}

bool UDebugMenuBPI::CreateCaption(const FString& CaptionName, FDebugMenuItem& OutMenuItem) {
    return false;
}

bool UDebugMenuBPI::CreateBool(FDebugMenuBoolEventDelegate Event, FDebugMenuItem& InMenuItem, const FString& MenuName, bool Default, FDebugMenuItem& OutMenuItem) {
    return false;
}

bool UDebugMenuBPI::Create(const UObject* WorldContextObject, UClass* InClass, float X, float Y) {
    return false;
}

UDebugMenuBPI::UDebugMenuBPI() {
    this->_World = NULL;
    this->_DebugMenuBase = NULL;
    this->_Actor = NULL;
}

