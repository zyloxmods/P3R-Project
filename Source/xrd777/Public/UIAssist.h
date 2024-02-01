#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssistSpriteItem.h"
#include "UIAssist.generated.h"

class UAssetLoader;
class UBmdAsset;

UCLASS(Blueprintable)
class UUIAssist : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBmdAsset* MessageData_;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAssistSpriteItem Sprites_[11];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
public:
    UUIAssist();
};

