// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELEOSLobbyPacketType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEOSLobbyPacketType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELEOSLobbyPacketType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELEOSLobbyPacketType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELEOSLobbyPacketType>()
	{
		return EELEOSLobbyPacketType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEOSLobbyPacketType(EELEOSLobbyPacketType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELEOSLobbyPacketType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketType_Hash() { return 3768889327U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEOSLobbyPacketType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELEOSLobbyPacketType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEOSLobbyPacketType::Chat", (int64)EELEOSLobbyPacketType::Chat },
				{ "EELEOSLobbyPacketType::PrivateMatchNotify", (int64)EELEOSLobbyPacketType::PrivateMatchNotify },
				{ "EELEOSLobbyPacketType::InvitePrivateMatchRequest", (int64)EELEOSLobbyPacketType::InvitePrivateMatchRequest },
				{ "EELEOSLobbyPacketType::InvitePrivateMatchResponse", (int64)EELEOSLobbyPacketType::InvitePrivateMatchResponse },
				{ "EELEOSLobbyPacketType::PrivateMatchPlayerIndex", (int64)EELEOSLobbyPacketType::PrivateMatchPlayerIndex },
				{ "EELEOSLobbyPacketType::PrivateMatchMenuInput", (int64)EELEOSLobbyPacketType::PrivateMatchMenuInput },
				{ "EELEOSLobbyPacketType::PrivateMatchMenuInputSync", (int64)EELEOSLobbyPacketType::PrivateMatchMenuInputSync },
				{ "EELEOSLobbyPacketType::PositionSelectInput", (int64)EELEOSLobbyPacketType::PositionSelectInput },
				{ "EELEOSLobbyPacketType::PositionSelectInputResult", (int64)EELEOSLobbyPacketType::PositionSelectInputResult },
				{ "EELEOSLobbyPacketType::WrestlerData", (int64)EELEOSLobbyPacketType::WrestlerData },
				{ "EELEOSLobbyPacketType::MatchupWrestlerData0", (int64)EELEOSLobbyPacketType::MatchupWrestlerData0 },
				{ "EELEOSLobbyPacketType::MatchupWrestlerData1", (int64)EELEOSLobbyPacketType::MatchupWrestlerData1 },
				{ "EELEOSLobbyPacketType::MatchupWrestlerData2", (int64)EELEOSLobbyPacketType::MatchupWrestlerData2 },
				{ "EELEOSLobbyPacketType::MatchupWrestlerData3", (int64)EELEOSLobbyPacketType::MatchupWrestlerData3 },
				{ "EELEOSLobbyPacketType::MatchupWrestlerData4", (int64)EELEOSLobbyPacketType::MatchupWrestlerData4 },
				{ "EELEOSLobbyPacketType::MatchupWrestlerData5", (int64)EELEOSLobbyPacketType::MatchupWrestlerData5 },
				{ "EELEOSLobbyPacketType::MatchupWrestlerData6", (int64)EELEOSLobbyPacketType::MatchupWrestlerData6 },
				{ "EELEOSLobbyPacketType::MatchupWrestlerData7", (int64)EELEOSLobbyPacketType::MatchupWrestlerData7 },
				{ "EELEOSLobbyPacketType::SelectNPCWrestlerData", (int64)EELEOSLobbyPacketType::SelectNPCWrestlerData },
				{ "EELEOSLobbyPacketType::NPCWrestlerData", (int64)EELEOSLobbyPacketType::NPCWrestlerData },
				{ "EELEOSLobbyPacketType::SelectArenaData", (int64)EELEOSLobbyPacketType::SelectArenaData },
				{ "EELEOSLobbyPacketType::SelectMinigameData", (int64)EELEOSLobbyPacketType::SelectMinigameData },
				{ "EELEOSLobbyPacketType::MiniGameInfo", (int64)EELEOSLobbyPacketType::MiniGameInfo },
				{ "EELEOSLobbyPacketType::MiniGameSteps", (int64)EELEOSLobbyPacketType::MiniGameSteps },
				{ "EELEOSLobbyPacketType::MiniGameOwnerSelectInfo", (int64)EELEOSLobbyPacketType::MiniGameOwnerSelectInfo },
				{ "EELEOSLobbyPacketType::Request", (int64)EELEOSLobbyPacketType::Request },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Chat.Name", "EELEOSLobbyPacketType::Chat" },
				{ "InvitePrivateMatchRequest.Name", "EELEOSLobbyPacketType::InvitePrivateMatchRequest" },
				{ "InvitePrivateMatchResponse.Name", "EELEOSLobbyPacketType::InvitePrivateMatchResponse" },
				{ "MatchupWrestlerData0.Name", "EELEOSLobbyPacketType::MatchupWrestlerData0" },
				{ "MatchupWrestlerData1.Name", "EELEOSLobbyPacketType::MatchupWrestlerData1" },
				{ "MatchupWrestlerData2.Name", "EELEOSLobbyPacketType::MatchupWrestlerData2" },
				{ "MatchupWrestlerData3.Name", "EELEOSLobbyPacketType::MatchupWrestlerData3" },
				{ "MatchupWrestlerData4.Name", "EELEOSLobbyPacketType::MatchupWrestlerData4" },
				{ "MatchupWrestlerData5.Name", "EELEOSLobbyPacketType::MatchupWrestlerData5" },
				{ "MatchupWrestlerData6.Name", "EELEOSLobbyPacketType::MatchupWrestlerData6" },
				{ "MatchupWrestlerData7.Name", "EELEOSLobbyPacketType::MatchupWrestlerData7" },
				{ "MiniGameInfo.Name", "EELEOSLobbyPacketType::MiniGameInfo" },
				{ "MiniGameOwnerSelectInfo.Name", "EELEOSLobbyPacketType::MiniGameOwnerSelectInfo" },
				{ "MiniGameSteps.Name", "EELEOSLobbyPacketType::MiniGameSteps" },
				{ "ModuleRelativePath", "Public/EELEOSLobbyPacketType.h" },
				{ "NPCWrestlerData.Name", "EELEOSLobbyPacketType::NPCWrestlerData" },
				{ "PositionSelectInput.Name", "EELEOSLobbyPacketType::PositionSelectInput" },
				{ "PositionSelectInputResult.Name", "EELEOSLobbyPacketType::PositionSelectInputResult" },
				{ "PrivateMatchMenuInput.Name", "EELEOSLobbyPacketType::PrivateMatchMenuInput" },
				{ "PrivateMatchMenuInputSync.Name", "EELEOSLobbyPacketType::PrivateMatchMenuInputSync" },
				{ "PrivateMatchNotify.Name", "EELEOSLobbyPacketType::PrivateMatchNotify" },
				{ "PrivateMatchPlayerIndex.Name", "EELEOSLobbyPacketType::PrivateMatchPlayerIndex" },
				{ "Request.Name", "EELEOSLobbyPacketType::Request" },
				{ "SelectArenaData.Name", "EELEOSLobbyPacketType::SelectArenaData" },
				{ "SelectMinigameData.Name", "EELEOSLobbyPacketType::SelectMinigameData" },
				{ "SelectNPCWrestlerData.Name", "EELEOSLobbyPacketType::SelectNPCWrestlerData" },
				{ "WrestlerData.Name", "EELEOSLobbyPacketType::WrestlerData" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELEOSLobbyPacketType",
				"EELEOSLobbyPacketType",
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
