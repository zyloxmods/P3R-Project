#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DatBtlMixraidReleaseRecord.h"
#include "DatBtlMixraidReleaseTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDatBtlMixraidReleaseTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatBtlMixraidReleaseRecord> Data;
    
    UDatBtlMixraidReleaseTable();
};

