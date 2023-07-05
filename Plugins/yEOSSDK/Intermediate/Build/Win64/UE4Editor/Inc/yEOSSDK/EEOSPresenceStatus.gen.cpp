// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSPresenceStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSPresenceStatus() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSPresenceStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSPresenceStatus"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSPresenceStatus>()
	{
		return EEOSPresenceStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSPresenceStatus(EEOSPresenceStatus_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSPresenceStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus_Hash() { return 2139873613U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSPresenceStatus"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSPresenceStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSPresenceStatus::Offline", (int64)EEOSPresenceStatus::Offline },
				{ "EEOSPresenceStatus::Online", (int64)EEOSPresenceStatus::Online },
				{ "EEOSPresenceStatus::Away", (int64)EEOSPresenceStatus::Away },
				{ "EEOSPresenceStatus::ExtendedAway", (int64)EEOSPresenceStatus::ExtendedAway },
				{ "EEOSPresenceStatus::DoNotDisturb", (int64)EEOSPresenceStatus::DoNotDisturb },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Away.Name", "EEOSPresenceStatus::Away" },
				{ "BlueprintType", "true" },
				{ "DoNotDisturb.Name", "EEOSPresenceStatus::DoNotDisturb" },
				{ "ExtendedAway.Name", "EEOSPresenceStatus::ExtendedAway" },
				{ "ModuleRelativePath", "Public/EEOSPresenceStatus.h" },
				{ "Offline.Name", "EEOSPresenceStatus::Offline" },
				{ "Online.Name", "EEOSPresenceStatus::Online" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSPresenceStatus",
				"EEOSPresenceStatus",
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
