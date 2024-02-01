#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAppCharFaceAnimID.h"
#include "BtlCharacterFaceAnim.generated.h"

USTRUCT(BlueprintType)
struct FBtlCharacterFaceAnim : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharFaceAnimID FaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotPlay;
    
    XRD777_API FBtlCharacterFaceAnim();
};

