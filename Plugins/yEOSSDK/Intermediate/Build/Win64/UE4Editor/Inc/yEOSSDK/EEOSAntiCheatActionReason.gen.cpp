// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAntiCheatActionReason.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAntiCheatActionReason() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatActionReason();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAntiCheatActionReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatActionReason, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAntiCheatActionReason"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAntiCheatActionReason>()
	{
		return EEOSAntiCheatActionReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAntiCheatActionReason(EEOSAntiCheatActionReason_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAntiCheatActionReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatActionReason_Hash() { return 2730453238U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatActionReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAntiCheatActionReason"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatActionReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAntiCheatActionReason::Invalid", (int64)EEOSAntiCheatActionReason::Invalid },
				{ "EEOSAntiCheatActionReason::InternalError", (int64)EEOSAntiCheatActionReason::InternalError },
				{ "EEOSAntiCheatActionReason::InvalidMessage", (int64)EEOSAntiCheatActionReason::InvalidMessage },
				{ "EEOSAntiCheatActionReason::AuthenticationFailed", (int64)EEOSAntiCheatActionReason::AuthenticationFailed },
				{ "EEOSAntiCheatActionReason::NullClient", (int64)EEOSAntiCheatActionReason::NullClient },
				{ "EEOSAntiCheatActionReason::HeartbeatTimeout", (int64)EEOSAntiCheatActionReason::HeartbeatTimeout },
				{ "EEOSAntiCheatActionReason::ClientViolation", (int64)EEOSAntiCheatActionReason::ClientViolation },
				{ "EEOSAntiCheatActionReason::BackendViolation", (int64)EEOSAntiCheatActionReason::BackendViolation },
				{ "EEOSAntiCheatActionReason::TemporaryCooldown", (int64)EEOSAntiCheatActionReason::TemporaryCooldown },
				{ "EEOSAntiCheatActionReason::TemporaryBanned", (int64)EEOSAntiCheatActionReason::TemporaryBanned },
				{ "EEOSAntiCheatActionReason::PermanentBanned", (int64)EEOSAntiCheatActionReason::PermanentBanned },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AuthenticationFailed.Name", "EEOSAntiCheatActionReason::AuthenticationFailed" },
				{ "BackendViolation.Name", "EEOSAntiCheatActionReason::BackendViolation" },
				{ "BlueprintType", "true" },
				{ "ClientViolation.Name", "EEOSAntiCheatActionReason::ClientViolation" },
				{ "HeartbeatTimeout.Name", "EEOSAntiCheatActionReason::HeartbeatTimeout" },
				{ "InternalError.Name", "EEOSAntiCheatActionReason::InternalError" },
				{ "Invalid.Name", "EEOSAntiCheatActionReason::Invalid" },
				{ "InvalidMessage.Name", "EEOSAntiCheatActionReason::InvalidMessage" },
				{ "ModuleRelativePath", "Public/EEOSAntiCheatActionReason.h" },
				{ "NullClient.Name", "EEOSAntiCheatActionReason::NullClient" },
				{ "PermanentBanned.Name", "EEOSAntiCheatActionReason::PermanentBanned" },
				{ "TemporaryBanned.Name", "EEOSAntiCheatActionReason::TemporaryBanned" },
				{ "TemporaryCooldown.Name", "EEOSAntiCheatActionReason::TemporaryCooldown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAntiCheatActionReason",
				"EEOSAntiCheatActionReason",
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
