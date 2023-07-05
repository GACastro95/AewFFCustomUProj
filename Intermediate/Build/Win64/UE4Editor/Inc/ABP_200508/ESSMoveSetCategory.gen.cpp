// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSMoveSetCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSMoveSetCategory() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSMoveSetCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSMoveSetCategory"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSMoveSetCategory>()
	{
		return ESSMoveSetCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSMoveSetCategory(ESSMoveSetCategory_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSMoveSetCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory_Hash() { return 342576481U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSMoveSetCategory"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSMoveSetCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSMoveSetCategory::None", (int64)ESSMoveSetCategory::None },
				{ "ESSMoveSetCategory::Strike", (int64)ESSMoveSetCategory::Strike },
				{ "ESSMoveSetCategory::Grapple", (int64)ESSMoveSetCategory::Grapple },
				{ "ESSMoveSetCategory::HighFly", (int64)ESSMoveSetCategory::HighFly },
				{ "ESSMoveSetCategory::Weapon", (int64)ESSMoveSetCategory::Weapon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Grapple.Name", "ESSMoveSetCategory::Grapple" },
				{ "HighFly.Name", "ESSMoveSetCategory::HighFly" },
				{ "ModuleRelativePath", "Public/ESSMoveSetCategory.h" },
				{ "None.Name", "ESSMoveSetCategory::None" },
				{ "Strike.Name", "ESSMoveSetCategory::Strike" },
				{ "Weapon.Name", "ESSMoveSetCategory::Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSMoveSetCategory",
				"ESSMoveSetCategory",
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
