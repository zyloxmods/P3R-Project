#pragma once
#include "CoreMinimal.h"
#include "SprLayoutEditGroup.h"
#include "SprLayoutEditScene.generated.h"

USTRUCT(BlueprintType)
struct FSprLayoutEditScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSprLayoutEditGroup> Groups;
    
    SLDASSETPLUGIN_API FSprLayoutEditScene();
};

