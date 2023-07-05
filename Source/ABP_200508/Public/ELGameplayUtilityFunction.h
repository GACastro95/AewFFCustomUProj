#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELGameplayUtilityFunction.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API UELGameplayUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELGameplayUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetMovesDataTable_SystemReferee();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetMovesDataTable_SystemManager();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetMovesDataTable_System();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetMovesDataTable_Submission();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetMovesDataTable_StartOfMatch();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetMovesDataTable_Pin();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGameplayDataTable_Weapon();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetGameplayDataTable_PlayerColor();
    
};

