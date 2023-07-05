// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EYGS2DebugMenuCommand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYGS2DebugMenuCommand() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuCommand();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EYGS2DebugMenuCommand_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuCommand, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EYGS2DebugMenuCommand"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EYGS2DebugMenuCommand>()
	{
		return EYGS2DebugMenuCommand_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYGS2DebugMenuCommand(EYGS2DebugMenuCommand_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EYGS2DebugMenuCommand"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuCommand_Hash() { return 11349445U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuCommand()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYGS2DebugMenuCommand"), 0, Get_Z_Construct_UEnum_ABP_200508_EYGS2DebugMenuCommand_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYGS2DebugMenuCommand::None", (int64)EYGS2DebugMenuCommand::None },
				{ "EYGS2DebugMenuCommand::GetInfo", (int64)EYGS2DebugMenuCommand::GetInfo },
				{ "EYGS2DebugMenuCommand::Ping", (int64)EYGS2DebugMenuCommand::Ping },
				{ "EYGS2DebugMenuCommand::AppAuth", (int64)EYGS2DebugMenuCommand::AppAuth },
				{ "EYGS2DebugMenuCommand::UserAuth", (int64)EYGS2DebugMenuCommand::UserAuth },
				{ "EYGS2DebugMenuCommand::GetPlayerData", (int64)EYGS2DebugMenuCommand::GetPlayerData },
				{ "EYGS2DebugMenuCommand::GetUserItems", (int64)EYGS2DebugMenuCommand::GetUserItems },
				{ "EYGS2DebugMenuCommand::PurchaseHistory", (int64)EYGS2DebugMenuCommand::PurchaseHistory },
				{ "EYGS2DebugMenuCommand::FindPurchaseHistory", (int64)EYGS2DebugMenuCommand::FindPurchaseHistory },
				{ "EYGS2DebugMenuCommand::CreatePurchaseHistory", (int64)EYGS2DebugMenuCommand::CreatePurchaseHistory },
				{ "EYGS2DebugMenuCommand::ConsumeGold", (int64)EYGS2DebugMenuCommand::ConsumeGold },
				{ "EYGS2DebugMenuCommand::ConsumeGoldHistory", (int64)EYGS2DebugMenuCommand::ConsumeGoldHistory },
				{ "EYGS2DebugMenuCommand::CreateConsumeGold", (int64)EYGS2DebugMenuCommand::CreateConsumeGold },
				{ "EYGS2DebugMenuCommand::ConsumeItem", (int64)EYGS2DebugMenuCommand::ConsumeItem },
				{ "EYGS2DebugMenuCommand::ConsumeItemHistory", (int64)EYGS2DebugMenuCommand::ConsumeItemHistory },
				{ "EYGS2DebugMenuCommand::CreateConsumeItem", (int64)EYGS2DebugMenuCommand::CreateConsumeItem },
				{ "EYGS2DebugMenuCommand::GetBattlePassData", (int64)EYGS2DebugMenuCommand::GetBattlePassData },
				{ "EYGS2DebugMenuCommand::UpdateBattlePassData", (int64)EYGS2DebugMenuCommand::UpdateBattlePassData },
				{ "EYGS2DebugMenuCommand::SetUserStats", (int64)EYGS2DebugMenuCommand::SetUserStats },
				{ "EYGS2DebugMenuCommand::GetUserStats", (int64)EYGS2DebugMenuCommand::GetUserStats },
				{ "EYGS2DebugMenuCommand::GetShopItems", (int64)EYGS2DebugMenuCommand::GetShopItems },
				{ "EYGS2DebugMenuCommand::SetUserStats_SampleStruct", (int64)EYGS2DebugMenuCommand::SetUserStats_SampleStruct },
				{ "EYGS2DebugMenuCommand::GetUserStats_SampleStruct", (int64)EYGS2DebugMenuCommand::GetUserStats_SampleStruct },
				{ "EYGS2DebugMenuCommand::AddEvent", (int64)EYGS2DebugMenuCommand::AddEvent },
				{ "EYGS2DebugMenuCommand::DBG_SetPlayerData", (int64)EYGS2DebugMenuCommand::DBG_SetPlayerData },
				{ "EYGS2DebugMenuCommand::DBG_Reset", (int64)EYGS2DebugMenuCommand::DBG_Reset },
				{ "EYGS2DebugMenuCommand::SetSSPlayerData", (int64)EYGS2DebugMenuCommand::SetSSPlayerData },
				{ "EYGS2DebugMenuCommand::GetSSPlayerData", (int64)EYGS2DebugMenuCommand::GetSSPlayerData },
				{ "EYGS2DebugMenuCommand::Max", (int64)EYGS2DebugMenuCommand::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddEvent.Name", "EYGS2DebugMenuCommand::AddEvent" },
				{ "AppAuth.Name", "EYGS2DebugMenuCommand::AppAuth" },
				{ "BlueprintType", "true" },
				{ "ConsumeGold.Name", "EYGS2DebugMenuCommand::ConsumeGold" },
				{ "ConsumeGoldHistory.Name", "EYGS2DebugMenuCommand::ConsumeGoldHistory" },
				{ "ConsumeItem.Name", "EYGS2DebugMenuCommand::ConsumeItem" },
				{ "ConsumeItemHistory.Name", "EYGS2DebugMenuCommand::ConsumeItemHistory" },
				{ "CreateConsumeGold.Name", "EYGS2DebugMenuCommand::CreateConsumeGold" },
				{ "CreateConsumeItem.Name", "EYGS2DebugMenuCommand::CreateConsumeItem" },
				{ "CreatePurchaseHistory.Name", "EYGS2DebugMenuCommand::CreatePurchaseHistory" },
				{ "DBG_Reset.Name", "EYGS2DebugMenuCommand::DBG_Reset" },
				{ "DBG_SetPlayerData.Name", "EYGS2DebugMenuCommand::DBG_SetPlayerData" },
				{ "FindPurchaseHistory.Name", "EYGS2DebugMenuCommand::FindPurchaseHistory" },
				{ "GetBattlePassData.Name", "EYGS2DebugMenuCommand::GetBattlePassData" },
				{ "GetInfo.Name", "EYGS2DebugMenuCommand::GetInfo" },
				{ "GetPlayerData.Name", "EYGS2DebugMenuCommand::GetPlayerData" },
				{ "GetShopItems.Name", "EYGS2DebugMenuCommand::GetShopItems" },
				{ "GetSSPlayerData.Name", "EYGS2DebugMenuCommand::GetSSPlayerData" },
				{ "GetUserItems.Name", "EYGS2DebugMenuCommand::GetUserItems" },
				{ "GetUserStats.Name", "EYGS2DebugMenuCommand::GetUserStats" },
				{ "GetUserStats_SampleStruct.Name", "EYGS2DebugMenuCommand::GetUserStats_SampleStruct" },
				{ "Max.Name", "EYGS2DebugMenuCommand::Max" },
				{ "ModuleRelativePath", "Public/EYGS2DebugMenuCommand.h" },
				{ "None.Name", "EYGS2DebugMenuCommand::None" },
				{ "Ping.Name", "EYGS2DebugMenuCommand::Ping" },
				{ "PurchaseHistory.Name", "EYGS2DebugMenuCommand::PurchaseHistory" },
				{ "SetSSPlayerData.Name", "EYGS2DebugMenuCommand::SetSSPlayerData" },
				{ "SetUserStats.Name", "EYGS2DebugMenuCommand::SetUserStats" },
				{ "SetUserStats_SampleStruct.Name", "EYGS2DebugMenuCommand::SetUserStats_SampleStruct" },
				{ "UpdateBattlePassData.Name", "EYGS2DebugMenuCommand::UpdateBattlePassData" },
				{ "UserAuth.Name", "EYGS2DebugMenuCommand::UserAuth" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EYGS2DebugMenuCommand",
				"EYGS2DebugMenuCommand",
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
