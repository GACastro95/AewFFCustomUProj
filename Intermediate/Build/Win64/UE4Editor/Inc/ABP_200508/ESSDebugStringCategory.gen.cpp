// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSDebugStringCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSDebugStringCategory() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDebugStringCategory();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSDebugStringCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSDebugStringCategory, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSDebugStringCategory"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSDebugStringCategory>()
	{
		return ESSDebugStringCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSDebugStringCategory(ESSDebugStringCategory_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSDebugStringCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSDebugStringCategory_Hash() { return 271927066U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSDebugStringCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSDebugStringCategory"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSDebugStringCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSDebugStringCategory::Default", (int64)ESSDebugStringCategory::Default },
				{ "ESSDebugStringCategory::OneFrame", (int64)ESSDebugStringCategory::OneFrame },
				{ "ESSDebugStringCategory::ThreeSeconds", (int64)ESSDebugStringCategory::ThreeSeconds },
				{ "ESSDebugStringCategory::GameSession", (int64)ESSDebugStringCategory::GameSession },
				{ "ESSDebugStringCategory::Version", (int64)ESSDebugStringCategory::Version },
				{ "ESSDebugStringCategory::API", (int64)ESSDebugStringCategory::API },
				{ "ESSDebugStringCategory::NetworkError", (int64)ESSDebugStringCategory::NetworkError },
				{ "ESSDebugStringCategory::UniqueError", (int64)ESSDebugStringCategory::UniqueError },
				{ "ESSDebugStringCategory::DiffPlayerData", (int64)ESSDebugStringCategory::DiffPlayerData },
				{ "ESSDebugStringCategory::DebugStatus", (int64)ESSDebugStringCategory::DebugStatus },
				{ "ESSDebugStringCategory::RTT", (int64)ESSDebugStringCategory::RTT },
				{ "ESSDebugStringCategory::ActionStatePlayer", (int64)ESSDebugStringCategory::ActionStatePlayer },
				{ "ESSDebugStringCategory::RoundInfo", (int64)ESSDebugStringCategory::RoundInfo },
				{ "ESSDebugStringCategory::MapAreaInfo", (int64)ESSDebugStringCategory::MapAreaInfo },
				{ "ESSDebugStringCategory::GameFlow", (int64)ESSDebugStringCategory::GameFlow },
				{ "ESSDebugStringCategory::ClientFlow", (int64)ESSDebugStringCategory::ClientFlow },
				{ "ESSDebugStringCategory::LobbyState", (int64)ESSDebugStringCategory::LobbyState },
				{ "ESSDebugStringCategory::OnRepLog_ElapsedTime", (int64)ESSDebugStringCategory::OnRepLog_ElapsedTime },
				{ "ESSDebugStringCategory::RPCTest", (int64)ESSDebugStringCategory::RPCTest },
				{ "ESSDebugStringCategory::Result", (int64)ESSDebugStringCategory::Result },
				{ "ESSDebugStringCategory::NotifyDebugCommand", (int64)ESSDebugStringCategory::NotifyDebugCommand },
				{ "ESSDebugStringCategory::MatchMake", (int64)ESSDebugStringCategory::MatchMake },
				{ "ESSDebugStringCategory::MatchMakeRegion", (int64)ESSDebugStringCategory::MatchMakeRegion },
				{ "ESSDebugStringCategory::DataLoading", (int64)ESSDebugStringCategory::DataLoading },
				{ "ESSDebugStringCategory::SSMainMenu", (int64)ESSDebugStringCategory::SSMainMenu },
				{ "ESSDebugStringCategory::Tips", (int64)ESSDebugStringCategory::Tips },
				{ "ESSDebugStringCategory::TitleStorage", (int64)ESSDebugStringCategory::TitleStorage },
				{ "ESSDebugStringCategory::Max", (int64)ESSDebugStringCategory::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionStatePlayer.Name", "ESSDebugStringCategory::ActionStatePlayer" },
				{ "API.Name", "ESSDebugStringCategory::API" },
				{ "BlueprintType", "true" },
				{ "ClientFlow.Name", "ESSDebugStringCategory::ClientFlow" },
				{ "DataLoading.Name", "ESSDebugStringCategory::DataLoading" },
				{ "DebugStatus.Name", "ESSDebugStringCategory::DebugStatus" },
				{ "Default.Name", "ESSDebugStringCategory::Default" },
				{ "DiffPlayerData.Name", "ESSDebugStringCategory::DiffPlayerData" },
				{ "GameFlow.Name", "ESSDebugStringCategory::GameFlow" },
				{ "GameSession.Name", "ESSDebugStringCategory::GameSession" },
				{ "LobbyState.Name", "ESSDebugStringCategory::LobbyState" },
				{ "MapAreaInfo.Name", "ESSDebugStringCategory::MapAreaInfo" },
				{ "MatchMake.Name", "ESSDebugStringCategory::MatchMake" },
				{ "MatchMakeRegion.Name", "ESSDebugStringCategory::MatchMakeRegion" },
				{ "Max.Name", "ESSDebugStringCategory::Max" },
				{ "ModuleRelativePath", "Public/ESSDebugStringCategory.h" },
				{ "NetworkError.Name", "ESSDebugStringCategory::NetworkError" },
				{ "NotifyDebugCommand.Name", "ESSDebugStringCategory::NotifyDebugCommand" },
				{ "OneFrame.Name", "ESSDebugStringCategory::OneFrame" },
				{ "OnRepLog_ElapsedTime.Name", "ESSDebugStringCategory::OnRepLog_ElapsedTime" },
				{ "Result.Name", "ESSDebugStringCategory::Result" },
				{ "RoundInfo.Name", "ESSDebugStringCategory::RoundInfo" },
				{ "RPCTest.Name", "ESSDebugStringCategory::RPCTest" },
				{ "RTT.Name", "ESSDebugStringCategory::RTT" },
				{ "SSMainMenu.Name", "ESSDebugStringCategory::SSMainMenu" },
				{ "ThreeSeconds.Name", "ESSDebugStringCategory::ThreeSeconds" },
				{ "Tips.Name", "ESSDebugStringCategory::Tips" },
				{ "TitleStorage.Name", "ESSDebugStringCategory::TitleStorage" },
				{ "UniqueError.Name", "ESSDebugStringCategory::UniqueError" },
				{ "Version.Name", "ESSDebugStringCategory::Version" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSDebugStringCategory",
				"ESSDebugStringCategory",
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
