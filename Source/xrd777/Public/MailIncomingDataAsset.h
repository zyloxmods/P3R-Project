#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "MailIncomingItem.h"
#include "MailIncomingDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UMailIncomingDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMailIncomingItem> Data;
    
    UMailIncomingDataAsset();
};

