#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatSkillNameTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatSkillNameTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Data;
    
    UDatSkillNameTable();
};

