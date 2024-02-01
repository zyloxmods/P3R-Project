#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FldCommonData.generated.h"

class AFldBossBattleScript;
class AFldCmnDataActor;
class AFldMailOrderScript;
class AFldTvProgramScript;
class UDataTable;

UCLASS(Blueprintable)
class XRD777_API UFldCommonData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldCmnDataActor* mActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldTvProgramScript* mTvProgramActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldMailOrderScript* mMailOrderActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldBossBattleScript* mBossBattleActor_;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* mTableDat_[23];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* mBpClass_[21];
    
    UFldCommonData();
};

