#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialParameterCollection.h"
#include "Materials/MaterialParameterCollection.h"
#include "ModelCaptureEnvironment.generated.h"

USTRUCT(BlueprintType)
struct FModelCaptureEnvironment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectionScalarParameter> ScalarParameters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectionVectorParameter> VectorParameters;
    
    XRD777_API FModelCaptureEnvironment();
};

