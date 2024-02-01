#pragma once
#include "CoreMinimal.h"
#include "AtlSocketBase.h"
#include "AtlTcpListener.generated.h"

class UAtlTcpSocket;

UCLASS(Blueprintable)
class ATLSOCKETPLUGIN_API UAtlTcpListener : public UAtlSocketBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAtlTcpSocket*> Clients_;
    
    UAtlTcpListener();
protected:
    UFUNCTION(BlueprintCallable)
    void OnReceivedFromClient(const UAtlSocketBase* Socket, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable)
    void OnDisconnectedClient(const UAtlSocketBase* Socket);
    
};

