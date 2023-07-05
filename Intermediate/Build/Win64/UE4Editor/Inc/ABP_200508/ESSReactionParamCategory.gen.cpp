// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSReactionParamCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSReactionParamCategory() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSReactionParamCategory();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSReactionParamCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSReactionParamCategory, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSReactionParamCategory"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSReactionParamCategory>()
	{
		return ESSReactionParamCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSReactionParamCategory(ESSReactionParamCategory_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSReactionParamCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSReactionParamCategory_Hash() { return 1832281824U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSReactionParamCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSReactionParamCategory"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSReactionParamCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSReactionParamCategory::KnockBack", (int64)ESSReactionParamCategory::KnockBack },
				{ "ESSReactionParamCategory::Blow", (int64)ESSReactionParamCategory::Blow },
				{ "ESSReactionParamCategory::WallHit", (int64)ESSReactionParamCategory::WallHit },
				{ "ESSReactionParamCategory::WaitSituation", (int64)ESSReactionParamCategory::WaitSituation },
				{ "ESSReactionParamCategory::WallOver", (int64)ESSReactionParamCategory::WallOver },
				{ "ESSReactionParamCategory::Max", (int64)ESSReactionParamCategory::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Blow.Name", "ESSReactionParamCategory::Blow" },
				{ "BlueprintType", "true" },
				{ "KnockBack.Name", "ESSReactionParamCategory::KnockBack" },
				{ "Max.Name", "ESSReactionParamCategory::Max" },
				{ "ModuleRelativePath", "Public/ESSReactionParamCategory.h" },
				{ "WaitSituation.Name", "ESSReactionParamCategory::WaitSituation" },
				{ "WallHit.Name", "ESSReactionParamCategory::WallHit" },
				{ "WallOver.Name", "ESSReactionParamCategory::WallOver" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSReactionParamCategory",
				"ESSReactionParamCategory",
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
