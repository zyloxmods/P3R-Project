#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HeroParameterHandle.generated.h"

class UDataTable;
class UHeroParameterDataAsset;

UCLASS(Blueprintable)
class XRD777_API UHeroParameterHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHeroParameterDataAsset* pDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* pParameterNameTable;
    
public:
    UHeroParameterHandle();
};

