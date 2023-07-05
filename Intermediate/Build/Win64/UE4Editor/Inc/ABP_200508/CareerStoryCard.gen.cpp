// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerStoryCard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerStoryCard() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerStoryCard();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardSize();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioPart();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardSpecialReward();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerStoryCard>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerStoryCard cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerStoryCard::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerStoryCard_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerStoryCard, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerStoryCard"), sizeof(FCareerStoryCard), Get_Z_Construct_UScriptStruct_FCareerStoryCard_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerStoryCard>()
{
	return FCareerStoryCard::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerStoryCard(FCareerStoryCard::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerStoryCard"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerStoryCard
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerStoryCard()
	{
		UScriptStruct::DeferCppStructOps<FCareerStoryCard>(FName(TEXT("CareerStoryCard")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerStoryCard;
	struct Z_Construct_UScriptStruct_FCareerStoryCard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eSize_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePart_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePart_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePart;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartnerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartnerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartnerType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartner_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOpponentTypeA_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOpponentTypeA_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOpponentTypeA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOpponentA_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOpponentA_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOpponentA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOpponentTypeB_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOpponentTypeB_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOpponentTypeB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOpponentB_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOpponentB_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOpponentB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOpponentTypeC_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOpponentTypeC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOpponentTypeC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOpponentC_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOpponentC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOpponentC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOpponentTypeD_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOpponentTypeD_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOpponentTypeD;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eOpponentD_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eOpponentD_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eOpponentD;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eSameWrestlerChange_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eSameWrestlerChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eSameWrestlerChange;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartnerRivalTypeA_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartnerRivalTypeA_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartnerRivalTypeA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartnerRivalA_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartnerRivalA_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartnerRivalA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartnerRivalTypeB_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartnerRivalTypeB_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartnerRivalTypeB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartnerRivalB_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartnerRivalB_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartnerRivalB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartnerRivalTypeC_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartnerRivalTypeC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartnerRivalTypeC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartnerRivalC_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartnerRivalC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartnerRivalC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartnerRivalTypeD_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartnerRivalTypeD_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartnerRivalTypeD;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePartnerRivalD_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePartnerRivalD_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePartnerRivalD;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eSpecialRewardA_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eSpecialRewardA_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eSpecialRewardA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardA1_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardA1_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardA1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueA1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueA1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardA2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardA2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardA2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueA2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueA2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardA3_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardA3_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardA3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueA3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueA3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardA4_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardA4_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardA4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueA4_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueA4;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eSpecialRewardB_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eSpecialRewardB_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eSpecialRewardB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardB1_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardB1_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardB1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueB1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueB1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardB2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardB2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardB2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueB2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueB2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardB3_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardB3_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardB3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueB3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueB3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardB4_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardB4_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardB4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueB4_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueB4;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eSpecialRewardC_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eSpecialRewardC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eSpecialRewardC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardC1_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardC1_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardC1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueC1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueC1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardC2_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardC2_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardC2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueC2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueC2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardC3_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardC3_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardC3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueC3_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueC3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRegularRewardC4_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRegularRewardC4_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRegularRewardC4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sRegularRewardValueC4_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_sRegularRewardValueC4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerStoryCard>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_DataKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_DataKey = { "DataKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, DataKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_DataKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_DataKey_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSize = { "eSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eSize), Z_Construct_UEnum_ABP_200508_ECareerStoryCardSize, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePart = { "ePart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePart), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePart_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerType = { "ePartnerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartnerType), Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartner = { "ePartner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartner), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartner_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeA = { "eOpponentTypeA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eOpponentTypeA), Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentA = { "eOpponentA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eOpponentA), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeB = { "eOpponentTypeB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eOpponentTypeB), Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentB = { "eOpponentB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eOpponentB), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeC = { "eOpponentTypeC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eOpponentTypeC), Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentC = { "eOpponentC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eOpponentC), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeD = { "eOpponentTypeD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eOpponentTypeD), Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeD_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentD = { "eOpponentD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eOpponentD), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentD_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSameWrestlerChange_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSameWrestlerChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSameWrestlerChange = { "eSameWrestlerChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eSameWrestlerChange), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSameWrestlerChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSameWrestlerChange_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeA = { "ePartnerRivalTypeA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartnerRivalTypeA), Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalA = { "ePartnerRivalA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartnerRivalA), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeB = { "ePartnerRivalTypeB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartnerRivalTypeB), Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalB = { "ePartnerRivalB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartnerRivalB), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeC = { "ePartnerRivalTypeC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartnerRivalTypeC), Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalC = { "ePartnerRivalC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartnerRivalC), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeD = { "ePartnerRivalTypeD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartnerRivalTypeD), Z_Construct_UEnum_ABP_200508_ECareerStoryCardWrestlerSpecify, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeD_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalD = { "ePartnerRivalD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, ePartnerRivalD), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalD_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardA = { "eSpecialRewardA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eSpecialRewardA), Z_Construct_UEnum_ABP_200508_ECareerStoryCardSpecialReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA1 = { "eRegularRewardA1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardA1), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA1 = { "sRegularRewardValueA1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueA1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA2 = { "eRegularRewardA2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardA2), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA2 = { "sRegularRewardValueA2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueA2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA3_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA3 = { "eRegularRewardA3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardA3), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA3 = { "sRegularRewardValueA3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueA3), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA3_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA4_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA4 = { "eRegularRewardA4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardA4), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA4 = { "sRegularRewardValueA4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueA4), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA4_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardB = { "eSpecialRewardB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eSpecialRewardB), Z_Construct_UEnum_ABP_200508_ECareerStoryCardSpecialReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB1 = { "eRegularRewardB1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardB1), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB1 = { "sRegularRewardValueB1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueB1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB2 = { "eRegularRewardB2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardB2), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB2 = { "sRegularRewardValueB2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueB2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB3_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB3 = { "eRegularRewardB3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardB3), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB3 = { "sRegularRewardValueB3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueB3), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB3_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB4_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB4 = { "eRegularRewardB4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardB4), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB4 = { "sRegularRewardValueB4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueB4), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB4_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardC = { "eSpecialRewardC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eSpecialRewardC), Z_Construct_UEnum_ABP_200508_ECareerStoryCardSpecialReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC1 = { "eRegularRewardC1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardC1), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC1 = { "sRegularRewardValueC1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueC1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC1_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC2 = { "eRegularRewardC2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardC2), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC2 = { "sRegularRewardValueC2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueC2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC2_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC3_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC3 = { "eRegularRewardC3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardC3), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC3 = { "sRegularRewardValueC3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueC3), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC3_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC4_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC4 = { "eRegularRewardC4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, eRegularRewardC4), Z_Construct_UEnum_ABP_200508_ECareerStoryCardRegularReward, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryCard" },
		{ "ModuleRelativePath", "Public/CareerStoryCard.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC4 = { "sRegularRewardValueC4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryCard, sRegularRewardValueC4), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_DataKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeC_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentC_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeD_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentTypeD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentD_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eOpponentD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSameWrestlerChange_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSameWrestlerChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeC_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalC_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeD_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalTypeD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalD_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_ePartnerRivalD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA3_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA4_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardA4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueA4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB3_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB4_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardB4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueB4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardC_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eSpecialRewardC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC2_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC3_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC4_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_eRegularRewardC4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryCard_Statics::NewProp_sRegularRewardValueC4,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerStoryCard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerStoryCard",
		sizeof(FCareerStoryCard),
		alignof(FCareerStoryCard),
		Z_Construct_UScriptStruct_FCareerStoryCard_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryCard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerStoryCard()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerStoryCard_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerStoryCard"), sizeof(FCareerStoryCard), Get_Z_Construct_UScriptStruct_FCareerStoryCard_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerStoryCard_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerStoryCard_Hash() { return 2681362645U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
