#pragma once
#include "CoreMinimal.h"
#include "AppActorComponent.h"
#include "ETownType.h"
#include "UITownMapSymbolComponent.generated.h"

class AFldAnimObj;
class USkinnedMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UUITownMapSymbolComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldAnimObj* FldAnimObj_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkinnedMeshComponent* SkinnedComponent_;
    
    UUITownMapSymbolComponent();
    UFUNCTION(BlueprintCallable)
    void Initialize(AFldAnimObj* FldAnimObj, USkinnedMeshComponent* SkinnedComponent, TEnumAsByte<ETownType> TownType);
    
};

