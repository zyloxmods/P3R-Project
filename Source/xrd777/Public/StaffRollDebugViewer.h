#pragma once
#include "CoreMinimal.h"
#include "DebugViewer.h"
#include "StaffRollDebugViewer.generated.h"

class AScrActor;
class AStaffRoll;
class UAssetLoader;
class UBfAsset;

UCLASS(Blueprintable)
class XRD777_API AStaffRollDebugViewer : public ADebugViewer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBfAsset* mpBfAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScrActor* mpActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBFAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaffRoll* pStaffRollSys;
    
public:
    AStaffRollDebugViewer();
};

