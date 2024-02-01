#pragma once
#include "CoreMinimal.h"
#include "DatUnitItem.h"
#include "DatUnitPersona.h"
#include "DatUnitSpecialSkill.h"
#include "DatUnitStatus.h"
#include "DatUnitSupport.h"
#include "DatUnitWork.generated.h"

USTRUCT(BlueprintType)
struct FDatUnitWork {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 genus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatUnitStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatUnitSupport support;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatUnitPersona persona;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatUnitItem Item;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Operation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Message;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 maxHpUp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 maxSpUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatUnitSpecialSkill specialSkill;
    
    XRD777_API FDatUnitWork();
};

