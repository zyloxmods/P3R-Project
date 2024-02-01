#pragma once
#include "CoreMinimal.h"
#include "AtlEvtPlayingCharacterInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAtlEvtPlayingCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> AppEventCharacters;
    
    XRD777_API FAtlEvtPlayingCharacterInfo();
};

