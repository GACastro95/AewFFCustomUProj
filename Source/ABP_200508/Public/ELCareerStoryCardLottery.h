#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "GameFramework/Actor.h"
#include "CareerRegularRewardInfo.h"
#include "CareerStoryCard.h"
#include "CareerStoryOpponent.h"
#include "ECareerStoryCardRegularReward.h"
#include "ECareerStoryTiming.h"
#include "ELCareerStoryCardLottery.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerStoryCardLottery : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryCard> m_CareerStoryCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryCard> m_CareerStoryCardVeryShort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryCard> m_CareerStoryCardCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryCard> m_CareerStoryCardLong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryCard> m_CareerStoryCardMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryCard> m_CareerStoryCardDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryCard> m_CareerStoryCardDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryOpponent> m_CareerStoryOpponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerStoryCard> m_TempStoryCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> m_OpponentAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> m_OpponentHERO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> m_OpponentSHY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> m_OpponentCONFIOENT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> m_OpponentENIGMA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> m_OpponentMONSTER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> m_OpponentJERK;
    
public:
    AELCareerStoryCardLottery();
    UFUNCTION(BlueprintCallable)
    void Lottery(ECareerStoryTiming timing);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStoryCardRewardAForVeryShort(ECareerStoryCardRegularReward& _RewardType, int32 _Number);
    
    UFUNCTION(BlueprintCallable)
    FCareerRegularRewardInfo GetStoryCardRegularRewardAForVeryShort(int32 _Number);
    
    UFUNCTION(BlueprintCallable)
    FCareerRegularRewardInfo GetStoryCardRegularRewardAForMiniGame(int32 _Number);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerStoryCard> GetCareerStoryCardTableVeryShort();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerStoryCard> GetCareerStoryCardTableMiniGame();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerStoryCard> GetCareerStoryCardTableLong();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerStoryCard> GetCareerStoryCardTableDebug();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerStoryCard> GetCareerStoryCardTableDark();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerStoryCard> GetCareerStoryCardTableCommand();
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerStoryCard> GetCareerStoryCardTable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CombineStoryCards();
    
    UFUNCTION(BlueprintCallable)
    void Add_StoryOpponent_RowData(FCareerStoryOpponent _Data);
    
    UFUNCTION(BlueprintCallable)
    void Add_StoryCard_RowData_VeryShort(FCareerStoryCard _Data);
    
    UFUNCTION(BlueprintCallable)
    void Add_StoryCard_RowData_MiniGame(FCareerStoryCard _Data);
    
    UFUNCTION(BlueprintCallable)
    void Add_StoryCard_RowData_Long(FCareerStoryCard _Data);
    
    UFUNCTION(BlueprintCallable)
    void Add_StoryCard_RowData_Debug(FCareerStoryCard _Data);
    
    UFUNCTION(BlueprintCallable)
    void Add_StoryCard_RowData_Dark(FCareerStoryCard _Data);
    
    UFUNCTION(BlueprintCallable)
    void Add_StoryCard_RowData_Command(FCareerStoryCard _Data);
    
    UFUNCTION(BlueprintCallable)
    void Add_StoryCard_RowData(FCareerStoryCard _Data);
    
};

