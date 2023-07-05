// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerScenarioNo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerScenarioNo() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioNo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerScenarioNo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerScenarioNo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerScenarioNo"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerScenarioNo>()
	{
		return ECareerScenarioNo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerScenarioNo(ECareerScenarioNo_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerScenarioNo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerScenarioNo_Hash() { return 2056719439U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioNo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerScenarioNo"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerScenarioNo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerScenarioNo::None", (int64)ECareerScenarioNo::None },
				{ "ECareerScenarioNo::SN_PR", (int64)ECareerScenarioNo::SN_PR },
				{ "ECareerScenarioNo::SN_1A", (int64)ECareerScenarioNo::SN_1A },
				{ "ECareerScenarioNo::SN_1B", (int64)ECareerScenarioNo::SN_1B },
				{ "ECareerScenarioNo::SN_1C", (int64)ECareerScenarioNo::SN_1C },
				{ "ECareerScenarioNo::SN_2A", (int64)ECareerScenarioNo::SN_2A },
				{ "ECareerScenarioNo::SN_2B", (int64)ECareerScenarioNo::SN_2B },
				{ "ECareerScenarioNo::SN_2C", (int64)ECareerScenarioNo::SN_2C },
				{ "ECareerScenarioNo::SN_3A", (int64)ECareerScenarioNo::SN_3A },
				{ "ECareerScenarioNo::SN_3B", (int64)ECareerScenarioNo::SN_3B },
				{ "ECareerScenarioNo::SN_3C", (int64)ECareerScenarioNo::SN_3C },
				{ "ECareerScenarioNo::SN_4A", (int64)ECareerScenarioNo::SN_4A },
				{ "ECareerScenarioNo::SN_4B", (int64)ECareerScenarioNo::SN_4B },
				{ "ECareerScenarioNo::SN_4C", (int64)ECareerScenarioNo::SN_4C },
				{ "ECareerScenarioNo::SN_ED", (int64)ECareerScenarioNo::SN_ED },
				{ "ECareerScenarioNo::Num", (int64)ECareerScenarioNo::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECareerScenarioNo.h" },
				{ "None.Name", "ECareerScenarioNo::None" },
				{ "Num.Name", "ECareerScenarioNo::Num" },
				{ "SN_1A.Name", "ECareerScenarioNo::SN_1A" },
				{ "SN_1B.Name", "ECareerScenarioNo::SN_1B" },
				{ "SN_1C.Name", "ECareerScenarioNo::SN_1C" },
				{ "SN_2A.Name", "ECareerScenarioNo::SN_2A" },
				{ "SN_2B.Name", "ECareerScenarioNo::SN_2B" },
				{ "SN_2C.Name", "ECareerScenarioNo::SN_2C" },
				{ "SN_3A.Name", "ECareerScenarioNo::SN_3A" },
				{ "SN_3B.Name", "ECareerScenarioNo::SN_3B" },
				{ "SN_3C.Name", "ECareerScenarioNo::SN_3C" },
				{ "SN_4A.Name", "ECareerScenarioNo::SN_4A" },
				{ "SN_4B.Name", "ECareerScenarioNo::SN_4B" },
				{ "SN_4C.Name", "ECareerScenarioNo::SN_4C" },
				{ "SN_ED.Name", "ECareerScenarioNo::SN_ED" },
				{ "SN_PR.Name", "ECareerScenarioNo::SN_PR" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerScenarioNo",
				"ECareerScenarioNo",
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
