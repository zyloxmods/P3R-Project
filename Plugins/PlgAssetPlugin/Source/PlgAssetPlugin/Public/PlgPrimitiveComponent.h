#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "PlgPrimitiveComponent.generated.h"

class UPlgAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLGASSETPLUGIN_API UPlgPrimitiveComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* PlgAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlgPrimitiveNo;
    
    UPlgPrimitiveComponent();
};

