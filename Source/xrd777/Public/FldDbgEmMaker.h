#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FldDbgEmMakerEventDelegate.h"
#include "FldEnemyHolder.h"
#include "FldDbgEmMaker.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDbgEmMaker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* EmClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Bg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldDbgEmMakerEvent Loaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoadEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldEnemyHolder> Enemy;
    
public:
    AFldDbgEmMaker();
    UFUNCTION(BlueprintCallable)
    void SetScale(AActor* Target, float Scale);
    
};

