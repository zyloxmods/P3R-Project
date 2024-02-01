#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AppCharWeaponAnimDataAsset.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class XRD777_API UAppCharWeaponAnimDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitAnimNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequenceBase*> Anims;
    
public:
    UAppCharWeaponAnimDataAsset();
};

