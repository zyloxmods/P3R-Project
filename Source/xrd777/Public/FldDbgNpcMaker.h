#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAnimPackID.h"
#include "FldDbgNpcMakerEventDelegate.h"
#include "FldDbgNpcMaker.generated.h"

class APawn;

UCLASS(Blueprintable)
class XRD777_API AFldDbgNpcMaker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* NpcClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NpcIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NpcPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APawn*> NpcActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPackID AnimPackID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldDbgNpcMakerEvent Loaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoad;
    
public:
    AFldDbgNpcMaker();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetNpcActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetNpcActor() const;
    
};

