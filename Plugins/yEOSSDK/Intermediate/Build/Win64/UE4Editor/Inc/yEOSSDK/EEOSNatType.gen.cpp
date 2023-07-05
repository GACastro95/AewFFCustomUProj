// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSNatType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSNatType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSNatType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSNatType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSNatType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSNatType>()
	{
		return EEOSNatType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSNatType(EEOSNatType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSNatType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSNatType_Hash() { return 4035984063U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSNatType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSNatType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSNatType::Unknown", (int64)EEOSNatType::Unknown },
				{ "EEOSNatType::Open", (int64)EEOSNatType::Open },
				{ "EEOSNatType::Moderate", (int64)EEOSNatType::Moderate },
				{ "EEOSNatType::Strict", (int64)EEOSNatType::Strict },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Moderate.Name", "EEOSNatType::Moderate" },
				{ "ModuleRelativePath", "Public/EEOSNatType.h" },
				{ "Open.Name", "EEOSNatType::Open" },
				{ "Strict.Name", "EEOSNatType::Strict" },
				{ "Unknown.Name", "EEOSNatType::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSNatType",
				"EEOSNatType",
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
