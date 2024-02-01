#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawObjectCore.h"
#include "EBtlGuiOT.h"
#include "BtlGuiDrawObjectClearScreen.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectClearScreen : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiOT OT;
    
    UBtlGuiDrawObjectClearScreen();
};

