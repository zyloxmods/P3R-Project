#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AddContentTable.generated.h"

USTRUCT(BlueprintType)
struct FAddContentTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 CategoryID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemId[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 itemNum[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ActiveFlag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GetFlag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NewFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GdkStoreId;
    
    XRD777_API FAddContentTable();
};

