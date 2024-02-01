#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TitleStateBase.h"
#include "TitleStateNewGame.generated.h"

class ADifficultySelectionActor;
class UAddContent;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API UTitleStateNewGame : public UTitleStateBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAddContent* AddContentCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADifficultySelectionActor* DifficultySelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADifficultySelectionActor> DifficultySelectionSC;
    
public:
    UTitleStateNewGame();
    UFUNCTION(BlueprintCallable)
    void OnCloseDifficultySelection();
    
    UFUNCTION(BlueprintCallable)
    void OnCanselDifficultySelection();
    
};

