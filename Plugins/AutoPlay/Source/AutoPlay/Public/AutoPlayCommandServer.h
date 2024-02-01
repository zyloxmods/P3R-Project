#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutoPlayCommandServer.generated.h"

class UAPCommandBase;
class UAtlSocketBase;
class UAtlTcpListener;
class UAutoPlayCommandLogger;
class UAutoPlayCommandManager;

UCLASS(Blueprintable)
class AUTOPLAY_API UAutoPlayCommandServer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlTcpListener* Server_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoPlayCommandManager* CommandManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoPlayCommandLogger* CommandLogger_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAPCommandBase* CurrentCommand_;
    
public:
    UAutoPlayCommandServer();
private:
    UFUNCTION(BlueprintCallable)
    void OnReceivedAsString(const UAtlSocketBase* Socket, const FString& str);
    
    UFUNCTION(BlueprintCallable)
    void OnDisconnected(const UAtlSocketBase* Socket);
    
    UFUNCTION(BlueprintCallable)
    void OnConnected(const UAtlSocketBase* Socket);
    
};

