#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlAnalyzeSkillSpace.generated.h"

class UBtlGuiDrawObjectRoundRect;
class UBtlGuiDrawObjectSprite;
class UBtlGuiDrawObjectText;

USTRUCT(BlueprintType)
struct FBtlAnalyzeSkillSpace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectText* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectSprite* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectRoundRect* BGRect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlGuiDrawObjectSprite* NoneIcon;
    
    XRD777_API FBtlAnalyzeSkillSpace();
};

