#pragma once
#include "CoreMinimal.h"
#include "SelItem.h"
#include "SelAEventTypeA.generated.h"

class UAssetLoader;
class UDataTable;
class USprAsset;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API USelAEventTypeA : public USelItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* pSprAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
public:
    USelAEventTypeA();
};

