#pragma once
#include "CoreMinimal.h"
#include "EMailLayout.generated.h"

UENUM(BlueprintType)
enum class EMailLayout : uint8 {
    MAIL_NEW_MESSAGE,
    MAIL_LIST_TITLE,
    MAIL_TITLE,
    MAIL_LIST_SENDER,
    MAIL_SENDER,
    MAIL_TODAYS,
    Max,
};

