#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SkillcardItemList.h"
#include "SkillcardItemListTable.generated.h"

UCLASS(Blueprintable)
class XRD777_API USkillcardItemListTable : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillcardItemList> Data;
    
    USkillcardItemListTable();
};

