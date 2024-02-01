#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfacePostProcess.generated.h"

class UMaterialParameterCollectionInstance;

UCLASS(Blueprintable, EditInlineNew)
class UNiagaraDataInterfacePostProcess : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CreatePostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeightedBlendables PostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* niagaraPostProcessParameter;
    
    UNiagaraDataInterfacePostProcess();
};

