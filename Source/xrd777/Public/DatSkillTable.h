#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatSkillTableRecord.h"
#include "DatSkillTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatSkillTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatSkillTableRecord> Data;
    
    UDatSkillTable();
};

