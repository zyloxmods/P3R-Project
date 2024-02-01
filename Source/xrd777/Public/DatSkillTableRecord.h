#pragma once
#include "CoreMinimal.h"
#include "DatSkillTableRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatSkillTableRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 attr;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 targetLv;
    
    XRD777_API FDatSkillTableRecord();
};

