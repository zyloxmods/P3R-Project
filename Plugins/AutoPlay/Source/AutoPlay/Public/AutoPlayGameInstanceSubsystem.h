#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AutoPlayTickDelegateDelegate.h"
#include "AutoPlayGameInstanceSubsystem.generated.h"

class UAutoPlayCommandLogger;
class UAutoPlayCommandManager;
class UAutoPlayCommandServer;
class UAutoPlayCommandWorker;
class UAutoPlayEventObject;
class UFont;
class UTexture;

UCLASS(Abstract, Blueprintable)
class AUTOPLAY_API UAutoPlayGameInstanceSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, UAutoPlayEventObject*> EventObjects_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* FontObject_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoPlayCommandServer* CommandServer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoPlayCommandLogger* CommandLogger_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoPlayCommandManager* CommandManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoPlayCommandWorker* CommandWorker_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoPlayTickDelegate OnTickControlDelegate_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* PadImage_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* PadPress_;
    
public:
    UAutoPlayGameInstanceSubsystem();
};

