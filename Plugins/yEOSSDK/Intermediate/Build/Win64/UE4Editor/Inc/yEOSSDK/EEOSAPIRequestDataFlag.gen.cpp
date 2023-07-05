// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAPIRequestDataFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAPIRequestDataFlag() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAPIRequestDataFlag();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAPIRequestDataFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAPIRequestDataFlag, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAPIRequestDataFlag"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAPIRequestDataFlag>()
	{
		return EEOSAPIRequestDataFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAPIRequestDataFlag(EEOSAPIRequestDataFlag_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAPIRequestDataFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAPIRequestDataFlag_Hash() { return 3192867685U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAPIRequestDataFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAPIRequestDataFlag"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAPIRequestDataFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAPIRequestDataFlag::None", (int64)EEOSAPIRequestDataFlag::None },
				{ "EEOSAPIRequestDataFlag::Cancelable", (int64)EEOSAPIRequestDataFlag::Cancelable },
				{ "EEOSAPIRequestDataFlag::Canceled", (int64)EEOSAPIRequestDataFlag::Canceled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cancelable.Name", "EEOSAPIRequestDataFlag::Cancelable" },
				{ "Canceled.Name", "EEOSAPIRequestDataFlag::Canceled" },
				{ "ModuleRelativePath", "Public/EEOSAPIRequestDataFlag.h" },
				{ "None.Name", "EEOSAPIRequestDataFlag::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAPIRequestDataFlag",
				"EEOSAPIRequestDataFlag",
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
