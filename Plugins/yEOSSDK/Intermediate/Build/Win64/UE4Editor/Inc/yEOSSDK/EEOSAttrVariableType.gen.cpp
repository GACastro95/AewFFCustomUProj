// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSAttrVariableType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSAttrVariableType() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAttrVariableType();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSAttrVariableType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSAttrVariableType, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSAttrVariableType"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSAttrVariableType>()
	{
		return EEOSAttrVariableType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSAttrVariableType(EEOSAttrVariableType_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSAttrVariableType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSAttrVariableType_Hash() { return 949415081U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAttrVariableType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSAttrVariableType"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSAttrVariableType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSAttrVariableType::Boolean", (int64)EEOSAttrVariableType::Boolean },
				{ "EEOSAttrVariableType::Int64", (int64)EEOSAttrVariableType::Int64 },
				{ "EEOSAttrVariableType::Double", (int64)EEOSAttrVariableType::Double },
				{ "EEOSAttrVariableType::String", (int64)EEOSAttrVariableType::String },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Boolean.Name", "EEOSAttrVariableType::Boolean" },
				{ "Double.Name", "EEOSAttrVariableType::Double" },
				{ "Int64.Name", "EEOSAttrVariableType::Int64" },
				{ "ModuleRelativePath", "Public/EEOSAttrVariableType.h" },
				{ "String.Name", "EEOSAttrVariableType::String" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSAttrVariableType",
				"EEOSAttrVariableType",
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
