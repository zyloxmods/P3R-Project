#pragma once
#include "CoreMinimal.h"
#include "FldLmapData_CMM.h"
#include "FldLmapData_NPC.h"
#include "FldLmapData_QUEST.h"
#include "FldLmapData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FFldLmapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldLmapData_CMM> mCmmList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldLmapData_NPC> mMaleQuestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldLmapData_NPC> mDormitoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldLmapData_NPC> mKoromaruList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldLmapData_QUEST> mQuestList;
    
    FFldLmapData();
};

