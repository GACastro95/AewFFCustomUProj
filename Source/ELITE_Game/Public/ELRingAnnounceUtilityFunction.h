#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERingAnnounceTable.h"
#include "ELRingAnnounceUtilityFunction.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ELITE_GAME_API UELRingAnnounceUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELRingAnnounceUtilityFunction();

    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetRAAtomCue(const FString& _CueId, const FString& _CueName, ERingAnnounceTable _tableNo, int32 CueNo);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetAtomCue(ERingAnnounceTable Kind, const FName RowName, const FName CueName, const int32 CueNo);
    
};

