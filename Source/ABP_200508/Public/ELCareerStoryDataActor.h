#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CareerStory.h"
#include "ELCareerStoryDataActor.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerStoryDataActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStory> m_StoryDataTable;
    
public:
    AELCareerStoryDataActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupStoryDataFromStoryList(FName _key);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryDataTable(TArray<FCareerStory> _Table);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadStoryData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCareerStory> GetStoryDataTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerStory GetCareerStoryRowData(FName _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerStory GetCareerStoryFirstData();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetCareerStoryDataTableByString(const FString& _AssetPath);
    
    UFUNCTION(BlueprintCallable)
    void ClearStoryDataTable();
    
    UFUNCTION(BlueprintCallable)
    void AddCareerStoryData(FCareerStory _Data);
    
};

