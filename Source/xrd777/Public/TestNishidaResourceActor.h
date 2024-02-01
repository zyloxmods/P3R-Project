#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestNishidaResourceActor.generated.h"

class UTexture;

UCLASS(Blueprintable)
class XRD777_API ATestNishidaResourceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* _HardReferenceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> _SoftReferenceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* _texture;
    
    ATestNishidaResourceActor();
    UFUNCTION(BlueprintCallable)
    void Load();
    
};

