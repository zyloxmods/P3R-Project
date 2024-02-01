#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "PersonaLiftItem.h"
#include "PersonaLiftDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UPersonaLiftDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPersonaLiftItem> Data;
    
    UPersonaLiftDataAsset();
};

