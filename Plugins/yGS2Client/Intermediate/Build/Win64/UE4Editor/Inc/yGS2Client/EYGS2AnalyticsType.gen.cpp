// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/EYGS2AnalyticsType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYGS2AnalyticsType() {}
// Cross Module References
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2AnalyticsType();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	static UEnum* EYGS2AnalyticsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yGS2Client_EYGS2AnalyticsType, Z_Construct_UPackage__Script_yGS2Client(), TEXT("EYGS2AnalyticsType"));
		}
		return Singleton;
	}
	template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2AnalyticsType>()
	{
		return EYGS2AnalyticsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYGS2AnalyticsType(EYGS2AnalyticsType_StaticEnum, TEXT("/Script/yGS2Client"), TEXT("EYGS2AnalyticsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yGS2Client_EYGS2AnalyticsType_Hash() { return 3057057977U; }
	UEnum* Z_Construct_UEnum_yGS2Client_EYGS2AnalyticsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYGS2AnalyticsType"), 0, Get_Z_Construct_UEnum_yGS2Client_EYGS2AnalyticsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYGS2AnalyticsType::None", (int64)EYGS2AnalyticsType::None },
				{ "EYGS2AnalyticsType::Offline", (int64)EYGS2AnalyticsType::Offline },
				{ "EYGS2AnalyticsType::Createion", (int64)EYGS2AnalyticsType::Createion },
				{ "EYGS2AnalyticsType::Online", (int64)EYGS2AnalyticsType::Online },
				{ "EYGS2AnalyticsType::Casual_MatchingInfo", (int64)EYGS2AnalyticsType::Casual_MatchingInfo },
				{ "EYGS2AnalyticsType::Ranked_MatchingInfo", (int64)EYGS2AnalyticsType::Ranked_MatchingInfo },
				{ "EYGS2AnalyticsType::Private_MatchingInfo", (int64)EYGS2AnalyticsType::Private_MatchingInfo },
				{ "EYGS2AnalyticsType::SS_Mode", (int64)EYGS2AnalyticsType::SS_Mode },
				{ "EYGS2AnalyticsType::SS_MatchingInfo", (int64)EYGS2AnalyticsType::SS_MatchingInfo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Casual_MatchingInfo.Name", "EYGS2AnalyticsType::Casual_MatchingInfo" },
				{ "Createion.Name", "EYGS2AnalyticsType::Createion" },
				{ "ModuleRelativePath", "Public/EYGS2AnalyticsType.h" },
				{ "None.Name", "EYGS2AnalyticsType::None" },
				{ "Offline.Name", "EYGS2AnalyticsType::Offline" },
				{ "Online.Name", "EYGS2AnalyticsType::Online" },
				{ "Private_MatchingInfo.Name", "EYGS2AnalyticsType::Private_MatchingInfo" },
				{ "Ranked_MatchingInfo.Name", "EYGS2AnalyticsType::Ranked_MatchingInfo" },
				{ "SS_MatchingInfo.Name", "EYGS2AnalyticsType::SS_MatchingInfo" },
				{ "SS_Mode.Name", "EYGS2AnalyticsType::SS_Mode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yGS2Client,
				nullptr,
				"EYGS2AnalyticsType",
				"EYGS2AnalyticsType",
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
