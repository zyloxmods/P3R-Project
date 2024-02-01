#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PauseDebugItem.h"
#include "AppPauseList.generated.h"

class IAppPauseableListener;
class UAppPauseableListener;

UCLASS(Blueprintable)
class UAppPauseList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IAppPauseableListener>> List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPauseDebugItem> DebugList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> WarningObjectNames;
    
    UAppPauseList();
};

