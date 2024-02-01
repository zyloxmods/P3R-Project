#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatBtlMixraidReleaseDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatBtlMixraidReleaseDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 PersonaAID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 PersonaBID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Skill;
    
    XRD777_API FDatBtlMixraidReleaseDataTable();
};

