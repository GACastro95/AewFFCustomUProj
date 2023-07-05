#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMovesCategory.h"
#include "EMovesState.h"
#include "MovesMovesCategory.h"
#include "MovesPlayerStart.generated.h"

class AELMovesPlayerPosition;

UCLASS(Blueprintable)
class CREATION_API UMovesPlayerStart : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovesPlayerStart();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesPlayerStartData(TArray<AELMovesPlayerPosition*>& _outList, const TArray<AELMovesPlayerPosition*>& _Array, const FMovesMovesCategory& Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesPlayerStartArray(TArray<AELMovesPlayerPosition*>& _outList, const TArray<AELMovesPlayerPosition*>& _Array, EMovesCategory Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMovesCheckPlayerStartData(TArray<AELMovesPlayerPosition*>& _outList, const TArray<AELMovesPlayerPosition*>& _Array, int32 Index, const TArray<EMovesState>& MyMovesState);
    
};

