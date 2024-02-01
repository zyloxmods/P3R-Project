#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VeveMessage.generated.h"

USTRUCT(BlueprintType)
struct FVeveMessage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Message;
    
    XRD777_API FVeveMessage();
};

