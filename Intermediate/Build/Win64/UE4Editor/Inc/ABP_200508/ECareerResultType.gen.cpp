// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerResultType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerResultType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerResultType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerResultType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerResultType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerResultType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerResultType>()
	{
		return ECareerResultType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerResultType(ECareerResultType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerResultType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerResultType_Hash() { return 352927245U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerResultType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerResultType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerResultType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerResultType::None", (int64)ECareerResultType::None },
				{ "ECareerResultType::Rank_A_Plus", (int64)ECareerResultType::Rank_A_Plus },
				{ "ECareerResultType::Rank_A", (int64)ECareerResultType::Rank_A },
				{ "ECareerResultType::Rank_B_Plus", (int64)ECareerResultType::Rank_B_Plus },
				{ "ECareerResultType::Rank_B", (int64)ECareerResultType::Rank_B },
				{ "ECareerResultType::Rank_C", (int64)ECareerResultType::Rank_C },
				{ "ECareerResultType::Rank_D", (int64)ECareerResultType::Rank_D },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECareerResultType.h" },
				{ "None.Name", "ECareerResultType::None" },
				{ "Rank_A.Name", "ECareerResultType::Rank_A" },
				{ "Rank_A_Plus.Name", "ECareerResultType::Rank_A_Plus" },
				{ "Rank_B.Name", "ECareerResultType::Rank_B" },
				{ "Rank_B_Plus.Name", "ECareerResultType::Rank_B_Plus" },
				{ "Rank_C.Name", "ECareerResultType::Rank_C" },
				{ "Rank_D.Name", "ECareerResultType::Rank_D" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerResultType",
				"ECareerResultType",
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
