// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESeesawRelationType_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESeesawRelationType_N() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESeesawRelationType_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESeesawRelationType_N"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESeesawRelationType_N>()
	{
		return ESeesawRelationType_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESeesawRelationType_N(ESeesawRelationType_N_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESeesawRelationType_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N_Hash() { return 523920686U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESeesawRelationType_N"), 0, Get_Z_Construct_UEnum_ABP_200508_ESeesawRelationType_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESeesawRelationType_N::Neutral", (int64)ESeesawRelationType_N::Neutral },
				{ "ESeesawRelationType_N::Offense", (int64)ESeesawRelationType_N::Offense },
				{ "ESeesawRelationType_N::Defense", (int64)ESeesawRelationType_N::Defense },
				{ "ESeesawRelationType_N::ESeesawRelationType_MAX", (int64)ESeesawRelationType_N::ESeesawRelationType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Defense.Name", "ESeesawRelationType_N::Defense" },
				{ "ESeesawRelationType_MAX.Hidden", "" },
				{ "ESeesawRelationType_MAX.Name", "ESeesawRelationType_N::ESeesawRelationType_MAX" },
				{ "ModuleRelativePath", "Public/ESeesawRelationType_N.h" },
				{ "Neutral.Name", "ESeesawRelationType_N::Neutral" },
				{ "Offense.Name", "ESeesawRelationType_N::Offense" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESeesawRelationType_N",
				"ESeesawRelationType_N",
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
