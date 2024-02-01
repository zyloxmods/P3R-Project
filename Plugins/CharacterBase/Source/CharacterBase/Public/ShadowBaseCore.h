#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ShadowBaseCore.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class CHARACTERBASE_API AShadowBaseCore : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    AShadowBaseCore();
};

