#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawStructCore.h"
#include "EBtlGuiDrawType.h"
#include "BtlGuiDrawSprite.generated.h"

class USprAsset;

USTRUCT(BlueprintType)
struct FBtlGuiDrawSprite : public FBtlGuiDrawStructCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* Sprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 grpNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SprNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiDrawType drawType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RevHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RevVertical;
    
    XRD777_API FBtlGuiDrawSprite();
};

