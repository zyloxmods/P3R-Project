#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DatSystemText.generated.h"

class UAssetLoader;
class UDataTable;

UCLASS(Blueprintable)
class XRD777_API UDatSystemText : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> SystemTextTable;
    
public:
    UDatSystemText();
};

