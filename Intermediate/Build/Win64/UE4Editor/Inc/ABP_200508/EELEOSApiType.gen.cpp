// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELEOSApiType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEOSApiType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSApiType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELEOSApiType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELEOSApiType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELEOSApiType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELEOSApiType>()
	{
		return EELEOSApiType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEOSApiType(EELEOSApiType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELEOSApiType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELEOSApiType_Hash() { return 3307225411U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELEOSApiType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEOSApiType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELEOSApiType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEOSApiType::None", (int64)EELEOSApiType::None },
				{ "EELEOSApiType::Achievements", (int64)EELEOSApiType::Achievements },
				{ "EELEOSApiType::AntiCheat", (int64)EELEOSApiType::AntiCheat },
				{ "EELEOSApiType::Connect", (int64)EELEOSApiType::Connect },
				{ "EELEOSApiType::Leaderboards", (int64)EELEOSApiType::Leaderboards },
				{ "EELEOSApiType::Lobby", (int64)EELEOSApiType::Lobby },
				{ "EELEOSApiType::P2P", (int64)EELEOSApiType::P2P },
				{ "EELEOSApiType::Platform", (int64)EELEOSApiType::Platform },
				{ "EELEOSApiType::PlayerDataStorage", (int64)EELEOSApiType::PlayerDataStorage },
				{ "EELEOSApiType::Reports", (int64)EELEOSApiType::Reports },
				{ "EELEOSApiType::Sanctions", (int64)EELEOSApiType::Sanctions },
				{ "EELEOSApiType::Sessions", (int64)EELEOSApiType::Sessions },
				{ "EELEOSApiType::Stats", (int64)EELEOSApiType::Stats },
				{ "EELEOSApiType::TitleStorage", (int64)EELEOSApiType::TitleStorage },
				{ "EELEOSApiType::Voice", (int64)EELEOSApiType::Voice },
				{ "EELEOSApiType::Login", (int64)EELEOSApiType::Login },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Achievements.Name", "EELEOSApiType::Achievements" },
				{ "AntiCheat.Name", "EELEOSApiType::AntiCheat" },
				{ "BlueprintType", "true" },
				{ "Connect.Name", "EELEOSApiType::Connect" },
				{ "Leaderboards.Name", "EELEOSApiType::Leaderboards" },
				{ "Lobby.Name", "EELEOSApiType::Lobby" },
				{ "Login.Name", "EELEOSApiType::Login" },
				{ "ModuleRelativePath", "Public/EELEOSApiType.h" },
				{ "None.Name", "EELEOSApiType::None" },
				{ "P2P.Name", "EELEOSApiType::P2P" },
				{ "Platform.Name", "EELEOSApiType::Platform" },
				{ "PlayerDataStorage.Name", "EELEOSApiType::PlayerDataStorage" },
				{ "Reports.Name", "EELEOSApiType::Reports" },
				{ "Sanctions.Name", "EELEOSApiType::Sanctions" },
				{ "Sessions.Name", "EELEOSApiType::Sessions" },
				{ "Stats.Name", "EELEOSApiType::Stats" },
				{ "TitleStorage.Name", "EELEOSApiType::TitleStorage" },
				{ "Voice.Name", "EELEOSApiType::Voice" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELEOSApiType",
				"EELEOSApiType",
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
