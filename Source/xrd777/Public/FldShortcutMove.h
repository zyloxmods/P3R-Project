#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldShortcutMove.generated.h"

class AFldScriptActor;
class UAssetLoader;
class UBfAsset;

UCLASS(Blueprintable)
class XRD777_API AFldShortcutMove : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* mAssetLoader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* mBfAsset_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldScriptActor* mScriptActor_;
    
public:
    AFldShortcutMove();
};

