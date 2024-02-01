#pragma once
#include "CoreMinimal.h"
#include "FldShortcutData.generated.h"

USTRUCT(BlueprintType)
struct FFldShortcutData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 mShortcutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mEnable;
    
    XRD777_API FFldShortcutData();
};

