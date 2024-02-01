#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatBtlCommonName.h"
#include "DatBtlCommonNameTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatBtlCommonNameTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatBtlCommonName> Data;
    
    UDatBtlCommonNameTable();
};

