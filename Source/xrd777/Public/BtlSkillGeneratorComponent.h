#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BattleHasFinishedSkillLoadDelegate.h"
#include "Templates/SubclassOf.h"
#include "BtlSkillGeneratorComponent.generated.h"

class ABtlSkill;
class UAssetLoader;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlSkillGeneratorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleHasFinishedSkillLoad HasFinishedSkillLoad;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlSkill* pSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABtlSkill> SkillAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadRequested;
    
public:
    UBtlSkillGeneratorComponent();
    UFUNCTION(BlueprintCallable)
    bool RequestCreateSkill(int32 skillId);
    
    UFUNCTION(BlueprintCallable)
    ABtlSkill* GetSkill();
    
};

