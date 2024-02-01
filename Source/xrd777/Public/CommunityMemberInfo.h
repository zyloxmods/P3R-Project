#pragma once
#include "CoreMinimal.h"
#include "CommunityCharacter.h"
#include "CommunityMemberInfo.generated.h"

USTRUCT(BlueprintType)
struct FCommunityMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommunityCharacter> Member;
    
    XRD777_API FCommunityMemberInfo();
};

