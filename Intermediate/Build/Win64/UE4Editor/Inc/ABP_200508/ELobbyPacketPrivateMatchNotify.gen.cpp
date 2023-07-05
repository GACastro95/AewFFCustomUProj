// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELobbyPacketPrivateMatchNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELobbyPacketPrivateMatchNotify() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPacketPrivateMatchNotify();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ELobbyPacketPrivateMatchNotify_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ELobbyPacketPrivateMatchNotify, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELobbyPacketPrivateMatchNotify"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ELobbyPacketPrivateMatchNotify>()
	{
		return ELobbyPacketPrivateMatchNotify_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELobbyPacketPrivateMatchNotify(ELobbyPacketPrivateMatchNotify_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ELobbyPacketPrivateMatchNotify"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ELobbyPacketPrivateMatchNotify_Hash() { return 1697272591U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ELobbyPacketPrivateMatchNotify()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELobbyPacketPrivateMatchNotify"), 0, Get_Z_Construct_UEnum_ABP_200508_ELobbyPacketPrivateMatchNotify_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELobbyPacketPrivateMatchNotify::MatchCancel", (int64)ELobbyPacketPrivateMatchNotify::MatchCancel },
				{ "ELobbyPacketPrivateMatchNotify::MovePositionSelect", (int64)ELobbyPacketPrivateMatchNotify::MovePositionSelect },
				{ "ELobbyPacketPrivateMatchNotify::MoveWrestlerSelect", (int64)ELobbyPacketPrivateMatchNotify::MoveWrestlerSelect },
				{ "ELobbyPacketPrivateMatchNotify::MatchStart", (int64)ELobbyPacketPrivateMatchNotify::MatchStart },
				{ "ELobbyPacketPrivateMatchNotify::MatchStartCancel", (int64)ELobbyPacketPrivateMatchNotify::MatchStartCancel },
				{ "ELobbyPacketPrivateMatchNotify::MatchReady", (int64)ELobbyPacketPrivateMatchNotify::MatchReady },
				{ "ELobbyPacketPrivateMatchNotify::MatchUnready", (int64)ELobbyPacketPrivateMatchNotify::MatchUnready },
				{ "ELobbyPacketPrivateMatchNotify::MatchUnready_Accept", (int64)ELobbyPacketPrivateMatchNotify::MatchUnready_Accept },
				{ "ELobbyPacketPrivateMatchNotify::MatchUnready_Reject", (int64)ELobbyPacketPrivateMatchNotify::MatchUnready_Reject },
				{ "ELobbyPacketPrivateMatchNotify::MatchCancelRequest", (int64)ELobbyPacketPrivateMatchNotify::MatchCancelRequest },
				{ "ELobbyPacketPrivateMatchNotify::MoveMiniGameSelect", (int64)ELobbyPacketPrivateMatchNotify::MoveMiniGameSelect },
				{ "ELobbyPacketPrivateMatchNotify::MoveNextMenu", (int64)ELobbyPacketPrivateMatchNotify::MoveNextMenu },
				{ "ELobbyPacketPrivateMatchNotify::MiniGameStartOwnerSelect", (int64)ELobbyPacketPrivateMatchNotify::MiniGameStartOwnerSelect },
				{ "ELobbyPacketPrivateMatchNotify::MiniGameEndOwnerSelect", (int64)ELobbyPacketPrivateMatchNotify::MiniGameEndOwnerSelect },
				{ "ELobbyPacketPrivateMatchNotify::MiniGameWaitReceiveStatus", (int64)ELobbyPacketPrivateMatchNotify::MiniGameWaitReceiveStatus },
				{ "ELobbyPacketPrivateMatchNotify::MoveOnMainMenu", (int64)ELobbyPacketPrivateMatchNotify::MoveOnMainMenu },
				{ "ELobbyPacketPrivateMatchNotify::RequestResendCurrentWrestler", (int64)ELobbyPacketPrivateMatchNotify::RequestResendCurrentWrestler },
				{ "ELobbyPacketPrivateMatchNotify::Test", (int64)ELobbyPacketPrivateMatchNotify::Test },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MatchCancel.Name", "ELobbyPacketPrivateMatchNotify::MatchCancel" },
				{ "MatchCancelRequest.Name", "ELobbyPacketPrivateMatchNotify::MatchCancelRequest" },
				{ "MatchReady.Name", "ELobbyPacketPrivateMatchNotify::MatchReady" },
				{ "MatchStart.Name", "ELobbyPacketPrivateMatchNotify::MatchStart" },
				{ "MatchStartCancel.Name", "ELobbyPacketPrivateMatchNotify::MatchStartCancel" },
				{ "MatchUnready.Name", "ELobbyPacketPrivateMatchNotify::MatchUnready" },
				{ "MatchUnready_Accept.Name", "ELobbyPacketPrivateMatchNotify::MatchUnready_Accept" },
				{ "MatchUnready_Reject.Name", "ELobbyPacketPrivateMatchNotify::MatchUnready_Reject" },
				{ "MiniGameEndOwnerSelect.Name", "ELobbyPacketPrivateMatchNotify::MiniGameEndOwnerSelect" },
				{ "MiniGameStartOwnerSelect.Name", "ELobbyPacketPrivateMatchNotify::MiniGameStartOwnerSelect" },
				{ "MiniGameWaitReceiveStatus.Name", "ELobbyPacketPrivateMatchNotify::MiniGameWaitReceiveStatus" },
				{ "ModuleRelativePath", "Public/ELobbyPacketPrivateMatchNotify.h" },
				{ "MoveMiniGameSelect.Name", "ELobbyPacketPrivateMatchNotify::MoveMiniGameSelect" },
				{ "MoveNextMenu.Name", "ELobbyPacketPrivateMatchNotify::MoveNextMenu" },
				{ "MoveOnMainMenu.Name", "ELobbyPacketPrivateMatchNotify::MoveOnMainMenu" },
				{ "MovePositionSelect.Name", "ELobbyPacketPrivateMatchNotify::MovePositionSelect" },
				{ "MoveWrestlerSelect.Name", "ELobbyPacketPrivateMatchNotify::MoveWrestlerSelect" },
				{ "RequestResendCurrentWrestler.Name", "ELobbyPacketPrivateMatchNotify::RequestResendCurrentWrestler" },
				{ "Test.Name", "ELobbyPacketPrivateMatchNotify::Test" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ELobbyPacketPrivateMatchNotify",
				"ELobbyPacketPrivateMatchNotify",
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
