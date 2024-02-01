#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EShadowSettingCategory.h"
#include "ShadowSettingData.h"
#include "ShadowFieldData.generated.h"

USTRUCT(BlueprintType)
struct FShadowFieldData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 majorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 minorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString partsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShadowSettingCategory dataCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShadowSettingData> actorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShadowSettingData> childComponentList;
    
    XRD777_API FShadowFieldData();
};

