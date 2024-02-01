#pragma once
#include "CoreMinimal.h"
#include "FldLocalActor.h"
#include "FldKeyFreeEventActor.generated.h"

class AFldScriptActor;
class UAssetLoader;
class UBfAsset;
class UBmdAsset;

UCLASS(Blueprintable)
class XRD777_API AFldKeyFreeEventActor : public AFldLocalActor {
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
    UBfAsset* mAncBfAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* mAncBmdAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldScriptActor* mScriptActor_;
    
public:
    AFldKeyFreeEventActor();
};

