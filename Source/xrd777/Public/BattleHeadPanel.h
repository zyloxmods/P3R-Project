#pragma once
#include "CoreMinimal.h"
#include "BaseHeadPanel.h"
#include "BattleHeadPanel.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct XRD777_API FBattleHeadPanel : public FBaseHeadPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* materialSmokeInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* materialSmokeInstGrey;
    
    FBattleHeadPanel();
};

