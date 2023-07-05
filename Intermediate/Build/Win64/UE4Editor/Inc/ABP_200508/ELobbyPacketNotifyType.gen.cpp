// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELobbyPacketNotifyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELobbyPacketNotifyType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPacketNotifyType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ELobbyPacketNotifyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ELobbyPacketNotifyType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELobbyPacketNotifyType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ELobbyPacketNotifyType>()
	{
		return ELobbyPacketNotifyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELobbyPacketNotifyType(ELobbyPacketNotifyType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ELobbyPacketNotifyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ELobbyPacketNotifyType_Hash() { return 1448722682U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPacketNotifyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELobbyPacketNotifyType"), 0, Get_Z_Construct_UEnum_ABP_200508_ELobbyPacketNotifyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELobbyPacketNotifyType::MatchCancel", (int64)ELobbyPacketNotifyType::MatchCancel },
				{ "ELobbyPacketNotifyType::MovePositionSelect", (int64)ELobbyPacketNotifyType::MovePositionSelect },
				{ "ELobbyPacketNotifyType::MoveWrestlerSelect", (int64)ELobbyPacketNotifyType::MoveWrestlerSelect },
				{ "ELobbyPacketNotifyType::MatchStart", (int64)ELobbyPacketNotifyType::MatchStart },
				{ "ELobbyPacketNotifyType::MatchStartCancel", (int64)ELobbyPacketNotifyType::MatchStartCancel },
				{ "ELobbyPacketNotifyType::MatchReady", (int64)ELobbyPacketNotifyType::MatchReady },
				{ "ELobbyPacketNotifyType::MatchUnready", (int64)ELobbyPacketNotifyType::MatchUnready },
				{ "ELobbyPacketNotifyType::MatchUnready_Accept", (int64)ELobbyPacketNotifyType::MatchUnready_Accept },
				{ "ELobbyPacketNotifyType::MatchUnready_Reject", (int64)ELobbyPacketNotifyType::MatchUnready_Reject },
				{ "ELobbyPacketNotifyType::MatchCancelRequest", (int64)ELobbyPacketNotifyType::MatchCancelRequest },
				{ "ELobbyPacketNotifyType::MatchLeave", (int64)ELobbyPacketNotifyType::MatchLeave },
				{ "ELobbyPacketNotifyType::MoveMiniGameSelect", (int64)ELobbyPacketNotifyType::MoveMiniGameSelect },
				{ "ELobbyPacketNotifyType::MoveNextMenu", (int64)ELobbyPacketNotifyType::MoveNextMenu },
				{ "ELobbyPacketNotifyType::MiniGameStartOwnerSelect", (int64)ELobbyPacketNotifyType::MiniGameStartOwnerSelect },
				{ "ELobbyPacketNotifyType::MiniGameEndOwnerSelect", (int64)ELobbyPacketNotifyType::MiniGameEndOwnerSelect },
				{ "ELobbyPacketNotifyType::MiniGameWaitReceiveStatus", (int64)ELobbyPacketNotifyType::MiniGameWaitReceiveStatus },
				{ "ELobbyPacketNotifyType::MoveOnMainMenu", (int64)ELobbyPacketNotifyType::MoveOnMainMenu },
				{ "ELobbyPacketNotifyType::RequestResendCurrentWrestler", (int64)ELobbyPacketNotifyType::RequestResendCurrentWrestler },
				{ "ELobbyPacketNotifyType::Test", (int64)ELobbyPacketNotifyType::Test },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MatchCancel.Name", "ELobbyPacketNotifyType::MatchCancel" },
				{ "MatchCancelRequest.Name", "ELobbyPacketNotifyType::MatchCancelRequest" },
				{ "MatchLeave.Name", "ELobbyPacketNotifyType::MatchLeave" },
				{ "MatchReady.Name", "ELobbyPacketNotifyType::MatchReady" },
				{ "MatchStart.Name", "ELobbyPacketNotifyType::MatchStart" },
				{ "MatchStartCancel.Name", "ELobbyPacketNotifyType::MatchStartCancel" },
				{ "MatchUnready.Name", "ELobbyPacketNotifyType::MatchUnready" },
				{ "MatchUnready_Accept.Name", "ELobbyPacketNotifyType::MatchUnready_Accept" },
				{ "MatchUnready_Reject.Name", "ELobbyPacketNotifyType::MatchUnready_Reject" },
				{ "MiniGameEndOwnerSelect.Name", "ELobbyPacketNotifyType::MiniGameEndOwnerSelect" },
				{ "MiniGameStartOwnerSelect.Name", "ELobbyPacketNotifyType::MiniGameStartOwnerSelect" },
				{ "MiniGameWaitReceiveStatus.Name", "ELobbyPacketNotifyType::MiniGameWaitReceiveStatus" },
				{ "ModuleRelativePath", "Public/ELobbyPacketNotifyType.h" },
				{ "MoveMiniGameSelect.Name", "ELobbyPacketNotifyType::MoveMiniGameSelect" },
				{ "MoveNextMenu.Name", "ELobbyPacketNotifyType::MoveNextMenu" },
				{ "MoveOnMainMenu.Name", "ELobbyPacketNotifyType::MoveOnMainMenu" },
				{ "MovePositionSelect.Name", "ELobbyPacketNotifyType::MovePositionSelect" },
				{ "MoveWrestlerSelect.Name", "ELobbyPacketNotifyType::MoveWrestlerSelect" },
				{ "RequestResendCurrentWrestler.Name", "ELobbyPacketNotifyType::RequestResendCurrentWrestler" },
				{ "Test.Name", "ELobbyPacketNotifyType::Test" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ELobbyPacketNotifyType",
				"ELobbyPacketNotifyType",
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
