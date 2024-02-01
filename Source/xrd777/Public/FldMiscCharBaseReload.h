#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldMiscCharBaseReload_Data.h"
#include "FldMiscCharBaseReload.generated.h"

UCLASS(Blueprintable)
class XRD777_API AFldMiscCharBaseReload : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldMiscCharBaseReload_Data> mDataArray_;
    
public:
    AFldMiscCharBaseReload();
};

