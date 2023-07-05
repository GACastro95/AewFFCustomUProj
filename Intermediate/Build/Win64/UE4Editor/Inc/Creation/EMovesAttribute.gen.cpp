// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMovesAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMovesAttribute() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesAttribute();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMovesAttribute_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMovesAttribute, Z_Construct_UPackage__Script_Creation(), TEXT("EMovesAttribute"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMovesAttribute>()
	{
		return EMovesAttribute_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovesAttribute(EMovesAttribute_StaticEnum, TEXT("/Script/Creation"), TEXT("EMovesAttribute"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMovesAttribute_Hash() { return 3703850665U; }
	UEnum* Z_Construct_UEnum_Creation_EMovesAttribute()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovesAttribute"), 0, Get_Z_Construct_UEnum_Creation_EMovesAttribute_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovesAttribute::Attribute_000", (int64)EMovesAttribute::Attribute_000 },
				{ "EMovesAttribute::Attribute_001", (int64)EMovesAttribute::Attribute_001 },
				{ "EMovesAttribute::Attribute_002", (int64)EMovesAttribute::Attribute_002 },
				{ "EMovesAttribute::Attribute_003", (int64)EMovesAttribute::Attribute_003 },
				{ "EMovesAttribute::Attribute_004", (int64)EMovesAttribute::Attribute_004 },
				{ "EMovesAttribute::Attribute_005", (int64)EMovesAttribute::Attribute_005 },
				{ "EMovesAttribute::Attribute_006", (int64)EMovesAttribute::Attribute_006 },
				{ "EMovesAttribute::Attribute_007", (int64)EMovesAttribute::Attribute_007 },
				{ "EMovesAttribute::Attribute_MAX", (int64)EMovesAttribute::Attribute_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attribute_000.Name", "EMovesAttribute::Attribute_000" },
				{ "Attribute_001.Name", "EMovesAttribute::Attribute_001" },
				{ "Attribute_002.Name", "EMovesAttribute::Attribute_002" },
				{ "Attribute_003.Name", "EMovesAttribute::Attribute_003" },
				{ "Attribute_004.Name", "EMovesAttribute::Attribute_004" },
				{ "Attribute_005.Name", "EMovesAttribute::Attribute_005" },
				{ "Attribute_006.Name", "EMovesAttribute::Attribute_006" },
				{ "Attribute_007.Name", "EMovesAttribute::Attribute_007" },
				{ "Attribute_MAX.Hidden", "" },
				{ "Attribute_MAX.Name", "EMovesAttribute::Attribute_MAX" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EMovesAttribute.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMovesAttribute",
				"EMovesAttribute",
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
