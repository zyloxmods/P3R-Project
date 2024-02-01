#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FldCrowdOpacityComp.h"
#include "FldCrowdWalkOpacityComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UFldCrowdWalkOpacityComp : public UFldCrowdOpacityComp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mSpeedLoc_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mInvisibleRadiusLoc_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDisappearRadiusLoc_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mStartPoint_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mEndPoint_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mOpacityLoc_;
    
public:
    UFldCrowdWalkOpacityComp();
    UFUNCTION(BlueprintCallable)
    void SetPointLocation(FVector StartPoint, FVector EndPoint);
    
};

