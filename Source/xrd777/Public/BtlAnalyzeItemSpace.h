#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlAnalyzeItemSpace.generated.h"

class UBtlGuiDrawObjectSprite;
class UBtlGuiDrawObjectText;

USTRUCT(BlueprintType)
struct FBtlAnalyzeItemSpace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectText* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectSprite* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectSprite* NoneIcon;
    
    XRD777_API FBtlAnalyzeItemSpace();
};

