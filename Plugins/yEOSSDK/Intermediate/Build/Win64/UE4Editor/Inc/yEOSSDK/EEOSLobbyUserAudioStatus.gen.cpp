// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSLobbyUserAudioStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSLobbyUserAudioStatus() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSLobbyUserAudioStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSLobbyUserAudioStatus"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSLobbyUserAudioStatus>()
	{
		return EEOSLobbyUserAudioStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSLobbyUserAudioStatus(EEOSLobbyUserAudioStatus_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSLobbyUserAudioStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus_Hash() { return 704824452U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSLobbyUserAudioStatus"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserAudioStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSLobbyUserAudioStatus::Unsupported", (int64)EEOSLobbyUserAudioStatus::Unsupported },
				{ "EEOSLobbyUserAudioStatus::Enabled", (int64)EEOSLobbyUserAudioStatus::Enabled },
				{ "EEOSLobbyUserAudioStatus::Disabled", (int64)EEOSLobbyUserAudioStatus::Disabled },
				{ "EEOSLobbyUserAudioStatus::AdminDisabled", (int64)EEOSLobbyUserAudioStatus::AdminDisabled },
				{ "EEOSLobbyUserAudioStatus::NotListeningDisabled", (int64)EEOSLobbyUserAudioStatus::NotListeningDisabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AdminDisabled.Name", "EEOSLobbyUserAudioStatus::AdminDisabled" },
				{ "BlueprintType", "true" },
				{ "Disabled.Name", "EEOSLobbyUserAudioStatus::Disabled" },
				{ "Enabled.Name", "EEOSLobbyUserAudioStatus::Enabled" },
				{ "ModuleRelativePath", "Public/EEOSLobbyUserAudioStatus.h" },
				{ "NotListeningDisabled.Name", "EEOSLobbyUserAudioStatus::NotListeningDisabled" },
				{ "Unsupported.Name", "EEOSLobbyUserAudioStatus::Unsupported" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSLobbyUserAudioStatus",
				"EEOSLobbyUserAudioStatus",
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
