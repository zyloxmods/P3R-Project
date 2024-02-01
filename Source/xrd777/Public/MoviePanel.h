#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoviePanel.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UMoviePanel : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MovieMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OTType;
    
    UMoviePanel();
    UFUNCTION(BlueprintCallable)
    void SetOT(int32 OT);
    
};

