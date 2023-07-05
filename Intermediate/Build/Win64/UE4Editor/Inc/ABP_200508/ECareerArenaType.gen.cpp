// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerArenaType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerArenaType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerArenaType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerArenaType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerArenaType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerArenaType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerArenaType>()
	{
		return ECareerArenaType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerArenaType(ECareerArenaType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerArenaType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerArenaType_Hash() { return 1154816528U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerArenaType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerArenaType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerArenaType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerArenaType::DARK", (int64)ECareerArenaType::DARK },
				{ "ECareerArenaType::DYNAMITE", (int64)ECareerArenaType::DYNAMITE },
				{ "ECareerArenaType::ALL_OUT", (int64)ECareerArenaType::ALL_OUT },
				{ "ECareerArenaType::FULL_GEAR", (int64)ECareerArenaType::FULL_GEAR },
				{ "ECareerArenaType::REVOLUTION", (int64)ECareerArenaType::REVOLUTION },
				{ "ECareerArenaType::DOUBLE_OR_NOTHING", (int64)ECareerArenaType::DOUBLE_OR_NOTHING },
				{ "ECareerArenaType::INDIES", (int64)ECareerArenaType::INDIES },
				{ "ECareerArenaType::RAMPAGE", (int64)ECareerArenaType::RAMPAGE },
				{ "ECareerArenaType::MIRROR", (int64)ECareerArenaType::MIRROR },
				{ "ECareerArenaType::KEEP", (int64)ECareerArenaType::KEEP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALL_OUT.Name", "ECareerArenaType::ALL_OUT" },
				{ "BlueprintType", "true" },
				{ "DARK.Name", "ECareerArenaType::DARK" },
				{ "DOUBLE_OR_NOTHING.Name", "ECareerArenaType::DOUBLE_OR_NOTHING" },
				{ "DYNAMITE.Name", "ECareerArenaType::DYNAMITE" },
				{ "FULL_GEAR.Name", "ECareerArenaType::FULL_GEAR" },
				{ "INDIES.Name", "ECareerArenaType::INDIES" },
				{ "KEEP.Name", "ECareerArenaType::KEEP" },
				{ "MIRROR.Name", "ECareerArenaType::MIRROR" },
				{ "ModuleRelativePath", "Public/ECareerArenaType.h" },
				{ "RAMPAGE.Name", "ECareerArenaType::RAMPAGE" },
				{ "REVOLUTION.Name", "ECareerArenaType::REVOLUTION" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerArenaType",
				"ECareerArenaType",
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
