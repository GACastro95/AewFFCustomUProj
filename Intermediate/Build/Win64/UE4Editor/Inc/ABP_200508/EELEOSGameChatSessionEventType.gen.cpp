// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELEOSGameChatSessionEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEOSGameChatSessionEventType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSGameChatSessionEventType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELEOSGameChatSessionEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELEOSGameChatSessionEventType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELEOSGameChatSessionEventType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELEOSGameChatSessionEventType>()
	{
		return EELEOSGameChatSessionEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEOSGameChatSessionEventType(EELEOSGameChatSessionEventType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELEOSGameChatSessionEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELEOSGameChatSessionEventType_Hash() { return 1169312319U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELEOSGameChatSessionEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEOSGameChatSessionEventType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELEOSGameChatSessionEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEOSGameChatSessionEventType::VoiceChatEnabled", (int64)EELEOSGameChatSessionEventType::VoiceChatEnabled },
				{ "EELEOSGameChatSessionEventType::VoiceChatDisabled", (int64)EELEOSGameChatSessionEventType::VoiceChatDisabled },
				{ "EELEOSGameChatSessionEventType::VoiceChatUnsupported", (int64)EELEOSGameChatSessionEventType::VoiceChatUnsupported },
				{ "EELEOSGameChatSessionEventType::Mute", (int64)EELEOSGameChatSessionEventType::Mute },
				{ "EELEOSGameChatSessionEventType::Unmute", (int64)EELEOSGameChatSessionEventType::Unmute },
				{ "EELEOSGameChatSessionEventType::StartSpeaking", (int64)EELEOSGameChatSessionEventType::StartSpeaking },
				{ "EELEOSGameChatSessionEventType::StopSpeaking", (int64)EELEOSGameChatSessionEventType::StopSpeaking },
				{ "EELEOSGameChatSessionEventType::Block", (int64)EELEOSGameChatSessionEventType::Block },
				{ "EELEOSGameChatSessionEventType::Unblock", (int64)EELEOSGameChatSessionEventType::Unblock },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Block.Name", "EELEOSGameChatSessionEventType::Block" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EELEOSGameChatSessionEventType.h" },
				{ "Mute.Name", "EELEOSGameChatSessionEventType::Mute" },
				{ "StartSpeaking.Name", "EELEOSGameChatSessionEventType::StartSpeaking" },
				{ "StopSpeaking.Name", "EELEOSGameChatSessionEventType::StopSpeaking" },
				{ "Unblock.Name", "EELEOSGameChatSessionEventType::Unblock" },
				{ "Unmute.Name", "EELEOSGameChatSessionEventType::Unmute" },
				{ "VoiceChatDisabled.Name", "EELEOSGameChatSessionEventType::VoiceChatDisabled" },
				{ "VoiceChatEnabled.Name", "EELEOSGameChatSessionEventType::VoiceChatEnabled" },
				{ "VoiceChatUnsupported.Name", "EELEOSGameChatSessionEventType::VoiceChatUnsupported" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELEOSGameChatSessionEventType",
				"EELEOSGameChatSessionEventType",
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
