#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIMiscGetItemDraw.generated.h"

class UDataTable;
class UPlgAsset;
class USprAsset;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AUIMiscGetItemDraw : public AUIBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pGetItemSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* m_pGetPlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pItemGetDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpecialKeyHelpSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* m_pSpecialKeyHelpTextSpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pLayoutTextColDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pLayoutOkNextDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pLayoutOkNextMaskDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* m_pLayoutTextCol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* m_pLayoutOkNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* m_pLayoutOkNextMask;
    
public:
    AUIMiscGetItemDraw();
};

