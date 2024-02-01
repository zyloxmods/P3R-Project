#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "FldDungeonEffectTartarosSearch.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldDungeonEffectTartarosSearch : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UFldDungeonEffectTartarosSearch();
    UFUNCTION(BlueprintCallable)
    float GetRadius();
    
    UFUNCTION(BlueprintCallable)
    float GetMaxBrightness();
    
    UFUNCTION(BlueprintCallable)
    float GetLifeSpan();
    
    UFUNCTION(BlueprintCallable)
    float GetIntensity();
    
};

