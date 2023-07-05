// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESelectWreslterSortType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESelectWreslterSortType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESelectWreslterSortType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESelectWreslterSortType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESelectWreslterSortType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESelectWreslterSortType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESelectWreslterSortType>()
	{
		return ESelectWreslterSortType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelectWreslterSortType(ESelectWreslterSortType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESelectWreslterSortType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESelectWreslterSortType_Hash() { return 1774681110U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESelectWreslterSortType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelectWreslterSortType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESelectWreslterSortType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelectWreslterSortType::None", (int64)ESelectWreslterSortType::None },
				{ "ESelectWreslterSortType::Asc", (int64)ESelectWreslterSortType::Asc },
				{ "ESelectWreslterSortType::Desc", (int64)ESelectWreslterSortType::Desc },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Asc.Name", "ESelectWreslterSortType::Asc" },
				{ "BlueprintType", "true" },
				{ "Desc.Name", "ESelectWreslterSortType::Desc" },
				{ "ModuleRelativePath", "Public/ESelectWreslterSortType.h" },
				{ "None.Name", "ESelectWreslterSortType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESelectWreslterSortType",
				"ESelectWreslterSortType",
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
