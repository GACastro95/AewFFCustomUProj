// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ERefereeDQReactionKind_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERefereeDQReactionKind_N() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ERefereeDQReactionKind_N();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ERefereeDQReactionKind_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ERefereeDQReactionKind_N, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ERefereeDQReactionKind_N"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ERefereeDQReactionKind_N>()
	{
		return ERefereeDQReactionKind_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERefereeDQReactionKind_N(ERefereeDQReactionKind_N_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ERefereeDQReactionKind_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ERefereeDQReactionKind_N_Hash() { return 4251172199U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ERefereeDQReactionKind_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERefereeDQReactionKind_N"), 0, Get_Z_Construct_UEnum_ABP_200508_ERefereeDQReactionKind_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERefereeDQReactionKind_N::None", (int64)ERefereeDQReactionKind_N::None },
				{ "ERefereeDQReactionKind_N::Normal", (int64)ERefereeDQReactionKind_N::Normal },
				{ "ERefereeDQReactionKind_N::Anger", (int64)ERefereeDQReactionKind_N::Anger },
				{ "ERefereeDQReactionKind_N::PreDQ", (int64)ERefereeDQReactionKind_N::PreDQ },
				{ "ERefereeDQReactionKind_N::DQ", (int64)ERefereeDQReactionKind_N::DQ },
				{ "ERefereeDQReactionKind_N::ERefereeDQReactionKind_MAX", (int64)ERefereeDQReactionKind_N::ERefereeDQReactionKind_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Anger.Name", "ERefereeDQReactionKind_N::Anger" },
				{ "BlueprintType", "true" },
				{ "DQ.Name", "ERefereeDQReactionKind_N::DQ" },
				{ "ERefereeDQReactionKind_MAX.Hidden", "" },
				{ "ERefereeDQReactionKind_MAX.Name", "ERefereeDQReactionKind_N::ERefereeDQReactionKind_MAX" },
				{ "ModuleRelativePath", "Public/ERefereeDQReactionKind_N.h" },
				{ "None.Name", "ERefereeDQReactionKind_N::None" },
				{ "Normal.Name", "ERefereeDQReactionKind_N::Normal" },
				{ "PreDQ.Name", "ERefereeDQReactionKind_N::PreDQ" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ERefereeDQReactionKind_N",
				"ERefereeDQReactionKind_N",
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
