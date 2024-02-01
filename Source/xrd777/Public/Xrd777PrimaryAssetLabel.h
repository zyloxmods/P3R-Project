#pragma once
#include "CoreMinimal.h"
#include "Engine/PrimaryAssetLabel.h"
#include "Engine/AssetManagerTypes.h"
#include "Xrd777PrimaryAssetLabel.generated.h"

UCLASS(Blueprintable)
class XRD777_API UXrd777PrimaryAssetLabel : public UPrimaryAssetLabel {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPrimaryAssetRules> PlatformRules;
    
    UXrd777PrimaryAssetLabel();
};

