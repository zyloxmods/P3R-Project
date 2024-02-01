#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayerControlBlock.generated.h"

class UAtomComponent;
class ULipsAtomAnalyzer;

UCLASS(Blueprintable)
class SOUNDMANAGER_API UPlayerControlBlock : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULipsAtomAnalyzer* LipsAnalyzer;
    
    UPlayerControlBlock();
};

