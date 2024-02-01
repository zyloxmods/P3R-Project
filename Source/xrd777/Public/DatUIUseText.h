#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DatUIUseText.generated.h"

class UAssetLoader;
class UDataTable;

UCLASS(Blueprintable)
class XRD777_API UDatUIUseText : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FString> UIUseTextTable;
    
public:
    UDatUIUseText();
};

