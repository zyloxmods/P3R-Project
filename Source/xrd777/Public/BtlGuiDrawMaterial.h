#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawStructCore.h"
#include "BtlGuiDrawMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FBtlGuiDrawMaterial : public FBtlGuiDrawStructCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 rect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    XRD777_API FBtlGuiDrawMaterial();
};

