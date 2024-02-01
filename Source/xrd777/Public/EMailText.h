#pragma once
#include "CoreMinimal.h"
#include "EMailText.generated.h"

UENUM(BlueprintType)
enum class EMailText : uint8 {
    MAIL_LIST_SENDER,
    MAIL_LIST_TITLE,
    MAIL_SENDER,
    MAIL_TITLE,
    Max,
};

