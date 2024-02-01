#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AsyncCueSheetManager.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable)
class SOUNDMANAGER_API UAsyncCueSheetManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadFailed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadCompleted OnLoadCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadFailed OnLoadFailed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
public:
    UAsyncCueSheetManager();
    UFUNCTION(BlueprintCallable)
    void LoadAsync(FSoftObjectPath PathForCueSheet);
    
    UFUNCTION(BlueprintCallable)
    USoundAtomCueSheet* GetAtomCueSheet();
    
};

