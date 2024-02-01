#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MiniMapOffsetTable.generated.h"

USTRUCT(BlueprintType)
struct FMiniMapOffsetTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FieldID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffsetY;
    
    XRD777_API FMiniMapOffsetTable();
};

