// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EMoves_SpecialRestriction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMoves_SpecialRestriction() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMoves_SpecialRestriction();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EMoves_SpecialRestriction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EMoves_SpecialRestriction, Z_Construct_UPackage__Script_Creation(), TEXT("EMoves_SpecialRestriction"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EMoves_SpecialRestriction>()
	{
		return EMoves_SpecialRestriction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoves_SpecialRestriction(EMoves_SpecialRestriction_StaticEnum, TEXT("/Script/Creation"), TEXT("EMoves_SpecialRestriction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EMoves_SpecialRestriction_Hash() { return 2057175210U; }
	UEnum* Z_Construct_UEnum_Creation_EMoves_SpecialRestriction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoves_SpecialRestriction"), 0, Get_Z_Construct_UEnum_Creation_EMoves_SpecialRestriction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoves_SpecialRestriction::None", (int64)EMoves_SpecialRestriction::None },
				{ "EMoves_SpecialRestriction::Special", (int64)EMoves_SpecialRestriction::Special },
				{ "EMoves_SpecialRestriction::Finisher", (int64)EMoves_SpecialRestriction::Finisher },
				{ "EMoves_SpecialRestriction::Signature", (int64)EMoves_SpecialRestriction::Signature },
				{ "EMoves_SpecialRestriction::EMoves_MAX", (int64)EMoves_SpecialRestriction::EMoves_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMoves_MAX.Hidden", "" },
				{ "EMoves_MAX.Name", "EMoves_SpecialRestriction::EMoves_MAX" },
				{ "Finisher.Name", "EMoves_SpecialRestriction::Finisher" },
				{ "ModuleRelativePath", "Public/EMoves_SpecialRestriction.h" },
				{ "None.Name", "EMoves_SpecialRestriction::None" },
				{ "Signature.Name", "EMoves_SpecialRestriction::Signature" },
				{ "Special.Name", "EMoves_SpecialRestriction::Special" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EMoves_SpecialRestriction",
				"EMoves_SpecialRestriction",
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
