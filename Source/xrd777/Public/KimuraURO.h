#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KimuraURO.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class XRD777_API AKimuraURO : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Rate;
    
public:
    AKimuraURO();
    UFUNCTION(BlueprintCallable)
    void Update(TArray<float> V);
    
    UFUNCTION(BlueprintCallable)
    void Enable(bool F);
    
    UFUNCTION(BlueprintCallable)
    void Apply();
    
};

