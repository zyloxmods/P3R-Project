#pragma once
#include "CoreMinimal.h"
#include "EFldLmapData_QuestType.h"
#include "FldLmapData_QUEST.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FFldLmapData_QUEST {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldLmapData_QuestType mType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mDispName;
    
    FFldLmapData_QUEST();
};

