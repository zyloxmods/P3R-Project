#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UAppCharFootstepsCue.h"
#include "UAppCharFootstepsMajor.h"
#include "AppCharFootstepsDataAsset.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class XRD777_API UAppCharFootstepsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUAppCharFootstepsMajor> Field;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUAppCharFootstepsMajor> Battle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CommonCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* NpcCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUAppCharFootstepsCue> CharCue;
    
    UAppCharFootstepsDataAsset();
};

