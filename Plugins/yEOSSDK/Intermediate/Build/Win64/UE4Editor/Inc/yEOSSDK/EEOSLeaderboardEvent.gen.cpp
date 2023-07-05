// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSLeaderboardEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSLeaderboardEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLeaderboardEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSLeaderboardEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSLeaderboardEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSLeaderboardEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSLeaderboardEvent>()
	{
		return EEOSLeaderboardEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSLeaderboardEvent(EEOSLeaderboardEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSLeaderboardEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSLeaderboardEvent_Hash() { return 1900995391U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLeaderboardEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSLeaderboardEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSLeaderboardEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSLeaderboardEvent::QueryDefinitions", (int64)EEOSLeaderboardEvent::QueryDefinitions },
				{ "EEOSLeaderboardEvent::QueryDefinitionsErr", (int64)EEOSLeaderboardEvent::QueryDefinitionsErr },
				{ "EEOSLeaderboardEvent::QueryRank", (int64)EEOSLeaderboardEvent::QueryRank },
				{ "EEOSLeaderboardEvent::QueryRankErr", (int64)EEOSLeaderboardEvent::QueryRankErr },
				{ "EEOSLeaderboardEvent::QueryUserScore", (int64)EEOSLeaderboardEvent::QueryUserScore },
				{ "EEOSLeaderboardEvent::QueryUserScoreErr", (int64)EEOSLeaderboardEvent::QueryUserScoreErr },
				{ "EEOSLeaderboardEvent::QueryUserScoreNotFound", (int64)EEOSLeaderboardEvent::QueryUserScoreNotFound },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEOSLeaderboardEvent.h" },
				{ "QueryDefinitions.Name", "EEOSLeaderboardEvent::QueryDefinitions" },
				{ "QueryDefinitionsErr.Name", "EEOSLeaderboardEvent::QueryDefinitionsErr" },
				{ "QueryRank.Name", "EEOSLeaderboardEvent::QueryRank" },
				{ "QueryRankErr.Name", "EEOSLeaderboardEvent::QueryRankErr" },
				{ "QueryUserScore.Name", "EEOSLeaderboardEvent::QueryUserScore" },
				{ "QueryUserScoreErr.Name", "EEOSLeaderboardEvent::QueryUserScoreErr" },
				{ "QueryUserScoreNotFound.Name", "EEOSLeaderboardEvent::QueryUserScoreNotFound" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSLeaderboardEvent",
				"EEOSLeaderboardEvent",
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
