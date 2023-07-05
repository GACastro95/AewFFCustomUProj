// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerStartInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerStartInfo() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStartInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerStartInfo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerStartInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerStartInfo"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerStartInfo>()
	{
		return ECareerStartInfo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerStartInfo(ECareerStartInfo_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerStartInfo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerStartInfo_Hash() { return 2425959981U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerStartInfo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerStartInfo"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerStartInfo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerStartInfo::Career_Start_NotSet", (int64)ECareerStartInfo::Career_Start_NotSet },
				{ "ECareerStartInfo::Career_Start_NewGame", (int64)ECareerStartInfo::Career_Start_NewGame },
				{ "ECareerStartInfo::Career_Start_Continue", (int64)ECareerStartInfo::Career_Start_Continue },
				{ "ECareerStartInfo::Career_Start_Through", (int64)ECareerStartInfo::Career_Start_Through },
				{ "ECareerStartInfo::Career_Start_MAX", (int64)ECareerStartInfo::Career_Start_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Career_Start_Continue.Name", "ECareerStartInfo::Career_Start_Continue" },
				{ "Career_Start_MAX.Hidden", "" },
				{ "Career_Start_MAX.Name", "ECareerStartInfo::Career_Start_MAX" },
				{ "Career_Start_NewGame.Name", "ECareerStartInfo::Career_Start_NewGame" },
				{ "Career_Start_NotSet.Name", "ECareerStartInfo::Career_Start_NotSet" },
				{ "Career_Start_Through.Name", "ECareerStartInfo::Career_Start_Through" },
				{ "ModuleRelativePath", "Public/ECareerStartInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerStartInfo",
				"ECareerStartInfo",
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
