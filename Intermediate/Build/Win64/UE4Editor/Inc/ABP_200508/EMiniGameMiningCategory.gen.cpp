// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMiniGameMiningCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMiniGameMiningCategory() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameMiningCategory();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMiniGameMiningCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMiniGameMiningCategory, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMiniGameMiningCategory"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMiniGameMiningCategory>()
	{
		return EMiniGameMiningCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMiniGameMiningCategory(EMiniGameMiningCategory_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMiniGameMiningCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMiniGameMiningCategory_Hash() { return 2478434897U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameMiningCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMiniGameMiningCategory"), 0, Get_Z_Construct_UEnum_ABP_200508_EMiniGameMiningCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMiniGameMiningCategory::AllPlayCountByCareer", (int64)EMiniGameMiningCategory::AllPlayCountByCareer },
				{ "EMiniGameMiningCategory::AllPlayCount", (int64)EMiniGameMiningCategory::AllPlayCount },
				{ "EMiniGameMiningCategory::PlayTime", (int64)EMiniGameMiningCategory::PlayTime },
				{ "EMiniGameMiningCategory::OnlinePlayCategory", (int64)EMiniGameMiningCategory::OnlinePlayCategory },
				{ "EMiniGameMiningCategory::OfflinePlayCategory", (int64)EMiniGameMiningCategory::OfflinePlayCategory },
				{ "EMiniGameMiningCategory::PlayCount", (int64)EMiniGameMiningCategory::PlayCount },
				{ "EMiniGameMiningCategory::PlayCountOnline", (int64)EMiniGameMiningCategory::PlayCountOnline },
				{ "EMiniGameMiningCategory::PlayCountOffline", (int64)EMiniGameMiningCategory::PlayCountOffline },
				{ "EMiniGameMiningCategory::PlayCountLevel", (int64)EMiniGameMiningCategory::PlayCountLevel },
				{ "EMiniGameMiningCategory::WinCount", (int64)EMiniGameMiningCategory::WinCount },
				{ "EMiniGameMiningCategory::DrawCount", (int64)EMiniGameMiningCategory::DrawCount },
				{ "EMiniGameMiningCategory::LoseCount", (int64)EMiniGameMiningCategory::LoseCount },
				{ "EMiniGameMiningCategory::QuitCount", (int64)EMiniGameMiningCategory::QuitCount },
				{ "EMiniGameMiningCategory::OnlineScore", (int64)EMiniGameMiningCategory::OnlineScore },
				{ "EMiniGameMiningCategory::OfflineScore", (int64)EMiniGameMiningCategory::OfflineScore },
				{ "EMiniGameMiningCategory::SelectBat", (int64)EMiniGameMiningCategory::SelectBat },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AllPlayCount.Name", "EMiniGameMiningCategory::AllPlayCount" },
				{ "AllPlayCountByCareer.Name", "EMiniGameMiningCategory::AllPlayCountByCareer" },
				{ "BlueprintType", "true" },
				{ "DrawCount.Name", "EMiniGameMiningCategory::DrawCount" },
				{ "LoseCount.Name", "EMiniGameMiningCategory::LoseCount" },
				{ "ModuleRelativePath", "Public/EMiniGameMiningCategory.h" },
				{ "OfflinePlayCategory.Name", "EMiniGameMiningCategory::OfflinePlayCategory" },
				{ "OfflineScore.Name", "EMiniGameMiningCategory::OfflineScore" },
				{ "OnlinePlayCategory.Name", "EMiniGameMiningCategory::OnlinePlayCategory" },
				{ "OnlineScore.Name", "EMiniGameMiningCategory::OnlineScore" },
				{ "PlayCount.Name", "EMiniGameMiningCategory::PlayCount" },
				{ "PlayCountLevel.Name", "EMiniGameMiningCategory::PlayCountLevel" },
				{ "PlayCountOffline.Name", "EMiniGameMiningCategory::PlayCountOffline" },
				{ "PlayCountOnline.Name", "EMiniGameMiningCategory::PlayCountOnline" },
				{ "PlayTime.Name", "EMiniGameMiningCategory::PlayTime" },
				{ "QuitCount.Name", "EMiniGameMiningCategory::QuitCount" },
				{ "SelectBat.Name", "EMiniGameMiningCategory::SelectBat" },
				{ "WinCount.Name", "EMiniGameMiningCategory::WinCount" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMiniGameMiningCategory",
				"EMiniGameMiningCategory",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
