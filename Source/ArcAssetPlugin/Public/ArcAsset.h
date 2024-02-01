#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ArcAsset.generated.h"

UCLASS(Blueprintable)
class ARCASSETPLUGIN_API UArcAsset : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> mBuffer_;
    
public:
    UArcAsset();
};

