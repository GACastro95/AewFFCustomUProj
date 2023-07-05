// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAntiCheatAuthStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAntiCheatAuthStatus() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatAuthStatus();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAntiCheatAuthStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatAuthStatus, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAntiCheatAuthStatus"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAntiCheatAuthStatus>()
	{
		return EEOSAntiCheatAuthStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAntiCheatAuthStatus(EEOSAntiCheatAuthStatus_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAntiCheatAuthStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatAuthStatus_Hash() { return 3345973069U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatAuthStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAntiCheatAuthStatus"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatAuthStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAntiCheatAuthStatus::Invalid", (int64)EEOSAntiCheatAuthStatus::Invalid },
				{ "EEOSAntiCheatAuthStatus::LocalAuthComplete", (int64)EEOSAntiCheatAuthStatus::LocalAuthComplete },
				{ "EEOSAntiCheatAuthStatus::RemoteAuthComplete", (int64)EEOSAntiCheatAuthStatus::RemoteAuthComplete },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Invalid.Name", "EEOSAntiCheatAuthStatus::Invalid" },
				{ "LocalAuthComplete.Name", "EEOSAntiCheatAuthStatus::LocalAuthComplete" },
				{ "ModuleRelativePath", "Public/EEOSAntiCheatAuthStatus.h" },
				{ "RemoteAuthComplete.Name", "EEOSAntiCheatAuthStatus::RemoteAuthComplete" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAntiCheatAuthStatus",
				"EEOSAntiCheatAuthStatus",
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
