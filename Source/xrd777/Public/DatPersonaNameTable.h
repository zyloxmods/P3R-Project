#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatPersonaName.h"
#include "DatPersonaNameTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatPersonaNameTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatPersonaName> Data;
    
    UDatPersonaNameTable();
};

