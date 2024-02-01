#pragma once
#include "CoreMinimal.h"
#include "AtlSocketBase.h"
#include "AtlTcpSocket.generated.h"

UCLASS(Blueprintable)
class ATLSOCKETPLUGIN_API UAtlTcpSocket : public UAtlSocketBase {
    GENERATED_BODY()
public:
    UAtlTcpSocket();
};

