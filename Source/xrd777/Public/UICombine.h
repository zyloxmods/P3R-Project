#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "UICombine.generated.h"

class AActor;
class AAppPropsCardContainer;
class AUIPersonaModelActor;
class UAssetLoader;
class UUIVelvetRoomOwner;

UCLASS(Blueprintable)
class XRD777_API UUICombine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIVelvetRoomOwner* m_pOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AUIPersonaModelActor> pBPPersonaBaseCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* pPersonaBaseCore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppPropsCardContainer* pAppPropsCardContainer;
    
public:
    UUICombine();
private:
    UFUNCTION(BlueprintCallable)
    void StreamLevelCountDecrement();
    
};

