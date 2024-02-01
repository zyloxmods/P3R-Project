#pragma once
#include "CoreMinimal.h"
#include "DatUnitStatus.generated.h"

USTRUCT(BlueprintType)
struct FDatUnitStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Sp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 tp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 bad;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Level;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Exp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 affinity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 personalSkill;
    
    XRD777_API FDatUnitStatus();
};

