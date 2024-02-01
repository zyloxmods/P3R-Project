#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "AppNpcCostumePartsData.h"
#include "AppNpcUniqueCostumeData.h"
#include "EAnimPackID.h"
#include "AppNpcCostume_DA.generated.h"

class UAppCharAnimDataAsset;

UCLASS(Blueprintable)
class XRD777_API UAppNpcCostume_DA : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimPackID, TSoftObjectPtr<UAppCharAnimDataAsset>> Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNpcCostumePartsData Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppNpcCostumePartsData> CostumeSummer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppNpcCostumePartsData> CostumeWinter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppNpcCostumePartsData> Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppNpcCostumePartsData> Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAppNpcUniqueCostumeData> Unique;
    
    UAppNpcCostume_DA();
protected:
    UFUNCTION(BlueprintCallable)
    void Make();
    
};

