#pragma once
#include "CoreMinimal.h"
#include "CharacterSimpleLipsAnimAppParam.h"
#include "CharacterSimpleLipsAnimAppListener.generated.h"

USTRUCT(BlueprintType)
struct FCharacterSimpleLipsAnimAppListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterSimpleLipsAnimAppParam SimpleLipsAnimParam;
    
    XRD777_API FCharacterSimpleLipsAnimAppListener();
};

