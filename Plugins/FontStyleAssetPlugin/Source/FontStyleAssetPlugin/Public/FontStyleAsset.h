#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FontStyleData.h"
#include "FontStyleAsset.generated.h"

UCLASS(Blueprintable)
class FONTSTYLEASSETPLUGIN_API UFontStyleAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFontStyleData MediumStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFontStyleData SmallStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFontStyleData SSmallStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItalicOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersonaStatusItalicOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TheurgiaItalicOffset;
    
    UFontStyleAsset();
};

