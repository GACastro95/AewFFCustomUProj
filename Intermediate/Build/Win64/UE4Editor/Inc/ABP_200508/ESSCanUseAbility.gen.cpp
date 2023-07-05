// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSCanUseAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSCanUseAbility() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCanUseAbility();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSCanUseAbility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSCanUseAbility, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSCanUseAbility"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSCanUseAbility>()
	{
		return ESSCanUseAbility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSCanUseAbility(ESSCanUseAbility_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSCanUseAbility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSCanUseAbility_Hash() { return 2497333141U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSCanUseAbility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSCanUseAbility"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSCanUseAbility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSCanUseAbility::CanUse", (int64)ESSCanUseAbility::CanUse },
				{ "ESSCanUseAbility::CanNotUse_Empty", (int64)ESSCanUseAbility::CanNotUse_Empty },
				{ "ESSCanUseAbility::CanNotUse_CoolTime", (int64)ESSCanUseAbility::CanNotUse_CoolTime },
				{ "ESSCanUseAbility::CanNotUse_State", (int64)ESSCanUseAbility::CanNotUse_State },
				{ "ESSCanUseAbility::CanNotUse_Passive", (int64)ESSCanUseAbility::CanNotUse_Passive },
				{ "ESSCanUseAbility::CanNotUse_Using", (int64)ESSCanUseAbility::CanNotUse_Using },
				{ "ESSCanUseAbility::CanNotUse_Other", (int64)ESSCanUseAbility::CanNotUse_Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CanNotUse_CoolTime.Name", "ESSCanUseAbility::CanNotUse_CoolTime" },
				{ "CanNotUse_Empty.Name", "ESSCanUseAbility::CanNotUse_Empty" },
				{ "CanNotUse_Other.Name", "ESSCanUseAbility::CanNotUse_Other" },
				{ "CanNotUse_Passive.Name", "ESSCanUseAbility::CanNotUse_Passive" },
				{ "CanNotUse_State.Name", "ESSCanUseAbility::CanNotUse_State" },
				{ "CanNotUse_Using.Name", "ESSCanUseAbility::CanNotUse_Using" },
				{ "CanUse.Name", "ESSCanUseAbility::CanUse" },
				{ "ModuleRelativePath", "Public/ESSCanUseAbility.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSCanUseAbility",
				"ESSCanUseAbility",
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
