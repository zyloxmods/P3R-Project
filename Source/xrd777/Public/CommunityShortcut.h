#pragma once
#include "CoreMinimal.h"
#include "DebugViewer.h"
#include "CommunityShortcut.generated.h"

class AScrActor;
class UAssetLoader;
class UBfAsset;

UCLASS(Blueprintable)
class XRD777_API ACommunityShortcut : public ADebugViewer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScrActor* pScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* pBfAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
public:
    ACommunityShortcut();
private:
    UFUNCTION(BlueprintCallable)
    void ScriptFinishedFunction(int32 ExitType);
    
};

