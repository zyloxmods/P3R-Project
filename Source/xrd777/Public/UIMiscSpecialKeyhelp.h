#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIMiscSpecialKeyhelp.generated.h"

class UAssetLoader;
class UDataTable;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API UUIMiscSpecialKeyhelp : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* m_pLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpecialKeyHelpSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpecialKeyHelpTextSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pDataTable;
    
public:
    UUIMiscSpecialKeyhelp();
};

