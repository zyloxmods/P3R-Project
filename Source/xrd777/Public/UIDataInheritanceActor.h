#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "Templates/SubclassOf.h"
#include "UIDataInheritanceActor.generated.h"

class ADifficultySelectionActor;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API AUIDataInheritanceActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADifficultySelectionActor* DifficultySelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADifficultySelectionActor> DifficultySelectionSC;
    
    AUIDataInheritanceActor();
    UFUNCTION(BlueprintCallable)
    void OnSelectedChoise();
    
    UFUNCTION(BlueprintCallable)
    void CallStatePatternEndDelicate();
    
};

