// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/EYGS2Api.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYGS2Api() {}
// Cross Module References
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2Api();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	static UEnum* EYGS2Api_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yGS2Client_EYGS2Api, Z_Construct_UPackage__Script_yGS2Client(), TEXT("EYGS2Api"));
		}
		return Singleton;
	}
	template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2Api>()
	{
		return EYGS2Api_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYGS2Api(EYGS2Api_StaticEnum, TEXT("/Script/yGS2Client"), TEXT("EYGS2Api"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yGS2Client_EYGS2Api_Hash() { return 4079829883U; }
	UEnum* Z_Construct_UEnum_yGS2Client_EYGS2Api()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYGS2Api"), 0, Get_Z_Construct_UEnum_yGS2Client_EYGS2Api_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYGS2Api::None", (int64)EYGS2Api::None },
				{ "EYGS2Api::GetInfo", (int64)EYGS2Api::GetInfo },
				{ "EYGS2Api::Ping", (int64)EYGS2Api::Ping },
				{ "EYGS2Api::AppAuth", (int64)EYGS2Api::AppAuth },
				{ "EYGS2Api::UserAuth", (int64)EYGS2Api::UserAuth },
				{ "EYGS2Api::RegistUser", (int64)EYGS2Api::RegistUser },
				{ "EYGS2Api::GetSSInfo", (int64)EYGS2Api::GetSSInfo },
				{ "EYGS2Api::GetPlayerData", (int64)EYGS2Api::GetPlayerData },
				{ "EYGS2Api::SetPlayerData", (int64)EYGS2Api::SetPlayerData },
				{ "EYGS2Api::PurchaseHistory", (int64)EYGS2Api::PurchaseHistory },
				{ "EYGS2Api::ConsumeGold", (int64)EYGS2Api::ConsumeGold },
				{ "EYGS2Api::ConsumeItem", (int64)EYGS2Api::ConsumeItem },
				{ "EYGS2Api::UserItems", (int64)EYGS2Api::UserItems },
				{ "EYGS2Api::BattlePass", (int64)EYGS2Api::BattlePass },
				{ "EYGS2Api::UserStats", (int64)EYGS2Api::UserStats },
				{ "EYGS2Api::RankMatchRecord", (int64)EYGS2Api::RankMatchRecord },
				{ "EYGS2Api::ShopItems", (int64)EYGS2Api::ShopItems },
				{ "EYGS2Api::Events", (int64)EYGS2Api::Events },
				{ "EYGS2Api::SetSSPlayerData", (int64)EYGS2Api::SetSSPlayerData },
				{ "EYGS2Api::GetSSPlayerData", (int64)EYGS2Api::GetSSPlayerData },
				{ "EYGS2Api::SetSSGameStart", (int64)EYGS2Api::SetSSGameStart },
				{ "EYGS2Api::SetSSGameResult", (int64)EYGS2Api::SetSSGameResult },
				{ "EYGS2Api::SetSSSessionResult", (int64)EYGS2Api::SetSSSessionResult },
				{ "EYGS2Api::GetSSMasterData", (int64)EYGS2Api::GetSSMasterData },
				{ "EYGS2Api::Analytics", (int64)EYGS2Api::Analytics },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Analytics.Name", "EYGS2Api::Analytics" },
				{ "AppAuth.Name", "EYGS2Api::AppAuth" },
				{ "BattlePass.Name", "EYGS2Api::BattlePass" },
				{ "BlueprintType", "true" },
				{ "ConsumeGold.Name", "EYGS2Api::ConsumeGold" },
				{ "ConsumeItem.Name", "EYGS2Api::ConsumeItem" },
				{ "Events.Name", "EYGS2Api::Events" },
				{ "GetInfo.Name", "EYGS2Api::GetInfo" },
				{ "GetPlayerData.Name", "EYGS2Api::GetPlayerData" },
				{ "GetSSInfo.Name", "EYGS2Api::GetSSInfo" },
				{ "GetSSMasterData.Name", "EYGS2Api::GetSSMasterData" },
				{ "GetSSPlayerData.Name", "EYGS2Api::GetSSPlayerData" },
				{ "ModuleRelativePath", "Public/EYGS2Api.h" },
				{ "None.Name", "EYGS2Api::None" },
				{ "Ping.Name", "EYGS2Api::Ping" },
				{ "PurchaseHistory.Name", "EYGS2Api::PurchaseHistory" },
				{ "RankMatchRecord.Name", "EYGS2Api::RankMatchRecord" },
				{ "RegistUser.Name", "EYGS2Api::RegistUser" },
				{ "SetPlayerData.Name", "EYGS2Api::SetPlayerData" },
				{ "SetSSGameResult.Name", "EYGS2Api::SetSSGameResult" },
				{ "SetSSGameStart.Name", "EYGS2Api::SetSSGameStart" },
				{ "SetSSPlayerData.Name", "EYGS2Api::SetSSPlayerData" },
				{ "SetSSSessionResult.Name", "EYGS2Api::SetSSSessionResult" },
				{ "ShopItems.Name", "EYGS2Api::ShopItems" },
				{ "UserAuth.Name", "EYGS2Api::UserAuth" },
				{ "UserItems.Name", "EYGS2Api::UserItems" },
				{ "UserStats.Name", "EYGS2Api::UserStats" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yGS2Client,
				nullptr,
				"EYGS2Api",
				"EYGS2Api",
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
