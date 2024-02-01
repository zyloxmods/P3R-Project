#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "AppNpcCostumeData.h"
#include "EAnimPackID.h"
#include "AppNpcSkeletonTableRow.generated.h"

class UAppCharAnimDataAsset;

USTRUCT(BlueprintType)
struct FAppNpcSkeletonTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimPackID, TSoftObjectPtr<UAppCharAnimDataAsset>> Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppNpcCostumeData> Costumes;
    
    XRD777_API FAppNpcSkeletonTableRow();
};

