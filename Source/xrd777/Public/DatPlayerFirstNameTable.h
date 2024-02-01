#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatPlayerNameOne.h"
#include "DatPlayerFirstNameTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatPlayerFirstNameTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatPlayerNameOne> Data;
    
    UDatPlayerFirstNameTable();
};

