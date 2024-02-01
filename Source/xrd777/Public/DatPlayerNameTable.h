#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatPlayerNameOne.h"
#include "DatPlayerNameTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatPlayerNameTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatPlayerNameOne> Data;
    
    UDatPlayerNameTable();
};

