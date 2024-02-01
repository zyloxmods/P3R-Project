#pragma once
#include "CoreMinimal.h"
#include "FldDungeonSoundBaseActor.h"
#include "FldDungeonSoundActor.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldDungeonSoundActor : public AFldDungeonSoundBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CueIDList;
    
    AFldDungeonSoundActor();
};

