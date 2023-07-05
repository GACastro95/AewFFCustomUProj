// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSRarity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSRarity() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSRarity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSRarity, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSRarity"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSRarity>()
	{
		return ESSRarity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSRarity(ESSRarity_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSRarity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSRarity_Hash() { return 2688654119U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSRarity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSRarity"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSRarity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSRarity::None", (int64)ESSRarity::None },
				{ "ESSRarity::Common", (int64)ESSRarity::Common },
				{ "ESSRarity::UnCommon", (int64)ESSRarity::UnCommon },
				{ "ESSRarity::Rare", (int64)ESSRarity::Rare },
				{ "ESSRarity::Epic", (int64)ESSRarity::Epic },
				{ "ESSRarity::Legendary", (int64)ESSRarity::Legendary },
				{ "ESSRarity::Max", (int64)ESSRarity::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Common.Name", "ESSRarity::Common" },
				{ "Epic.Name", "ESSRarity::Epic" },
				{ "Legendary.Name", "ESSRarity::Legendary" },
				{ "Max.Name", "ESSRarity::Max" },
				{ "ModuleRelativePath", "Public/ESSRarity.h" },
				{ "None.Name", "ESSRarity::None" },
				{ "Rare.Name", "ESSRarity::Rare" },
				{ "UnCommon.Name", "ESSRarity::UnCommon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSRarity",
				"ESSRarity",
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
