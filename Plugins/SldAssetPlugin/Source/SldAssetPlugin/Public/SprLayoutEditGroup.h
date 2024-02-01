#pragma once
#include "CoreMinimal.h"
#include "SprLayoutDrawItem.h"
#include "SprLayoutEditGroup.generated.h"

USTRUCT(BlueprintType)
struct FSprLayoutEditGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSprLayoutDrawItem> DrawItems;
    
    SLDASSETPLUGIN_API FSprLayoutEditGroup();
};

