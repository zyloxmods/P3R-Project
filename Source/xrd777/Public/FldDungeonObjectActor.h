#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppActor.h"
#include "EDungeonObjType.h"
#include "FldDungeonObjectActor.generated.h"

class AActor;
class AFldAnimObj;
class AFldDungeonObjectActor;
class AFldHitActor;
class APawn;
class UBoxComponent;
class ULightComponent;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonObjectActor : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDungeonObjType ObjType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BaseObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitAnimNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitAnimNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndAnimNo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonObjectActor* m_pBaseObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldHitActor*> m_pHitActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldAnimObj*> m_AnimObjList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_pBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> m_pLightComps;
    
public:
    AFldDungeonObjectActor();
    UFUNCTION(BlueprintCallable)
    void HitOutNotice(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void HitInNotice(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void HitActionNotice(APawn* Player);
    
};

