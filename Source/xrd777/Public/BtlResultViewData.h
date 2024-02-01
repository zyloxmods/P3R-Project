#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BtlResultViewData.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlResultViewData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Exp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> PartyAfterLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HeroStatusShowFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBonusExpArcana;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBonusExpTheurgia;
    
    UBtlResultViewData();
};

