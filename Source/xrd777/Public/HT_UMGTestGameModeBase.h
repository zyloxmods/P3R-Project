#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Templates/SubclassOf.h"
#include "HT_UMGTestGameModeBase.generated.h"

class UUserWidget;

UCLASS(Blueprintable, NonTransient)
class XRD777_API AHT_UMGTestGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> StartingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* CurrentWidget;
    
public:
    AHT_UMGTestGameModeBase();
    UFUNCTION(BlueprintCallable)
    void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);
    
};

