#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DatFontAdjustment.generated.h"

class UAssetLoader;
class UFontAdjustmentListTable;

UCLASS(Blueprintable)
class XRD777_API UDatFontAdjustment : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFontAdjustmentListTable* TableFontAdjustment;
    
public:
    UDatFontAdjustment();
};

