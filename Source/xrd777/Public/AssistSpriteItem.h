#pragma once
#include "CoreMinimal.h"
#include "AssistSpriteItem.generated.h"

class UBustupObject;
class USprAsset;

USTRUCT(BlueprintType)
struct FAssistSpriteItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBustupObject* BustupObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* Sprite;
    
    XRD777_API FAssistSpriteItem();
};

