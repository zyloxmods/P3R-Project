#pragma once
#include "CoreMinimal.h"
#include "FldLocalActor.h"
#include "FldKeyFreeAnnounceActor.generated.h"

class AFldScriptActor;
class UAssetLoader;
class UBfAsset;
class UBmdAsset;

UCLASS(Blueprintable)
class XRD777_API AFldKeyFreeAnnounceActor : public AFldLocalActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* mAssetLoader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* mBfAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* mBmdAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldScriptActor* mScriptActor_;
    
public:
    AFldKeyFreeAnnounceActor();
};
