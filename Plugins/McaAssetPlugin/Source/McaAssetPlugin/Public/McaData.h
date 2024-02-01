#pragma once
#include "CoreMinimal.h"
#include "McaCamData.h"
#include "McaData.generated.h"

USTRUCT(BlueprintType)
struct MCAASSETPLUGIN_API FMcaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 frameSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frameNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dataFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcaCamData> pCamData;
    
    FMcaData();
};

