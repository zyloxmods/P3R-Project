#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovieCuePointFunction.generated.h"

class UManaComponent;

UCLASS(Blueprintable)
class XRD777_API UMovieCuePointFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieCuePointFunction();
    UFUNCTION(BlueprintCallable)
    static void MovieSetMetaDataWorkAllocator(UManaComponent* ManaComponent);
    
    UFUNCTION(BlueprintCallable)
    static void MovieLoadAssetStart();
    
    UFUNCTION(BlueprintCallable)
    static void MovieLoadAssetForCuePoint(UManaComponent* ManaComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool MovieIsLoadedAssetForCuePoint();
    
    UFUNCTION(BlueprintCallable)
    static int32 MovieGetLanguageTrack();
    
    UFUNCTION(BlueprintCallable)
    static int32 MovieCheckTrackId(UManaComponent* ManaComponent, int32 trackId);
    
    UFUNCTION(BlueprintCallable)
    static void MovieBindCuePointFunction(UManaComponent* ManaComponent);
    
};

