#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PersonaConfigTable.generated.h"

USTRUCT(BlueprintType)
struct FPersonaConfigTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BirthMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ToneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoicePack;
    
    XRD777_API FPersonaConfigTable();
};

