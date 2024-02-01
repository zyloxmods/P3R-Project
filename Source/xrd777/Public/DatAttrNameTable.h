#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatAttrNameTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatAttrNameTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Data;
    
    UDatAttrNameTable();
};

