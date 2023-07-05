// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSPacketReliability.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSPacketReliability() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSPacketReliability_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSPacketReliability"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSPacketReliability>()
	{
		return EEOSPacketReliability_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSPacketReliability(EEOSPacketReliability_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSPacketReliability"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability_Hash() { return 472940000U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSPacketReliability"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSPacketReliability::UnreliableUnordered", (int64)EEOSPacketReliability::UnreliableUnordered },
				{ "EEOSPacketReliability::ReliableUnordered", (int64)EEOSPacketReliability::ReliableUnordered },
				{ "EEOSPacketReliability::ReliableOrdered", (int64)EEOSPacketReliability::ReliableOrdered },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EEOSPacketReliability.h" },
				{ "ReliableOrdered.Name", "EEOSPacketReliability::ReliableOrdered" },
				{ "ReliableUnordered.Name", "EEOSPacketReliability::ReliableUnordered" },
				{ "UnreliableUnordered.Name", "EEOSPacketReliability::UnreliableUnordered" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSPacketReliability",
				"EEOSPacketReliability",
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
