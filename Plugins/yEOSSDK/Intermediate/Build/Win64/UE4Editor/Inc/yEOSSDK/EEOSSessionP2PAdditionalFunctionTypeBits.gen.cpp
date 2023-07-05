// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSSessionP2PAdditionalFunctionTypeBits.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSSessionP2PAdditionalFunctionTypeBits() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAdditionalFunctionTypeBits();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSSessionP2PAdditionalFunctionTypeBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAdditionalFunctionTypeBits, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSSessionP2PAdditionalFunctionTypeBits"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionP2PAdditionalFunctionTypeBits>()
	{
		return EEOSSessionP2PAdditionalFunctionTypeBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSSessionP2PAdditionalFunctionTypeBits(EEOSSessionP2PAdditionalFunctionTypeBits_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSSessionP2PAdditionalFunctionTypeBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAdditionalFunctionTypeBits_Hash() { return 2281464863U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAdditionalFunctionTypeBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSSessionP2PAdditionalFunctionTypeBits"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAdditionalFunctionTypeBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSSessionP2PAdditionalFunctionTypeBits::None", (int64)EEOSSessionP2PAdditionalFunctionTypeBits::None },
				{ "EEOSSessionP2PAdditionalFunctionTypeBits::DataSharing", (int64)EEOSSessionP2PAdditionalFunctionTypeBits::DataSharing },
				{ "EEOSSessionP2PAdditionalFunctionTypeBits::BindPlayers", (int64)EEOSSessionP2PAdditionalFunctionTypeBits::BindPlayers },
				{ "EEOSSessionP2PAdditionalFunctionTypeBits::HostMigration", (int64)EEOSSessionP2PAdditionalFunctionTypeBits::HostMigration },
				{ "EEOSSessionP2PAdditionalFunctionTypeBits::GameFlowManager", (int64)EEOSSessionP2PAdditionalFunctionTypeBits::GameFlowManager },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BindPlayers.Name", "EEOSSessionP2PAdditionalFunctionTypeBits::BindPlayers" },
				{ "BlueprintType", "true" },
				{ "DataSharing.Name", "EEOSSessionP2PAdditionalFunctionTypeBits::DataSharing" },
				{ "GameFlowManager.Name", "EEOSSessionP2PAdditionalFunctionTypeBits::GameFlowManager" },
				{ "HostMigration.Name", "EEOSSessionP2PAdditionalFunctionTypeBits::HostMigration" },
				{ "ModuleRelativePath", "Public/EEOSSessionP2PAdditionalFunctionTypeBits.h" },
				{ "None.Name", "EEOSSessionP2PAdditionalFunctionTypeBits::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSSessionP2PAdditionalFunctionTypeBits",
				"EEOSSessionP2PAdditionalFunctionTypeBits",
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
