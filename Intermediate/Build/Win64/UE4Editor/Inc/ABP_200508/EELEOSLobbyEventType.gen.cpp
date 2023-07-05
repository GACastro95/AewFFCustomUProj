// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELEOSLobbyEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEOSLobbyEventType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyEventType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELEOSLobbyEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELEOSLobbyEventType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELEOSLobbyEventType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELEOSLobbyEventType>()
	{
		return EELEOSLobbyEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEOSLobbyEventType(EELEOSLobbyEventType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELEOSLobbyEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELEOSLobbyEventType_Hash() { return 4053726377U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELEOSLobbyEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEOSLobbyEventType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELEOSLobbyEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEOSLobbyEventType::Created", (int64)EELEOSLobbyEventType::Created },
				{ "EELEOSLobbyEventType::Destroyed", (int64)EELEOSLobbyEventType::Destroyed },
				{ "EELEOSLobbyEventType::Joined", (int64)EELEOSLobbyEventType::Joined },
				{ "EELEOSLobbyEventType::Leaved", (int64)EELEOSLobbyEventType::Leaved },
				{ "EELEOSLobbyEventType::KickedMe", (int64)EELEOSLobbyEventType::KickedMe },
				{ "EELEOSLobbyEventType::KickedOther", (int64)EELEOSLobbyEventType::KickedOther },
				{ "EELEOSLobbyEventType::ChangeOwner", (int64)EELEOSLobbyEventType::ChangeOwner },
				{ "EELEOSLobbyEventType::MemberUpdated", (int64)EELEOSLobbyEventType::MemberUpdated },
				{ "EELEOSLobbyEventType::MemberUpdatedJoin", (int64)EELEOSLobbyEventType::MemberUpdatedJoin },
				{ "EELEOSLobbyEventType::MemberUpdatedLeft", (int64)EELEOSLobbyEventType::MemberUpdatedLeft },
				{ "EELEOSLobbyEventType::InviteReceived", (int64)EELEOSLobbyEventType::InviteReceived },
				{ "EELEOSLobbyEventType::InviteReject", (int64)EELEOSLobbyEventType::InviteReject },
				{ "EELEOSLobbyEventType::QueryInviteResponse", (int64)EELEOSLobbyEventType::QueryInviteResponse },
				{ "EELEOSLobbyEventType::OnPromotedMe", (int64)EELEOSLobbyEventType::OnPromotedMe },
				{ "EELEOSLobbyEventType::WrestlerDataReceived", (int64)EELEOSLobbyEventType::WrestlerDataReceived },
				{ "EELEOSLobbyEventType::VoiceChatEnabled", (int64)EELEOSLobbyEventType::VoiceChatEnabled },
				{ "EELEOSLobbyEventType::VoiceChatDisabled", (int64)EELEOSLobbyEventType::VoiceChatDisabled },
				{ "EELEOSLobbyEventType::VoiceChatUnsupported", (int64)EELEOSLobbyEventType::VoiceChatUnsupported },
				{ "EELEOSLobbyEventType::Mute", (int64)EELEOSLobbyEventType::Mute },
				{ "EELEOSLobbyEventType::Unmute", (int64)EELEOSLobbyEventType::Unmute },
				{ "EELEOSLobbyEventType::StartSpeaking", (int64)EELEOSLobbyEventType::StartSpeaking },
				{ "EELEOSLobbyEventType::StopSpeaking", (int64)EELEOSLobbyEventType::StopSpeaking },
				{ "EELEOSLobbyEventType::Block", (int64)EELEOSLobbyEventType::Block },
				{ "EELEOSLobbyEventType::Unblock", (int64)EELEOSLobbyEventType::Unblock },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Block.Name", "EELEOSLobbyEventType::Block" },
				{ "BlueprintType", "true" },
				{ "ChangeOwner.Name", "EELEOSLobbyEventType::ChangeOwner" },
				{ "Created.Name", "EELEOSLobbyEventType::Created" },
				{ "Destroyed.Name", "EELEOSLobbyEventType::Destroyed" },
				{ "InviteReceived.Name", "EELEOSLobbyEventType::InviteReceived" },
				{ "InviteReject.Name", "EELEOSLobbyEventType::InviteReject" },
				{ "Joined.Name", "EELEOSLobbyEventType::Joined" },
				{ "KickedMe.Name", "EELEOSLobbyEventType::KickedMe" },
				{ "KickedOther.Name", "EELEOSLobbyEventType::KickedOther" },
				{ "Leaved.Name", "EELEOSLobbyEventType::Leaved" },
				{ "MemberUpdated.Name", "EELEOSLobbyEventType::MemberUpdated" },
				{ "MemberUpdatedJoin.Name", "EELEOSLobbyEventType::MemberUpdatedJoin" },
				{ "MemberUpdatedLeft.Name", "EELEOSLobbyEventType::MemberUpdatedLeft" },
				{ "ModuleRelativePath", "Public/EELEOSLobbyEventType.h" },
				{ "Mute.Name", "EELEOSLobbyEventType::Mute" },
				{ "OnPromotedMe.Name", "EELEOSLobbyEventType::OnPromotedMe" },
				{ "QueryInviteResponse.Name", "EELEOSLobbyEventType::QueryInviteResponse" },
				{ "StartSpeaking.Name", "EELEOSLobbyEventType::StartSpeaking" },
				{ "StopSpeaking.Name", "EELEOSLobbyEventType::StopSpeaking" },
				{ "Unblock.Name", "EELEOSLobbyEventType::Unblock" },
				{ "Unmute.Name", "EELEOSLobbyEventType::Unmute" },
				{ "VoiceChatDisabled.Name", "EELEOSLobbyEventType::VoiceChatDisabled" },
				{ "VoiceChatEnabled.Name", "EELEOSLobbyEventType::VoiceChatEnabled" },
				{ "VoiceChatUnsupported.Name", "EELEOSLobbyEventType::VoiceChatUnsupported" },
				{ "WrestlerDataReceived.Name", "EELEOSLobbyEventType::WrestlerDataReceived" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELEOSLobbyEventType",
				"EELEOSLobbyEventType",
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
