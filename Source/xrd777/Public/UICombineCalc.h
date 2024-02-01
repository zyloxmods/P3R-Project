#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UICombineCalc.generated.h"

class UAssetLoader;
class UCombineCounterDataAsset;
class UCombineMiscDataAsset;
class UCommunityRankDataAsset;
class UDLCPersonaCombineBirthDataAsset;
class UMoonAgeProbabilityDataAsset;
class UNormalSpreadDataAsset;
class UPersonaConfigDataAsset;
class UPersonaLiftDataAsset;
class USkillAffinityDataAsset;
class USkillChangeDataAsset;
class USkillLimitDataAsset;
class USkillPackDataAsset;
class USkillPowerUpDataAsset;
class USpecialSpreadDataAsset;
class UUICombineCalcFunction;
class UWordSortDataAsset;

UCLASS(Blueprintable)
class XRD777_API UUICombineCalc : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNormalSpreadDataAsset* NormalSpread_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialSpreadDataAsset* SpecialSpread_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaLiftDataAsset* PersonaLift_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkillAffinityDataAsset* SkillAffinity_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkillLimitDataAsset* SkillLimit_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaConfigDataAsset* PersonaConfig_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityRankDataAsset* CommunityRank_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMoonAgeProbabilityDataAsset* MoonAgeProbability_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombineCounterDataAsset* CombineCounter_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkillChangeDataAsset* SkillChange_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkillPackDataAsset* SkillPack_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkillPowerUpDataAsset* SkillPowerUp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombineMiscDataAsset* CombineMisc_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* BPCombineCalc_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICombineCalcFunction* CombineCalcFunction_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCPersonaCombineBirthDataAsset* DLCPersonaCombineBirth_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWordSortDataAsset* WordSortDataAsset_;
    
public:
    UUICombineCalc();
};

