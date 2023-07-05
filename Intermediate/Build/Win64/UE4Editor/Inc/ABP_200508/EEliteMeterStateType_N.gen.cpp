// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EEliteMeterStateType_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEliteMeterStateType_N() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EEliteMeterStateType_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EEliteMeterStateType_N"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EEliteMeterStateType_N>()
	{
		return EEliteMeterStateType_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEliteMeterStateType_N(EEliteMeterStateType_N_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EEliteMeterStateType_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N_Hash() { return 1535319584U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEliteMeterStateType_N"), 0, Get_Z_Construct_UEnum_ABP_200508_EEliteMeterStateType_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEliteMeterStateType_N::Neutral", (int64)EEliteMeterStateType_N::Neutral },
				{ "EEliteMeterStateType_N::Excite", (int64)EEliteMeterStateType_N::Excite },
				{ "EEliteMeterStateType_N::Special", (int64)EEliteMeterStateType_N::Special },
				{ "EEliteMeterStateType_N::Danger", (int64)EEliteMeterStateType_N::Danger },
				{ "EEliteMeterStateType_N::EEliteMeterStateType_MAX", (int64)EEliteMeterStateType_N::EEliteMeterStateType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Danger.Name", "EEliteMeterStateType_N::Danger" },
				{ "EEliteMeterStateType_MAX.Hidden", "" },
				{ "EEliteMeterStateType_MAX.Name", "EEliteMeterStateType_N::EEliteMeterStateType_MAX" },
				{ "Excite.Name", "EEliteMeterStateType_N::Excite" },
				{ "ModuleRelativePath", "Public/EEliteMeterStateType_N.h" },
				{ "Neutral.Name", "EEliteMeterStateType_N::Neutral" },
				{ "Special.Name", "EEliteMeterStateType_N::Special" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EEliteMeterStateType_N",
				"EEliteMeterStateType_N",
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
