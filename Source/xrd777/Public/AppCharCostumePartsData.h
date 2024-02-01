#pragma once
#include "CoreMinimal.h"
#include "AppCharCostumePartsData.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FAppCharCostumePartsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> Anim;
    
    XRD777_API FAppCharCostumePartsData();
};

