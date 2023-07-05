// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESeesawStateType_N.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESeesawStateType_N() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESeesawStateType_N();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESeesawStateType_N_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESeesawStateType_N, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESeesawStateType_N"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESeesawStateType_N>()
	{
		return ESeesawStateType_N_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESeesawStateType_N(ESeesawStateType_N_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESeesawStateType_N"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESeesawStateType_N_Hash() { return 3663442675U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESeesawStateType_N()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESeesawStateType_N"), 0, Get_Z_Construct_UEnum_ABP_200508_ESeesawStateType_N_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESeesawStateType_N::Normal", (int64)ESeesawStateType_N::Normal },
				{ "ESeesawStateType_N::Excite", (int64)ESeesawStateType_N::Excite },
				{ "ESeesawStateType_N::Special", (int64)ESeesawStateType_N::Special },
				{ "ESeesawStateType_N::Buff", (int64)ESeesawStateType_N::Buff },
				{ "ESeesawStateType_N::PenaltyBuff", (int64)ESeesawStateType_N::PenaltyBuff },
				{ "ESeesawStateType_N::ESeesawStateType_MAX", (int64)ESeesawStateType_N::ESeesawStateType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Buff.Name", "ESeesawStateType_N::Buff" },
				{ "ESeesawStateType_MAX.Hidden", "" },
				{ "ESeesawStateType_MAX.Name", "ESeesawStateType_N::ESeesawStateType_MAX" },
				{ "Excite.Name", "ESeesawStateType_N::Excite" },
				{ "ModuleRelativePath", "Public/ESeesawStateType_N.h" },
				{ "Normal.Name", "ESeesawStateType_N::Normal" },
				{ "PenaltyBuff.Name", "ESeesawStateType_N::PenaltyBuff" },
				{ "Special.Name", "ESeesawStateType_N::Special" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESeesawStateType_N",
				"ESeesawStateType_N",
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
