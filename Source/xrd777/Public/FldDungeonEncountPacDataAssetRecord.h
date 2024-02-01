#pragma once
#include "CoreMinimal.h"
#include "FldDungeonEncountPacDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FFldDungeonEncountPacDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 encNo1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 probability1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 encNo2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 probability2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 encNo3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 probability3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 encNo4;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 probability4;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 encNo5;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 probability5;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 encNo6;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 probability6;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 encNo7;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 probability7;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 encNo8;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 probability8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 order1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 order2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 order3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 order4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 order5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 order6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 order7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 order8;
    
    XRD777_API FFldDungeonEncountPacDataAssetRecord();
};

