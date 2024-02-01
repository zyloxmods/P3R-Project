#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatAffinityDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatAffinityDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Slash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 strike;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 pierce;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 fire;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ice;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 electric;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 wind;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 almighty;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Light;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 dark;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 charm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 poison;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 upset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 panic;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 fear;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 anger;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 recovery;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 support;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Special;
    
    XRD777_API FDatAffinityDataTable();
};

