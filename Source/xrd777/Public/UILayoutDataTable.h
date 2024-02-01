#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UILayoutDataTable.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class XRD777_API UUILayoutDataTable : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutTable;
    
public:
    UUILayoutDataTable();
};

