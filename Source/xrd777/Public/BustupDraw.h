#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BustupObjectBuffer.h"
#include "BustupDraw.generated.h"

class UBustupObject;

UCLASS(Blueprintable)
class XRD777_API UBustupDraw : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBustupObject* BustupObject_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBustupObject* PrevBustupObject_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBustupObjectBuffer> ObjectBuffer_;
    
public:
    UBustupDraw();
};

