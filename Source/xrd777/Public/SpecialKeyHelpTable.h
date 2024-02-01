#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpecialKeyHelpTable.generated.h"

USTRUCT(BlueprintType)
struct FSpecialKeyHelpTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IN_OK_MASK_FRAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OUT_OK_MASK_FRAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IN_RECT_ANIM_FRAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WAIT_OUT_OK_FRAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FADE_IN_FRAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FADE_OUT_FRAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MARU_PEKE_BOUNCE_FRAME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NEXT_ANIM_FRAME;
    
    XRD777_API FSpecialKeyHelpTable();
};

