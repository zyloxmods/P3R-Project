#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatNormalSkillTableRecord.h"
#include "DatSkillNormalTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatSkillNormalTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatNormalSkillTableRecord> Data;
    
    UDatSkillNormalTable();
};

