#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "CombineMiscDataAsset.generated.h"

UCLASS(Blueprintable)
class UCombineMiscDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccidentBaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoolAccidentRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AccidentMinLv;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AccidentMaxLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillChangeBaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkillBuildUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SkillChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SkillWeights;
    
    UCombineMiscDataAsset();
};

