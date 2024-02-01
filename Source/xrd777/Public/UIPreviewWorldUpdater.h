#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "UIPreviewWorldUpdater.generated.h"

class UObject;
class UWorld;

UCLASS(Blueprintable)
class AUIPreviewWorldUpdater : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> PreviewWorld;
    
public:
    AUIPreviewWorldUpdater();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetAllActorsOfClass(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);
    
};

